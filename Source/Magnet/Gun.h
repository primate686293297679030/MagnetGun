// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/InputComponent.h"
#include "GameFramework/Character.h"
#include "Components/BoxComponent.h"
#include "MagnetCharacter.h"
#include "MagnetGameMode.h"
#include "Gun.generated.h"



class USceneComponent;
class USkeletalMesh;
class UInputComponent;



UCLASS()
class AMagnetGun : public AActor
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
		USceneComponent* Root;

	UPROPERTY(EditDefaultsOnly)
		USceneComponent* Scene;

	UPROPERTY(EditDefaultsOnly, Category = Mesh)
		UStaticMeshComponent* GunMesh;

	UPROPERTY(EditDefaultsOnly)
		UBoxComponent* Collider;

	AMagnetCharacter* Player;

	bool bAttached;


	AMagnetGun();

	virtual void Tick(float DeltaSecond);

	virtual void BeginPlay() override;


	UFUNCTION()
		void HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
			UPrimitiveComponent* OtherComponent, int32 BodyIndex, bool bFromSweep, const FHitResult& SweepHit);

	UFUNCTION()
		void CallbackfunctionToDelegate(float index);

	UFUNCTION()
		void PlayerInputs(float value);

	UFUNCTION()
		void LMB();

	UFUNCTION()
		void RMB();

	void OnFire();










	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:

};