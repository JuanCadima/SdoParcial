// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaCazas.h"



// Sets default values
AFabricaCazas::AFabricaCazas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaCazas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaCazas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ANaveEnemiga* AFabricaCazas::CrearNaveEnemiga()
{
	return GetWorld()->SpawnActor<ANaveEnemiga>(ANaveEnemiga::StaticClass());
}