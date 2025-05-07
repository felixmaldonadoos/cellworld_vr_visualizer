// Copyright Epic Games, Inc. All Rights Reserved.

#include "cwvr_visualizerGameMode.h"
#include "cwvr_visualizerCharacter.h"
#include "UObject/ConstructorHelpers.h"

Acwvr_visualizerGameMode::Acwvr_visualizerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
