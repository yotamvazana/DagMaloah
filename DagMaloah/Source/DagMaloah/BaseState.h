// Fill out your copyright notice in the Description page of Project Settings.


#pragma once
#include "CoreMinimal.h"
#include "AICharacterLogic.h"
#include "UObject/NoExportTypes.h"
#include "BaseState.generated.h"
/**
 * 
 */


UCLASS()
class DAGMALOAH_API UBaseState : public UObject
{
	GENERATED_BODY()
protected:
	StateTypeEnum _myState;
	AAICharacterLogic* _characterLogic;
	AController* _controller;
	UAIDataAsset* _AIDataAsset;
public:
	StateTypeEnum GetState() { return _myState; }
	 void SetCharacterLogic(AAICharacterLogic* logic);
		virtual	void OnState() {}
		virtual void OnStateEnter() { }
		virtual void OnStateExit() { }
};

