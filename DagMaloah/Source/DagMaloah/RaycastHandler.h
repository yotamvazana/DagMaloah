// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Engine/World.h" 
#include "DrawDebugHelpers.h" 

class UAIDataAsset;
class DAGMALOAH_API RaycastHandler
{
private:

    float _angle;
    float _rayDistance;
public:
    RaycastHandler(UAIDataAsset* data);
    RaycastHandler();

    ~RaycastHandler();

    float GetRayDistance() { return _rayDistance; }

    FHitResult ShootRaycast(AController* character, bool& toShowDebug);


    FRotator GetEmptyDirection(AController* AI, bool& toShowDebug);

    FRotator CheckSurrounding(AController* raycastShooter, FVector startPos, FRotator startingRotaiton, bool toCheckForMiss, float& Angle, bool& toShowDebug, float maxAngle = 360.f);

    FHitResult ShootRay(AController* raycastShooter, FVector rayLocation, FRotator rayRotation, float distance, bool& toShowDebug);
    FRotator GetBlockedDirection(AController* raycastShooter, float distance, float maxAngle, bool& toShowDebug);
};