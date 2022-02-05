// Fill out your copyright notice in the Description page of Project Settings.


#include "DollClass.h"

// Sets default values
ADollClass::ADollClass()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADollClass::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADollClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADollClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


bool ADollClass::RayTestFromDoll(AActor* actorToCheck, bool _toShowRaycast)
{
	FVector start = GetActorLocation();
	FVector Forward = ((actorToCheck->GetActorLocation() + FVector(0, 0, -300)) - start);
	Forward.Normalize();
	start = FVector(start.X + (Forward.X * 100), start.Y + (Forward.Y * 100), start.Z + (Forward.Z * 100) + 300);
	FVector end = start + (Forward * 10000);
	FHitResult hit;
	if (GetWorld())
	{
		bool actorHit = GetWorld()->LineTraceSingleByChannel(hit, start, end, ECC_Pawn, FCollisionQueryParams(), FCollisionResponseParams());
		if (actorHit) 
		{
			bool isHit = hit.GetActor() && hit.GetActor() == actorToCheck;

			if (_toShowRaycast)
				DrawDebugLine(GetWorld(), start, end, !isHit ? FColor::Green : FColor::Red, false, 0.1, 0, 5);

			return isHit;
		}
	}
	return false;

}

void ADollClass::TriggerLightChange(bool isRed)
{
	LightChange.Broadcast(isRed);
	_lightState = isRed;
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "Brodcast");
}

