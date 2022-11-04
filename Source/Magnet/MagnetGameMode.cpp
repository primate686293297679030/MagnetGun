// Copyright Epic Games, Inc. All Rights Reserved.

#include "MagnetGameMode.h"
#include "MagnetCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMagnetGameMode::AMagnetGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
