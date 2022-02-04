// Fill out your copyright notice in the Description page of Project Settings.


#include "RaycastHandler.h"

RaycastHandler::RaycastHandler()
{
}

RaycastHandler::~RaycastHandler()
{
}

/// <summary>
/// Shooting raycast
/// </summary>
/// <param name="raycastShooter"></param>
/// <returns></returns>
FHitResult RaycastHandler::ShootRaycast(AController* raycastShooter) {

	if (raycastShooter)
	{
		FVector rayLocation;
		FRotator rayRotation;
		raycastShooter->GetPlayerViewPoint(rayLocation, rayRotation);
		//UE_LOG(LogTemp, Warning, TEXT("Check %d"), _rayDistance)

		return ShootRay(raycastShooter, rayLocation, rayRotation, _rayDistance);
	}
	UE_LOG(LogTemp, Warning, TEXT("UAIMovementHandler::ShootRaycast - AController is null!"))
		return FHitResult();
}

/// <summary>
/// Recurrsion method~
/// shooting raycast in an angle and calling itself if the condition is met
/// </summary>
/// <param name="raycastShooter">The shooter</param>
/// <param name="startPos">Starting Position</param>
/// <param name="startingRotaiton">Rotation</param>
/// <param name="toCheckForMiss">False to search for hit point, true to search for empty point</param>
/// <param name="Angle">Angle</param>
/// <param name="maxAngle">Max angle to search for</param>
/// <returns>Rotation toward location\</returns>
FRotator RaycastHandler::CheckSurrounding(AController* raycastShooter, FVector startPos, FRotator startingRotaiton, bool toCheckForMiss, float& Angle, float maxAngle)
{

	FRotator newRotaion = FRotator(0, startingRotaiton.Yaw + Angle, 0);

	FHitResult result = ShootRay(raycastShooter, startPos, newRotaion, _rayDistance);
	if (result.bBlockingHit == toCheckForMiss)
	{
		//full circle
		if (FMath::Abs(Angle) >= maxAngle) {
			return startingRotaiton;
		}

		if (Angle <= 0.f)
		{
			// check left
			Angle = FMath::Abs(Angle);
			Angle += _angle;
		}
		else
		{
			// check right
			Angle *= -1.f;
			Angle -= _angle;
		}
		//	UE_LOG(LogTemp, Warning, TEXT("Hit! Next Angle Is %d"), Angle)
		return CheckSurrounding(raycastShooter, startPos, newRotaion, toCheckForMiss, Angle);
	}


	return newRotaion;
}
/// <summary>
/// Shoot raycast from location towards position
/// </summary>
/// <param name="raycastShooter"></param>
/// <param name="rayLocation"></param>
/// <param name="rayRotation"></param>
/// <param name="distance"></param>
/// <returns>Hitting result</returns>
FHitResult RaycastHandler::ShootRay(AController* raycastShooter, FVector rayLocation, FRotator rayRotation, float distance) {
	FVector endTrace = rayLocation + rayRotation.Vector() * distance;
	FCollisionQueryParams traceParams(SCENE_QUERY_STAT(ShootRay), true, raycastShooter->GetInstigator());
	FHitResult hit(ForceInit);
	raycastShooter->GetWorld()->LineTraceSingleByChannel(hit, rayLocation, endTrace, ECC_Visibility, traceParams);
	DrawDebugLine(raycastShooter->GetWorld(), rayLocation, endTrace, FColor::Red, false, 0.3f, distance);

	return hit;
	//return FHitResult();
}

/// <summary>
/// Checkin the surrounding for blocked Direction
/// </summary>
/// <param name="raycastShooter"></param>
/// <param name="distance"></param>
/// <param name="maxAngle"></param>
/// <returns>Rotation toward hit object</returns>
FRotator RaycastHandler::GetBlockedDirection(AController* raycastShooter, float distance, float maxAngle)
{
	FRotator rayRotation;
	FVector rayLocation;
	raycastShooter->GetPlayerViewPoint(rayLocation, rayRotation);
	float startingValue = 0;

	FRotator blockedDirection = CheckSurrounding(raycastShooter, rayLocation, rayRotation, false, startingValue, maxAngle);
	return blockedDirection;
}
/// <summary>
/// Checkin the surrounding for Empty Direction
/// </summary>
/// <param name="AI"></param>
/// <returns></returns>
FRotator RaycastHandler::GetEmptyDirection(AController* AI) {

	FRotator rayRotation;
	FVector rayLocation;
	AI->GetPlayerViewPoint(rayLocation, rayRotation);
	float startingValue = 0;
	FRotator angleToRotateTo = CheckSurrounding(AI, rayLocation, rayRotation, true, startingValue);
	return angleToRotateTo;
}