// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Engine/World.h" 
#include "DrawDebugHelpers.h" 


class DAGMALOAH_API RaycastHandler
{
private:

    float _angle;
    float _rayDistance;
public:
    RaycastHandler();

    ~RaycastHandler();

    float GetRayDistance() { return _rayDistance; }

    void SetAngle(float angle) { _angle = angle; }

    void SetRayDistance(float distance) { _rayDistance = distance; }

    FHitResult ShootRaycast(AController* character);


    FRotator GetEmptyDirection(AController* AI);

    FRotator CheckSurrounding(AController* raycastShooter, FVector startPos, FRotator startingRotaiton, bool toCheckForMiss, float& Angle, float maxAngle = 360.f);

    FHitResult ShootRay(AController* raycastShooter, FVector rayLocation, FRotator rayRotation, float distance);
    FRotator GetBlockedDirection(AController* raycastShooter, float distance, float maxAngle);
};