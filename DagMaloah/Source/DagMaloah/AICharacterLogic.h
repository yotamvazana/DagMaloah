// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIDataAsset.h"
#include "AIMovementHandler.h"
#include "GameFramework/Character.h"
#include "RaycastHandler.h"
#include "AICharacterLogic.generated.h"

UENUM(BlueprintType, Category = "My Enum")
enum StateTypeEnum {
	Standing_State  UMETA(DisplayName = "State Type: Standing"),
	Move_Forward_State UMETA(DisplayName = "State Type: Moving Forward"),

};

UCLASS()
class DAGMALOAH_API AAICharacterLogic : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAICharacterLogic();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
		UAIMovementHandler* _movementHandler;
	UPROPERTY(EditAnywhere)
		UAIDataAsset* _data;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		URaycastHandler* _rayCastHandler;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;




	FRotator GetYawRotation();
	AController* GetController();
	UAIDataAsset* GetAIDataAsset() { return _data; }
	URaycastHandler* GetRayCastHandler() { return _rayCastHandler; }


	UFUNCTION(BlueprintCallable)
	void MoveRight(float value);
	UFUNCTION(BlueprintCallable)
	void MoveForward(float value);

	UFUNCTION(BlueprintCallable)
		void RotateTowards(FRotator rotation);
	UFUNCTION(BlueprintCallable)
		void MoveToState(TEnumAsByte<StateTypeEnum> state) { }
};

