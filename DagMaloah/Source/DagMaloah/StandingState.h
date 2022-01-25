// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseState.h"
#include "StandingState.generated.h"

/**
 * 
 */
UCLASS()
class DAGMALOAH_API UStandingState : public UBaseState
{
	GENERATED_BODY()
public :
	void OnStateEnter() override;
	void OnStateExit() override;
	void OnState() override;
};
