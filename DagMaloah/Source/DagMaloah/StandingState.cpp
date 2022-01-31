// Fill out your copyright notice in the Description page of Project Settings.


#include "StandingState.h"
#include "AICharacterLogic.h"
#include "DollClass.h"
void UStandingState::OnStateEnter() {

	if (GetCharacterLogic()->GetDollRef()->RayTestFromDoll(GetController()))
	{
		GetCharacterLogic()->MoveToState(StateTypeEnum::Move_Forward_State);
	}
}

void UStandingState::OnStateExit()
{
	// rotate to destination
}

void UStandingState::OnState()
{
}
