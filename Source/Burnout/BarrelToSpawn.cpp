// Fill out your copyright notice in the Description page of Project Settings.


#include "BarrelToSpawn.h"
#include "PaperFlipbookComponent.h"

// barrel need to be able to interact with the conveyor belts, their movement will eb affected the same way the
// player's movement is affects while on the conveyor belt.

ABarrelToSpawn::ABarrelToSpawn()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it
	PrimaryActorTick.bCanEverTick = true;
	
	this->GetRenderComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	this->GetRenderComponent()->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody);
	this->GetRenderComponent()->SetCollisionResponseToAllChannels(ECR_Overlap);
	this->GetRenderComponent()->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
}

// Called when the game starts or when spawned
void ABarrelToSpawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarrelToSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// check for overlap with player; if true: set player dead; if false: do nothing
	
}
