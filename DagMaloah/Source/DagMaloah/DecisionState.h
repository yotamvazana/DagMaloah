// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseState.h"

class AAICharacterLogic;


class DAGMALOAH_API DecisionState : public BaseState
{
public:
	DecisionState();
	DecisionState(AAICharacterLogic* AICharacterLogic);
	~DecisionState();
	void OnStateEnter() override;
private:
	bool RollDeathChance();
};



