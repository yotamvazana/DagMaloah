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
private :
	float _angle;
	float _rayDistance;
public:
	UFUNCTION(BlueprintCallable)
		void SetAngle(float angle) { _angle = angle; }
	UFUNCTION(BlueprintCallable)
		void SetRayDistance(float distance) { _rayDistance = distance; }
UFUNCTION(BlueprintCallable)
	FHitResult ShootRaycast(AController* character);
	
UFUNCTION(BlueprintCallable)
FRotator GetEmptyDirection(AController* AI);

FRotator CheckSurrounding(AController* raycastShooter, FVector startPos, FRotator startingRotaiton,  float& Angle);

FHitResult ShootRay(AController* raycastShooter, FVector rayLocation, FRotator rayRotation, float distance);

};

