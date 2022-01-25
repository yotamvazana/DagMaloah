// Fill out your copyright notice in the Description page of Project Settings.


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
	Super::BeginPlay();
	
}

// Called every frame
void AAICharacterLogic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAICharacterLogic::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAICharacterLogic::MoveRight(float value)
{
	if (value != 0.0f && Controller)
	{
		const FVector direction = FRotationMatrix(GetYawRotation()).GetUnitAxis(EAxis::Y);
		AddMovementInput(direction, value);
	}
}

void AAICharacterLogic::MoveForward(float value)
{
	if (value !=0.0f && Controller)
	{
		const FVector direction = FRotationMatrix(GetYawRotation()).GetUnitAxis(EAxis::X);
		AddMovementInput(direction, value*GetWorld()->DeltaTimeSeconds);
		//UE_LOG(LogTemp, Warning, TEXT("Actor Was Moved!"))
		
	}
}

void AAICharacterLogic::RotateTowards(FRotator rotation)
{
	SetActorRotation(rotation);
}

FRotator AAICharacterLogic::GetYawRotation()
{
	// Recieving The Rotation On The Y Axis
	const FRotator rotation = Controller->GetControlRotation();
	const FRotator yawRotation(0, rotation.Yaw, 0);
	return yawRotation;
}
AController* AAICharacterLogic::GetController() { return Controller; }
//void AAICharacterLogic::TurnAtRate(float value)
//{
//	//AddControllerYawInput(value * _data->GetBaseTurnRate() * GetWorld()-> GetDeltaSeconds());
//}
//
//void AAICharacterLogic::LookUpAtRate(float value)
//{
////	AddControllerPitchInput(value * _data->GetBaseLookUpAtRate() * GetWorld()-> GetDeltaSeconds());
//}
