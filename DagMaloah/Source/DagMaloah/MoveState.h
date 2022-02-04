// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseState.h"

/**
 * 
 */
enum StateTypeEnum;
class RaycastHandler;
class AAICharacterLogic;
class DAGMALOAH_API MoveState: public BaseState
{
public:
    MoveState();
    MoveState(AAICharacterLogic* AICharacterLogic);
    ~MoveState();
protected:
    //-----------------------------------------------------------------------------------------------
    //Fields
    float _speed;
    float _maxDelay = 0.3f;
    float _delayCounter = 0.f;
    RaycastHandler* _raycastShooted;

    //-----------------------------------------------------------------------------------------------
    //Functions
    void MoveForward(float tickTime);
    FRotator GetYawRotation();
    void RotateTowards(FRotator rotation);
    FRotator PathBlocked(FRotator& defaultRotation, float tickTime);
    FRotator PathClear(FRotator& defaultRotation, float tickTime);
public:

    //-----------------------------------------------------------------------------------------------
    // MasterClass Functions
    void OnStateEnter()override;
    void OnState(float tickTime)override;

};
