// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseState.h"

class AAICharacterLogic;

class DAGMALOAH_API WinState : public BaseState
{
public:
	WinState();
	WinState(AAICharacterLogic* AICharacterLogic);
	~WinState();
	void OnStateEnter() override;
};
