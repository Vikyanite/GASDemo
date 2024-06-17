// Copyright Epic Games, Inc. All Rights Reserved.

#include "GASDemoGameMode.h"
#include "GASDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGASDemoGameMode::AGASDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/GASDemo/Blueprints/BP_DemoCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
