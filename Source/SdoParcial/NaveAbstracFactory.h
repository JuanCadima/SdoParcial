// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NaveEnemiga.h"
#include "NaveAbstracFactory.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNaveAbstracFactory : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SDOPARCIAL_API INaveAbstracFactory
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual ANaveEnemiga* CrearNaveEnemiga() = 0;
};
