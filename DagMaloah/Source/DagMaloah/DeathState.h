// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "BaseState.h"
class AAICharacterLogic;

class DAGMALOAH_API DeathState : public BaseState
{
public:
	DeathState();
	DeathState(AAICharacterLogic* AICharacterLogic);
	~DeathState();
	void OnStateEnter() override;
};
