// Copyright Epic Games, Inc. All Rights Reserved.

#include "M1GameMode.h"
#include "M1Character.h"
#include "UObject/ConstructorHelpers.h"

AM1GameMode::AM1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
