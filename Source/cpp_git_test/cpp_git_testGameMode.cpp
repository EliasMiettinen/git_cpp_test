// Copyright Epic Games, Inc. All Rights Reserved.

#include "cpp_git_testGameMode.h"
#include "cpp_git_testCharacter.h"
#include "UObject/ConstructorHelpers.h"

Acpp_git_testGameMode::Acpp_git_testGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
