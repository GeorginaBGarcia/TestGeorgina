// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnP.h"
#include "projectils.h"

// Sets default values
ASpawnP::ASpawnP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnP::BeginPlay()
{
	Super::BeginPlay();

	UPROPERTY(EditAnywhere)
	GetWorld()->SpawnActor<Aprojectils>(ProjectilActor, GetActorLocation(), GetActorRotation());
	
}

// Called every frame
void ASpawnP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

