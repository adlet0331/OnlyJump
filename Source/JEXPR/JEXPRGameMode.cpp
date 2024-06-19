// Copyright Epic Games, Inc. All Rights Reserved.

#include "JEXPRGameMode.h"
#include "JEXPRCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJEXPRGameMode::AJEXPRGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
