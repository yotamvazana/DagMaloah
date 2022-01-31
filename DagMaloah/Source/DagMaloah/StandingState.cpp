// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/Actor.h"

#include "StandingState.h"
#include "AICharacterLogic.h"
#include "DollClass.h"
void UStandingState::OnStateEnter() {
	ADollClass* doll = GetCharacterLogic()->GetDollRef();

	AActor* actor = Cast<AActor>(GetController());

	if (doll->RayTestFromDoll(actor) && doll->GetIsRedLight())
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
