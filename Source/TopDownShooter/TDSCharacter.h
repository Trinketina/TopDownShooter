// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TDSCharacter.generated.h"

UCLASS(Blueprintable)
class TOPDOWNSHOOTER_API ATDSCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TopDownShooter") float health = 100;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "TopDownShooter") bool isDead = false;

	virtual void CalculateDead();

	UFUNCTION(BlueprintCallable, Category = "TopDownShooter")
	virtual void CalculateHealth(float delta);

#if WITH_EDITOR

	virtual void PostEditChangeProperty(FPropertyChangedEvent& changeEvent);

#endif


public:
	// Sets default values for this character's properties
	ATDSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
