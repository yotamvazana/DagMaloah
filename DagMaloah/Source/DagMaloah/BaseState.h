// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
/**
 *
 */
class AAICharacterLogic;
enum StateTypeEnum;
class UAIDataAsset;
class DAGMALOAH_API BaseState
{
public:
    BaseState();
    BaseState(AAICharacterLogic* AICharacterLogic);
    ~BaseState();
private:
    //-----------------------------------------------------------------------------------------------
    //Fields

    AAICharacterLogic* _characterLogic;


protected:
    //-----------------------------------------------------------------------------------------------
    //Properties
    AAICharacterLogic* GetCharacterLogic() { return _characterLogic; }
    AController* GetController();
    UAIDataAsset* GetDataAsset();
public:
    //-----------------------------------------------------------------------------------------------
    //Functions
    virtual void OnState(float time) {}
    virtual void OnStateEnter() { }
    virtual void OnStateExit() { }
};
