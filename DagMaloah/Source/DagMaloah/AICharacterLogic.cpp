// Fill out your copyright notice in the Description page of Project Settings.

#include "AICharacterLogic.h"

#include "DollClass.h"
#include "StandingState.h"
#include "MoveState.h"
#include "DecisionState.h"
#include "DeathState.h"
#include "WinState.h"
#include "CSVHandler.h"
int AAICharacterLogic::AICount = 1; 
// Sets default values
AAICharacterLogic::AAICharacterLogic()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAICharacterLogic::BeginPlay()
{
	DestroyMapElements();
	Super::BeginPlay();
	InitAiParameters();
	
	_csvData.ID = AAICharacterLogic::AICount;
	_csvData.isPlayer = false;
	AAICharacterLogic::AICount++;
	
}
void AAICharacterLogic::BeginDestroy() {
	DestroyMapElements();	
	Super::BeginDestroy();
}

void AAICharacterLogic::DestroyMapElements()
{
	for (auto It = _stateMap.CreateConstIterator(); It; ++It) {
		delete It.Value();
	}
	delete _rayCastHandler;

	_rayCastHandler = nullptr;
	_currentState = nullptr;
	_stateMap.Reset();
	_isAlive = false;

}


void AAICharacterLogic::InitAiParameters()
{
	// assign raycast handler
	_rayCastHandler = new RaycastHandler(_data);
	// set states map
	_stateMap.Add(StateTypeEnum::Standing_State, new StandingState(this));
	_stateMap.Add(StateTypeEnum::Move_Forward_State, new MoveState(this));
	_stateMap.Add(StateTypeEnum::Decision_State, new  DecisionState(this));
	_stateMap.Add(StateTypeEnum::Death_State, new  DeathState(this));
	_stateMap.Add(StateTypeEnum::Winning_State, new  WinState(this));

	if (_data == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Data Is Null!"))
			return;
	}

	//reset parameters
	_csvData.isDead = false;
	_csvData.isWon = false;
	_csvData.time = 0;

	SetAlive(true);
	_currentState = nullptr;
}
// Called every frame
void AAICharacterLogic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if ( !GetAlive() || !DeltaTime)
		return;

	float disOffsetCondition = 100.f;
	if (FVector::Dist(GetWinDestination(), GetTransform().GetLocation()) <= disOffsetCondition)
	{
		MoveToState(StateTypeEnum::Winning_State);
		_csvData.isWon = true;
	}
	else {

		if ((_currentState != nullptr))
			_currentState->OnState(DeltaTime);
	}

	_csvData.time += DeltaTime;
}

// Called to bind functionality to input
void AAICharacterLogic::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}




void AAICharacterLogic::SetAlive(bool isPlaying)
{
	_isAlive = isPlaying;
	if (!_isAlive) {
		_csvData.isDead = true;
		OnAIDeath();
	} 
}



/// <summary>
/// create win destination point based on the current position of the ai and the doll
/// </summary>
/// <returns></returns>
FVector AAICharacterLogic::GetWinDestination()
{
	// creating a point based on the current actor's X position and the doll's YZ position 
	//adding offset so it will pass the doll line
	float yWinOffset = 800.f;
	FVector dollPos = _dollReference->GetTransform().GetLocation();
	dollPos.X = GetTransform().GetLocation().X;
	dollPos.Y += yWinOffset;
	if (ToShowRayCast()) {
	DrawDebugLine(
		GetWorld(),GetTransform().GetLocation(),
		dollPos,
		FColor::Green,
		false,
		0.5f,
		FVector::Dist(GetTransform().GetLocation(), dollPos)
	);
	}
	
	return dollPos;
}

/// <summary>
/// Checking if the doll have clear eye sight to the AI
/// </summary>
/// <returns>return if the doll have clear eye sight path to the AI</returns>
bool AAICharacterLogic::IsDollSeeingMe()
{
	if (GetDollRef() == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Doll Is Null!"))
			return false;
	}
	//my position
	FVector myPosition = GetTransform().GetLocation();

	// doll position
	FVector dollPosition = GetDollRef()->GetDollTransform().GetLocation();
	FVector headPositionOffset = FVector(0, 0, 300.f);
	dollPosition += headPositionOffset;

	// get distance and direction
	float distance = FVector::Dist(dollPosition, myPosition);
	FVector direction = dollPosition - myPosition;
	direction.Normalize();

	FHitResult hit;
	//check if the current world is valid
	if (GetWorld())
	{
		FCollisionQueryParams traceParams(SCENE_QUERY_STAT(IsDollSeeingMe), true, GetInstigator());
	
		bool actorHit = GetWorld()->LineTraceSingleByChannel(hit,myPosition , dollPosition, ECC_Visibility, traceParams, FCollisionResponseParams());
	
		if (ToShowRayCast())
			DrawDebugLine(GetWorld(), dollPosition, myPosition, FColor::Red, false, 0.1, 0, 5);
		//check if we hit something and if we hit an actor
		if (actorHit && hit.GetActor()) 
		{
		//	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, hit.GetActor()->GetFName().ToString());
		
			//retrun true if the path the ray pass through is clear between myself and the doll
			return (hit.GetActor() == (AActor*)GetDollRef());
		}
	}
	return false;
}

void AAICharacterLogic::OnInitAIEvent()
{
	OnInitAI();
	DestroyMapElements();
	InitAiParameters();
}


/// <summary>
/// Handling the behaviour states of the AI
/// </summary>
/// <param name="state"></param>
void AAICharacterLogic::MoveToState(TEnumAsByte<StateTypeEnum> state)
{
	if (GetAlive() == false || _stateMap.Num() == 0 )
		return;
	//Exiting previous state and entering the next state
	if ((_currentState != nullptr))
		_currentState->OnStateExit();

	_currentState = *_stateMap.Find(state);

	//Entering new state
	if (_currentState != nullptr)
		_currentState->OnStateEnter();


	//	UE_LOG(LogTemp, Warning, TEXT("Changing State %d"), state)
}

void AAICharacterLogic::UploadData()
{
	CSVHandler::GetInstance().AssignData(_csvData);
}
