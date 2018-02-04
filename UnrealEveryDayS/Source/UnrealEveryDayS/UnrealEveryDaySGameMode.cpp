// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UnrealEveryDaySGameMode.h"
#include "UnrealEveryDaySCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealEveryDaySGameMode::AUnrealEveryDaySGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
