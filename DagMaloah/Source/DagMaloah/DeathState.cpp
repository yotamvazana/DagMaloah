// Fill out your copyright notice in the Description page of Project Settings.



#include "DeathState.h"
#include "CoreMinimal.h"
#include "BaseState.h"
#include "AICharacterLogic.h"

DeathState::DeathState() : BaseState(nullptr)
{
}

DeathState::DeathState(AAICharacterLogic* AICharacterLogic) : BaseState(AICharacterLogic)
{
}


DeathState::~DeathState()
{
}


void DeathState::OnStateEnter()
{
    GetCharacterLogic()->SetAlive(false);
    //AI Lost
}


