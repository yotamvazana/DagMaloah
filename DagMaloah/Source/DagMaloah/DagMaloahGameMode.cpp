// Copyright Epic Games, Inc. All Rights Reserved.

#include "DagMaloahGameMode.h"
#include "DagMaloahCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADagMaloahGameMode::ADagMaloahGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
