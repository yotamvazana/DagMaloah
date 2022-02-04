// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseState.h"

class AAICharacterLogic;


class DAGMALOAH_API StandingState : public BaseState
{
public:
	StandingState();
	StandingState(AAICharacterLogic* AICharacterLogic);
	~StandingState();
    void OnStateEnter() override;
    void OnStateExit() override;
    void OnState(float tickTime) override;
};

