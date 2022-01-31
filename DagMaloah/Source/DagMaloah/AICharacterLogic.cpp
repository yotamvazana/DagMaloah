// Fill out your copyright notice in the Description page of Project Settings.

#include "StandingState.h"
#include "MoveState.h"
#include "AICharacterLogic.h"
// Sets default values
AAICharacterLogic::AAICharacterLogic()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//_firstDirection = GetYawRotation();
}

// Called when the game starts or when spawned
void AAICharacterLogic::BeginPlay()
{
	InitMap();
	Super::BeginPlay();
	


}
void AAICharacterLogic::InitMap()
{
	UStandingState* standingState = NewObject< UStandingState>();
	standingState->SetCharacterLogic(this);
	standingState->SetState(StateTypeEnum::Standing_State);
	_stateMap.Add(StateTypeEnum::Standing_State, standingState);

	UMoveState* moveState = NewObject < UMoveState>();
	moveState->SetCharacterLogic(this);
	moveState->SetState(StateTypeEnum::Move_Forward_State);
	_stateMap.Add(StateTypeEnum::Move_Forward_State, moveState);
}
void AAICharacterLogic::DeleteMap() {
	delete _stateMap.Find(StateTypeEnum::Move_Forward_State);
	delete _stateMap.Find(StateTypeEnum::Standing_State);
}
// Called every frame
void AAICharacterLogic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (_currentState != nullptr)
		_currentState->OnState();
}

// Called to bind functionality to input
void AAICharacterLogic::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

AController* AAICharacterLogic::GetController() { return Controller; }

void AAICharacterLogic::MoveToState(TEnumAsByte<StateTypeEnum> state)
{
	
	if (_currentState!= nullptr)
			_currentState->OnStateExit();
	
	_currentState = *_stateMap.Find(state);

	if (_currentState != nullptr)
		_currentState->OnStateEnter();
}
