// Fill out your copyright notice in the Description page of Project Settings.


#include "TDSCharacter.h"

// Sets default values
ATDSCharacter::ATDSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATDSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATDSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATDSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATDSCharacter::CalculateHealth(float delta) 
{
	health += delta;

	CalculateDead();
}

void ATDSCharacter::CalculateDead() 
{
	if (health <= 0)
		isDead = true;
}

#if WITH_EDITOR
void ATDSCharacter::PostEditChangeProperty(FPropertyChangedEvent& changeEvent)
{
	isDead = false;
	health = 100;

	Super::PostEditChangeProperty(changeEvent);
}
#endif