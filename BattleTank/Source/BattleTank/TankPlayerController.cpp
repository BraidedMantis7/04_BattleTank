// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleTank.h"
#include "TankPlayerController.h"




void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerControlller not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerControlller possesing %s"), *(ControlledTank->GetName()));
	}
}

// Tick
void ATankPlayerController::Tick(float DeltaTime)
{
	//Super
	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
	UE_LOG(LogTemp, Warning, TEXT("What is Love!"));
}

ATank* ATankPlayerController :: GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController :: AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }

	//Get World Location through cross hair (Line Trace)
	//if it hits the landscape 
		// Tell Controlled tank to aim at this point
}
