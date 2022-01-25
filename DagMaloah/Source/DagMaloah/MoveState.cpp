// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveState.h"


void UMoveState::MoveForward()
{
	if (_controller)
	{
		const FVector direction = FRotationMatrix(GetYawRotation()).GetUnitAxis(EAxis::X);
		_characterLogic->AddMovementInput(direction, speed  * GetWorld()->DeltaTimeSeconds);
		//UE_LOG(LogTemp, Warning, TEXT("Actor Was Moved!"))

	}
}
void UMoveState::RotateTowards(FRotator rotation)
{
	_characterLogic->SetActorRotation(rotation);
}

void UMoveState::OnStateEnter()
{
	speed = _AIDataAsset->GetRandomMovementSpeed();
	_raycastShooted = _characterLogic->GetRayCastHandler();
}

void UMoveState::OnState()
{
	// red light 
	if (false)
	{
		_characterLogic->MoveToState(StateTypeEnum::Standing_State);
		return;
	}
	

	FHitResult result = _raycastShooted->ShootRaycast(_controller);
	if (result.bBlockingHit)
	{
		// change direction..
	}
	else
	{
	MoveForward();
	}


}

FRotator UMoveState::GetYawRotation()
{
	// Recieving The Rotation On The Y Axis
	const FRotator rotation = _controller->GetControlRotation();
	const FRotator yawRotation(0, rotation.Yaw, 0);
	return yawRotation;
}