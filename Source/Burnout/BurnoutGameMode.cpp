// Copyright Epic Games, Inc. All Rights Reserved.

#include "BurnoutGameMode.h"
#include "BurnoutCharacter.h"

ABurnoutGameMode::ABurnoutGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ABurnoutCharacter::StaticClass();	
}
