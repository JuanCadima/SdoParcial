// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveAbstracFactory.h"
#include "FabricaCazas.generated.h"

UCLASS()
class SDOPARCIAL_API AFabricaCazas : public AActor, public INaveAbstracFactory
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaCazas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	virtual ANaveEnemiga* CrearNaveEnemiga() override;

};
