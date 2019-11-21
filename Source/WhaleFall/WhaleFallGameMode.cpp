// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "WhaleFallGameMode.h"
#include "WhaleFallHUD.h"
#include "WhaleFallCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWhaleFallGameMode::AWhaleFallGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWhaleFallHUD::StaticClass();
}
