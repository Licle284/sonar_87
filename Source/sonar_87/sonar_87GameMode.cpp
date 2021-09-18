// Copyright Epic Games, Inc. All Rights Reserved.

#include "sonar_87GameMode.h"
#include "sonar_87HUD.h"
#include "sonar_87Character.h"
#include "UObject/ConstructorHelpers.h"

Asonar_87GameMode::Asonar_87GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Asonar_87HUD::StaticClass();
}
