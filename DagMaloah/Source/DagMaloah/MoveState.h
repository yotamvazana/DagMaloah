// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseState.h"
#include "RaycastHandler.h"
#include "MoveState.generated.h"

/**
 * 
 */
UCLASS()
class DAGMALOAH_API UMoveState : public UBaseState
{
	GENERATED_BODY()
		protected:
			float speed;
			URaycastHandler* _raycastShooted;
		void MoveForward();
		FRotator GetYawRotation();
		void RotateTowards(FRotator rotation);
	public:
		void OnStateEnter()override;
		void OnState()override;

};
