// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h" 
#include "DrawDebugHelpers.h" 
#include "DollClass.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGreenLight, bool, isRed);// daclare an event (name, type, name of type) 

UCLASS(Blueprintable)
class DAGMALOAH_API ADollClass : public ACharacter
{
	GENERATED_BODY()


public:
	// Sets default values for this character's properties
	ADollClass();
    

	UPROPERTY(VisibleAnywhere,BlueprintAssignable, Category = "Events")
	FOnGreenLight LightChange;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Doll")
		bool RayTestFromDoll(AActor* actorToCheck);

	UFUNCTION(BlueprintCallable, Category = "Doll")
     void TriggerLightChange(bool isRed);

};
