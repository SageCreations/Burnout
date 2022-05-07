// Fill out your copyright notice in the Description page of Project Settings.


#include "BarrelSpawner.h"
#include "Components/BoxComponent.h"
#include "BarrelToSpawn.h"

// need the barrel spawner to start spawning barrels once the player runs through a collision box.
// collision box location will be different and placed manually by designer from where the actual actor
// location will be.


// Sets default values
ABarrelSpawner::ABarrelSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Creating our Default Components
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SpawnLocation"));
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerSpawnBox"));
	

	
	//Attaching the Components and setting physics
	SphereComp->SetupAttachment(RootComponent);
	BoxComponent->SetupAttachment(SphereComp);
	
}

// Called when the game starts or when spawned
void ABarrelSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarrelSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

