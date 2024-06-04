// Fill out your copyright notice in the Description page of Project Settings.


#include "Escuadrones.h"
#include "FabricaCazas.h"
#include "TimerManager.h"
#include "Engine/World.h"

// Sets default values
AEscuadrones::AEscuadrones()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//Nave = GetWorld()->SpawnActor<AFabricaCazas>(AFabricaCazas::StaticClass());
	

}

// Called when the game starts or when spawned
void AEscuadrones::BeginPlay()
{
	Super::BeginPlay();

	if(GetWorld())
	{
		Nave = GetWorld()->SpawnActor<AFabricaCazas>(AFabricaCazas::StaticClass());
	}

	GetWorldTimerManager().SetTimer(TimerHandle, this, &AEscuadrones::CrearEscuadron, 2.0f, true);
	
}

// Called every frame
void AEscuadrones::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEscuadrones::CrearEscuadron()
{
	int32 NumNaves = FMath::RandRange(15, 20);
	Escuadron.Empty();

	FVector StartLocation = FVector(FMath::RandRange(-1000.0f, 1000.0f), FMath::RandRange(-2000.0f, 2000.0f), 200.0f);
	FVector offset = FVector(50.0f, 0.0f, 0.0f);

	for (int32 i = 0; i < NumNaves; i++)
	{
		//ANaveEnemiga* NNave = GetWorld()->SpawnActor<ANaveEnemiga>(ANaveEnemiga::StaticClass(), StartLocation + offset * i, FRotator(0, 0, 0));
		ANaveEnemiga* NNave = Nave->CrearNaveEnemiga();
		if (Nave)
		{
			Escuadron.Add(NNave);
			NNave->SetActorLocation(StartLocation + offset * i);
		}
	}
}