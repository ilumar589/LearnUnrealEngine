// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearnUnrealEngineGameMode.h"
#include "LearnUnrealEngineCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALearnUnrealEngineGameMode::ALearnUnrealEngineGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
