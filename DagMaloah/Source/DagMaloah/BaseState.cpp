// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseState.h"
#include "AICharacterLogic.h"

BaseState::BaseState()
{
}

BaseState::BaseState(AAICharacterLogic* AICharacterLogic)
{
    _characterLogic = AICharacterLogic;
}

BaseState::~BaseState()
{
}

AController* BaseState::GetController()
{
    return _characterLogic->GetController();
}

UAIDataAsset* BaseState::GetDataAsset() {

    return _characterLogic->GetAIDataAsset();
}