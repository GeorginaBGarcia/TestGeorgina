// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "projectils.generated.h"

UCLASS()
class TESTGEORGINA_API Aprojectils : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	Aprojectils();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere) 
	class UStaticMeshComponent* projectilMesh; 


	UPROPERTY(EditAnywhere)
	class UProjectileMovementComponent* ProjectilComponent;



};
