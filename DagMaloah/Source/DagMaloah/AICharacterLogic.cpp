// Fill out your copyright notice in the Description page of Project Settings.

#include "AICharacterLogic.h"

#include "DollClass.h"
#include "StandingState.h"
#include "MoveState.h"
#include "DecisionState.h"
#include "DeathState.h"
#include "WinState.h"
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
	InitAiParameters();
	Super::BeginPlay();


}

void AAICharacterLogic::DestroyMapElements()
{
	for (auto It = _stateMap.CreateConstIterator(); It; ++It) {
		delete It.Value();
	}
	_stateMap.Reset();
	delete _rayCastHandler;
}


void AAICharacterLogic::InitAiParameters()
{

	if (_stateMap.Num() == 0)
	{

		_stateMap.Add(StateTypeEnum::Standing_State, new StandingState(this));
		_stateMap.Add(StateTypeEnum::Move_Forward_State, new MoveState(this));
		_stateMap.Add(StateTypeEnum::Decision_State, new  DecisionState(this));
		_stateMap.Add(StateTypeEnum::Death_State, new  DeathState(this));
		_stateMap.Add(StateTypeEnum::Winning_State, new  WinState(this));


		_rayCastHandler = new RaycastHandler();
		_rayCastHandler->SetRayDistance(_data->GetRandomRayDistanceCheck());
		_rayCastHandler->SetAngle(_data->GetRandomRayAngleCheck());
	}
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

	}
	else {

		if ((_currentState != nullptr))
			_currentState->OnState(DeltaTime);
	}
}

// Called to bind functionality to input
void AAICharacterLogic::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}




void AAICharacterLogic::SetAlive(bool isPlaying)
{
	isAlive = isPlaying;
	if (!isAlive)
		OnAIDeath();
}

FVector AAICharacterLogic::GetWinDestination()
{
	/*
	DrawDebugLine(
		GetWorld(),GetTransform().GetLocation(),
		FVector(GetTransform().GetLocation().X,_dollReference->GetTransform().GetLocation().Y,_dollReference->GetTransform().GetLocation().Z),
		FColor::Green,
		false,
		0.1f,
		FVector::Dist(GetTransform().GetLocation(),FVector(GetTransform().GetLocation().X,_dollReference->GetTransform().GetLocation().Y,_dollReference->GetTransform().GetLocation().Z))
	);
	*/
	FVector dollPos = _dollReference->GetTransform().GetLocation();
	dollPos.X = GetTransform().GetLocation().X;
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
	FVector dollPosition = GetDollRef()->GetDollTransform().GetLocation();
	FVector myPosition = GetTransform().GetLocation();
	FVector headPositionOffset = FVector(0, 0, -300);
	dollPosition += headPositionOffset;
	FVector direction = dollPosition - myPosition;
	direction.Normalize();
	float distance = FVector::Dist(dollPosition, myPosition);
	//FVector Forward = (myPosition + headPositionOffset) -dollPosition;
	//Forward.Normalize();
	//dollPosition = FVector(dollPosition.X + (Forward.X * 100), dollPosition.Y + (Forward.Y * 100), dollPosition.Z + (Forward.Z * 100) + 300);
	//FVector end = dollPosition + (Forward * 10000);
	FHitResult hit;
	if (GetWorld())
	{
		FCollisionQueryParams traceParams(SCENE_QUERY_STAT(IsDollSeeingMe), true, GetInstigator());
		//bool actorHit = GetWorld()->LineTraceSingleByChannel(hit, dollPosition, end, ECC_Pawn, traceParams, FCollisionResponseParams());
		bool actorHit = GetWorld()->LineTraceSingleByChannel(hit, dollPosition, myPosition, ECC_Visibility, traceParams, FCollisionResponseParams());
		DrawDebugLine(GetWorld(), dollPosition, myPosition, FColor::Red, false, 0.1, 0, 5);
		if (actorHit && hit.GetActor()) {
			//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, hit.GetActor()->GetFName().ToString());
			return (hit.GetActor() == (AActor*)this);
		}
	}
	return false;
}


/// <summary>
/// Handling the behaviour states of the AI
/// </summary>
/// <param name="state"></param>
void AAICharacterLogic::MoveToState(TEnumAsByte<StateTypeEnum> state)
{
	if (GetAlive() == false)
		return;
	//Exiting previous state and entering the next state
	if ((_currentState != nullptr))
		_currentState->OnStateExit();

	_currentState = *_stateMap.Find(state);
	//ValidateMapValues();

	if (_currentState != nullptr)
		_currentState->OnStateEnter();
	else
		UE_LOG(LogTemp, Warning, TEXT("STATE IS NULL %d"), state)

		UE_LOG(LogTemp, Warning, TEXT("Changing State %d"), state)
}