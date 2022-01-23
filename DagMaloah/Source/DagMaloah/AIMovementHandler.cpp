// Fill out your copyright notice in the Description page of Project Settings.


#include "AIMovementHandler.h"

FHitResult UAIMovementHandler::ShootRaycast(AController* raycastShooter, float distance) {

	if (raycastShooter)
	{
		FVector rayLocation;
		FRotator rayRotation;
		raycastShooter->GetPlayerViewPoint(rayLocation, rayRotation);
		return ShootRay(raycastShooter, rayLocation, rayRotation,distance);
		}
	UE_LOG(LogTemp, Warning, TEXT("UAIMovementHandler::ShootRaycast - AController is null!"))
	return FHitResult();
}
FRotator UAIMovementHandler::GetEmptyDirection(AController* AI, float rayDistance) {

		FRotator rayRotation;
		FVector rayLocation;
		AI->GetPlayerViewPoint(rayLocation, rayRotation);
	FRotator angleToRotateTo =	CheckSurrounding(AI, rayLocation, rayRotation, rayDistance, 0);
	return angleToRotateTo;

}
FRotator UAIMovementHandler::CheckSurrounding(AController* raycastShooter, FVector startPos, FRotator startingRotaiton, float distance, float Angle)
{
	FRotator newRotaion = startingRotaiton;
	newRotaion.Yaw += Angle;
	FHitResult result = ShootRay(raycastShooter, startPos, newRotaion, distance);
		if (result.bBlockingHit)
		{
			if (FMath::Abs(Angle) >= 360.0f)
				return startingRotaiton;

			if (Angle <= 0)
			{
				Angle = FMath::Abs(Angle) + 10.0f;
			}
			else
				Angle *= -1;

			return CheckSurrounding(raycastShooter, startPos, newRotaion, distance, Angle);
		}


		return newRotaion;
}
FHitResult UAIMovementHandler::ShootRay(AController* raycastShooter, FVector rayLocation, FRotator rayRotation , float distance ) {
	FVector endTrace = rayLocation + rayRotation.Vector() * distance;
	FCollisionQueryParams traceParams(SCENE_QUERY_STAT(ShootRaycast), true, raycastShooter->GetInstigator());
	FHitResult hit(ForceInit);
	GetWorld()->LineTraceSingleByChannel(hit, rayLocation, endTrace, ECC_Visibility, traceParams);
	DrawDebugLine(GetWorld(), rayLocation, endTrace, FColor::Red, false, 0.1, distance);
	return hit;
}