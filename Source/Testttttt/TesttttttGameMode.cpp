// Copyright Epic Games, Inc. All Rights Reserved.

#include "TesttttttGameMode.h"
#include "TesttttttCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATesttttttGameMode::ATesttttttGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
