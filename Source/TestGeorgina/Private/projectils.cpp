// Fill out your copyright notice in the Description page of Project Settings.


#include "projectils.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
Aprojectils::Aprojectils()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	projectilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectil Mesh"));

	RootComponent = projectilMesh;


	ProjectilComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectil component"), true);
	
	ProjectilComponent->InitialSpeed = 3000;
	ProjectilComponent->MaxSpeed = 3500;
	
}

// Called when the game starts or when spawned
void Aprojectils::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aprojectils::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

