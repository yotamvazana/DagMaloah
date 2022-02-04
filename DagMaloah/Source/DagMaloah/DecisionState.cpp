// Fill out your copyright notice in the Description page of Project Settings.


#include "DecisionState.h"
#include "AICharacterLogic.h"

DecisionState::DecisionState() : BaseState(nullptr)
{
}

DecisionState::DecisionState(AAICharacterLogic* AICharacterLogic) : BaseState(AICharacterLogic)
{
}

DecisionState::~DecisionState()
{
}


void DecisionState::OnStateEnter()
{
    /*
    Its Red light
    we check the chances for this actor to lose
    if we are losing the he will continue move forward and die
    else we will stop and remain another round
    */


    if (RollDeathChance())
    {
        UE_LOG(LogTemp, Warning, TEXT("AI Died!"));

        GetCharacterLogic()->SetAlive(false);

    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("AI Survived!"));
        GetCharacterLogic()->MoveToState(StateTypeEnum::Standing_State);
    }


}

/// <summary>
/// Random number lottery
/// </summary>
/// <returns>returns true if the lottery number is lower than the chance to lose</returns>
bool DecisionState::RollDeathChance()
{
    int _chance = 0;
    int _maxChance = 100;
    int _chanceToDie = GetDataAsset()->GetRandomDeathChance();
    _chance = FMath::RandRange(0, _maxChance);

    UE_LOG(LogTemp, Warning, TEXT("LotteryChance : %d"), _chance);
    UE_LOG(LogTemp, Warning, TEXT("Chance To Die : %d"), _chanceToDie);
    UE_LOG(LogTemp, Warning, TEXT("Result : %d"), (bool)(_chance > _chanceToDie));

    return _chance < _chanceToDie;
}