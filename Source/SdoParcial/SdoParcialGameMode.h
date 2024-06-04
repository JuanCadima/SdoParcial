// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SdoParcialGameMode.generated.h"

UCLASS(MinimalAPI)
class ASdoParcialGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASdoParcialGameMode();

public:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

public:

	class AEscuadrones* Escuadrones;
};



