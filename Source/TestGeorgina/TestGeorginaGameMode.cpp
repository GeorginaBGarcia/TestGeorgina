// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestGeorginaGameMode.h"
#include "TestGeorginaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestGeorginaGameMode::ATestGeorginaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
