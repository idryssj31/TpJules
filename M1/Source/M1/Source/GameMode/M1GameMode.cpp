// Copyright Epic Games, Inc. All Rights Reserved.

#include "M1/Include/GameMode/M1GameMode.h"

#include "Kismet/GameplayStatics.h"
#include "M1/Include/Character/Player/M1Character.h"
#include "M1/Include/Interactables/AGold.h"
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
