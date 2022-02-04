// Fill out your copyright notice in the Description page of Project Settings.


#include "StandingState.h"
#include "GameFramework/Actor.h"

#include "AICharacterLogic.h"
#include "DollClass.h"

StandingState::StandingState() : BaseState(nullptr)
{
}

StandingState::StandingState(AAICharacterLogic* AICharacterLogic) : BaseState(AICharacterLogic)
{
}

StandingState::~StandingState()
{
}
void StandingState::OnStateEnter() {

    ADollClass* doll = GetCharacterLogic()->GetDollRef();

    if (GetCharacterLogic()->IsDollSeeingMe() && doll->GetIsRedLight())
    {
        GetCharacterLogic()->MoveToState(StateTypeEnum::Move_Forward_State);
    }
}

void StandingState::OnStateExit()
{
    // rotate to destination
}

void StandingState::OnState(float tickTime)
{
}
