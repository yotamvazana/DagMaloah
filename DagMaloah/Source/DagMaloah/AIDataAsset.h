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

	UFUNCTION(BlueprintType)
	UStaticMesh* GetMesh() { return _mesh; }
	UFUNCTION(BlueprintCallable)
	float GetRandomMovementSpeed() { return FMath::RandRange(_minMovementSpeed, _maxMovementSpeed); }

	UFUNCTION(BlueprintCallable)
		float GetRandomRayAngleCheck() { return FMath::RandRange(_minTurningAngleRange, _maxTurningAngleRange); }

	UFUNCTION(BlueprintCallable)
		float GetRandomDistanceAngleCheck() { return FMath::RandRange(_minRayDistanceRange, _maxRayDistanceRange); }
private:
	UPROPERTY(EditAnywhere)
		float _minMovementSpeed;
	UPROPERTY(EditAnywhere)
		float _maxMovementSpeed;

	UPROPERTY(EditAnywhere)
		float _minTurningAngleRange;
	UPROPERTY(EditAnywhere)
		float _maxTurningAngleRange;
	UPROPERTY(EditAnywhere)
		float _minRayDistanceRange;
	UPROPERTY(EditAnywhere)
		float _maxRayDistanceRange;



	UPROPERTY(EditAnywhere)
		UStaticMesh* _mesh;
};
