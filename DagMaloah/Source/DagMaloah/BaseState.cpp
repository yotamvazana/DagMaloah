// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseState.h"

void UBaseState::SetCharacterLogic(AAICharacterLogic* logic)
{
	_characterLogic = logic;
	_controller = logic->GetController();
	_AIDataAsset = logic->GetAIDataAsset();
}
