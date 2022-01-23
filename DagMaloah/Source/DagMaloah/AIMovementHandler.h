// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h" 
#include "DrawDebugHelpers.h" 
#include "UObject/NoExportTypes.h"
#include "AIMovementHandler.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class DAGMALOAH_API UAIMovementHandler : public UObject
{
	GENERATED_BODY()
		
public:
UFUNCTION(BlueprintCallable)
	FHitResult ShootRaycast(AController* character, float distance);
	
UFUNCTION(BlueprintCallable)
FRotator GetEmptyDirection(AController* AI, float rayDistance);

FRotator CheckSurrounding(AController* raycastShooter, FVector startPos, FRotator startingRotaiton, float distance, float Angle);

FHitResult ShootRay(AController* raycastShooter, FVector rayLocation, FRotator rayRotation, float distance);

};
