// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveState.h"
#include "AICharacterLogic.h"
#include "DollClass.h"

void UMoveState::MoveForward()
{
	if (GetController())
	{
		const FVector direction = FRotationMatrix(GetYawRotation()).GetUnitAxis(EAxis::X);
		GetCharacterLogic()->AddMovementInput(direction, speed  * GetWorld()->DeltaTimeSeconds);
		//UE_LOG(LogTemp, Warning, TEXT("Actor Was Moved!"))

	}
}
void UMoveState::RotateTowards(FRotator rotation)
{
	GetCharacterLogic()->SetActorRotation(rotation);
}

void UMoveState::OnStateEnter()
{
	speed = GetDataAsset()->GetRandomMovementSpeed();
	_raycastShooted = GetCharacterLogic()->GetRayCastHandler();
	ADollClass* doll = GetCharacterLogic()->GetDollRef();
	AActor* actor = Cast<AActor>(GetController());
	if (doll->RayTestFromDoll(actor) && doll->GetIsRedLight())
	{
		MoveForward();
		GetCharacterLogic()->MoveToState(StateTypeEnum::Standing_State);
	}
}

void UMoveState::OnState()
{

	if (GetCharacterLogic()->GetDollRef()->GetIsRedLight())
			GetCharacterLogic()->MoveToState(StateTypeEnum::Standing_State);
	
	FHitResult result = _raycastShooted->ShootRaycast(GetController());

	if (result.bBlockingHit)
	{
		// change direction..
		FRotator emptyDirection = _raycastShooted->GetEmptyDirection(GetController());
		RotateTowards(emptyDirection);
	}
	else
	{
	MoveForward();
	}


}

FRotator UMoveState::GetYawRotation()
{
	// Recieving The Rotation On The Y Axis
	const FRotator rotation = GetController()->GetControlRotation();
	const FRotator yawRotation(0, rotation.Yaw, 0);
	return yawRotation;
}