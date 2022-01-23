// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/StaticMesh.h"
#include "AIDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DAGMALOAH_API UAIDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	float GetBaseTurnRate() { return _baseTurnRate; }
	float GetBaseLookUpAtRate() { return _baseLookUpAtRate; }
	UFUNCTION(BlueprintType)
	UStaticMesh* GetMesh() { return _mesh; }
	UFUNCTION(BlueprintCallable)
	float GetRandomMovementSpeed() { return FMath::RandRange(_minMovementSpeed, _maxMovementSpeed); }
private:
	UPROPERTY(EditAnywhere)
		float _minMovementSpeed;
	UPROPERTY(EditAnywhere)
		float _maxMovementSpeed;

	UPROPERTY(EditAnywhere)
		float _baseTurnRate;
	UPROPERTY(EditAnywhere)
		float _baseLookUpAtRate;

	UPROPERTY(EditAnywhere)
		UStaticMesh* _mesh;
};
