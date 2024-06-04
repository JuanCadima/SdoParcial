// Copyright Epic Games, Inc. All Rights Reserved.

#include "SdoParcialGameMode.h"
#include "SdoParcialPawn.h"
#include "Escuadrones.h"

ASdoParcialGameMode::ASdoParcialGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ASdoParcialPawn::StaticClass();
}

void ASdoParcialGameMode::BeginPlay()
{
	Super::BeginPlay();

	Escuadrones = GetWorld()->SpawnActor<AEscuadrones>(AEscuadrones::StaticClass(), FVector(0, 0, 0), FRotator(0, 0, 0));
}

void ASdoParcialGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

