// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveState.h"
#include "AICharacterLogic.h"
#include "DollClass.h"
#include <Runtime/Engine/Classes/Kismet/KismetMathLibrary.h>

MoveState::MoveState() : BaseState(nullptr)
{
}

MoveState::MoveState(AAICharacterLogic* AICharacterLogic) : BaseState(AICharacterLogic)
{

}

MoveState::~MoveState()
{
}
// Fill out your copyright notice in the Description page of Project Settings.


void MoveState::MoveForward(float deltaTime)
{
    if (GetCharacterLogic())
    {
        FRotationMatrix rotMatrixx = FRotationMatrix(GetYawRotation());
        FVector direction = rotMatrixx.GetUnitAxis(EAxis::X);
        direction.Normalize();
        GetCharacterLogic()->AddMovementInput(direction, _speed * deltaTime);
       // UE_LOG(LogTemp, Warning, TEXT("Actor Speed is %d!"), _speed)
    }
}
void MoveState::RotateTowards(FRotator rotation)
{
    GetCharacterLogic()->SetActorRotation(rotation);
}

void MoveState::OnStateEnter()
{
    _speed = GetDataAsset()->GetRandomMovementSpeed();
    _raycastShooted = GetCharacterLogic()->GetRayCastHandler();
}

void MoveState::OnState(float tickTime)
{
    //    UE_LOG(LogTemp, Warning, TEXT("NULLLLLLLLLLLLL!"))

    AAICharacterLogic* AI = GetCharacterLogic();
    bool isDollSeeingMe = AI->IsDollSeeingMe();
    bool isRedLight = AI->GetDollRef()->GetIsRedLight();


       
    if(!isRedLight || (isRedLight && !isDollSeeingMe)) // green light || red light && doll dont see me -> continue moving
       MoveLogic(AI, tickTime);
    else if (isDollSeeingMe && isRedLight) //Is Red Light && doll see me -> to switch state to decistion when doll 
        AI->MoveToState(StateTypeEnum::Decision_State);

}

void MoveState::MoveLogic(AAICharacterLogic* AI, float tickTime)
{
    //Calculate rotation toward end position
    FVector myPos = AI->GetActorLocation();
    FVector finalPos = AI->GetWinDestination();
   
    FVector destination = finalPos - myPos;
    destination.Normalize();
    FRotator rotation = FRotator(0, UKismetMathLibrary::MakeRotFromX(destination).Yaw, 0);

    bool toShowRaycast = AI->ToShowRayCast();
    // check if AI is blocked 
    if (_raycastShooted && _raycastShooted->ShootRay(GetController(), myPos, rotation, _raycastShooted->GetRayDistance(), toShowRaycast).bBlockingHit)
    {
        PathBlocked(rotation, tickTime);
    }
    else
    {
        PathClear(rotation, tickTime);
    }
    RotateTowards(rotation);
    MoveForward(tickTime);
}

FRotator MoveState::PathBlocked(FRotator& defaultRotation, float tickTime)
{
    // calculate empty rotation

    if (_delayCounter >= _maxDelay)
    {
        bool toShowRaycast =GetCharacterLogic()->ToShowRayCast();
        defaultRotation = _raycastShooted->GetEmptyDirection(GetController(),toShowRaycast);
        UE_LOG(LogTemp, Warning, TEXT("AI Blocked!"))

    }
    else
    {
        _delayCounter += tickTime;
    }

    return defaultRotation;
}

FRotator MoveState::PathClear(FRotator& defaultRotation, float tickTime)
{
    _delayCounter = 0.f;
    return defaultRotation;
}

FRotator MoveState::GetYawRotation()
{
    // Recieving The Rotation On The Y Axis
    const FRotator rotation = GetCharacterLogic()->GetControlRotation();
    const FRotator yawRotation(0, rotation.Yaw, 0);
    return yawRotation;
}