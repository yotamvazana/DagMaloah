// Fill out your copyright notice in the Description page of Project Settings.


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseState.generated.h"
/**
 * 
 */
class AAICharacterLogic;
enum StateTypeEnum;
class UAIDataAsset;
	UCLASS()
		class DAGMALOAH_API UBaseState : public UObject
	{
		GENERATED_BODY()
	private:
		StateTypeEnum _myState;
		AAICharacterLogic* _characterLogic;
		AController* _controller;
		UAIDataAsset* _AIDataAsset;
	protected:
		AAICharacterLogic* GetCharacterLogic() { return _characterLogic; }
		AController* GetController() { return _controller; }
		UAIDataAsset* GetDataAsset() { return _AIDataAsset; }

	public:
		void SetState(StateTypeEnum state) { _myState = state; }
		StateTypeEnum GetState() { return _myState; }
		void SetCharacterLogic(AAICharacterLogic* logic);
		virtual	void OnState() {}
		virtual void OnStateEnter() { }
		virtual void OnStateExit() { }
	};


