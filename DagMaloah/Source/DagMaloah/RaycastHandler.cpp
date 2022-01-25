// Fill out your copyright notice in the Description page of Project Settings.


#include "RaycastHandler.h"


FHitResult URaycastHandler::ShootRaycast(AController* raycastShooter) {

	if (raycastShooter)
	{
		FVector rayLocation;
		FRotator rayRotation;
		raycastShooter->GetPlayerViewPoint(rayLocation, rayRotation);
		return ShootRay(raycastShooter, rayLocation, rayRotation, _rayDistance);
	}
	UE_LOG(LogTemp, Warning, TEXT("UAIMovementHandler::ShootRaycast - AController is null!"))
		return FHitResult();
}
FRotator URaycastHandler::GetEmptyDirection(AController* AI) {

	FRotator rayRotation;
	FVector rayLocation;
	AI->GetPlayerViewPoint(rayLocation, rayRotation);
	float startingValue = 0;
	FRotator angleToRotateTo = CheckSurrounding(AI, rayLocation, rayRotation, startingValue);
	return angleToRotateTo;

}
FRotator URaycastHandler::CheckSurrounding(AController* raycastShooter, FVector startPos, FRotator startingRotaiton, float& Angle)
{

	FRotator newRotaion = FRotator(startingRotaiton);
	newRotaion.Yaw += Angle;
	FHitResult result = ShootRay(raycastShooter, startPos, newRotaion, _rayDistance);
	if (result.bBlockingHit)
	{
		//full circle
		if (FMath::Abs(Angle) >= 360.0f) {
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
		return CheckSurrounding(raycastShooter, startPos, newRotaion, Angle);
	}


	return newRotaion;
}
FHitResult URaycastHandler::ShootRay(AController* raycastShooter, FVector rayLocation, FRotator rayRotation, float distance) {
	FVector endTrace = rayLocation + rayRotation.Vector() * distance;
	FCollisionQueryParams traceParams(SCENE_QUERY_STAT(ShootRaycast), true, raycastShooter->GetInstigator());
	FHitResult hit(ForceInit);
	GetWorld()->LineTraceSingleByChannel(hit, rayLocation, endTrace, ECC_Visibility, traceParams);
	DrawDebugLine(GetWorld(), rayLocation, endTrace, FColor::Red, false, 0.1, distance);
	return hit;
}