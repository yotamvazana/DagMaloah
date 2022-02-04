// Fill out your copyright notice in the Description page of Project Settings.


#include "WinState.h"
#include "AICharacterLogic.h"
WinState::WinState() : BaseState(nullptr)
{
}

WinState::WinState(AAICharacterLogic* AICharacterLogic) : BaseState(AICharacterLogic)
{
}

WinState::~WinState() 
{
}
void  WinState::OnStateEnter()
{
    //Win!
    GetCharacterLogic()->OnAIWin();
}