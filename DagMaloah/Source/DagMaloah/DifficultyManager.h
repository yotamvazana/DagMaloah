// Fill out your copyright notice in the Description page of Project Settings.


#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DifficultyManager.generated.h"

UENUM(BlueprintType, Category = "My Enum")
enum Difficulty {
	Easy UMETA(DisplayName = "Easy"), Medium  UMETA(DisplayName = "Medium"), Hard UMETA(DisplayName = "Hard")
};

UCLASS()
class DAGMALOAH_API ADifficultyManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADifficultyManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:

	UFUNCTION(BlueprintCallable, Category = "My Functions")
		void EasyDifficulty(TEnumAsByte<Difficulty>& Diff);
	UFUNCTION(BlueprintCallable, Category = "My Functions")
		void MediumDifficulty(TEnumAsByte<Difficulty>& Diff);
	UFUNCTION(BlueprintCallable, Category = "My Functions")
		void HardDifficulty(TEnumAsByte<Difficulty>& Diff);

};