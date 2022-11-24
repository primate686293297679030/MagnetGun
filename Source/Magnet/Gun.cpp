// Copyright Epic Games, Inc. All Rights Reserved.

#include "Gun.h"
#include "Modules/ModuleManager.h"
#include "Kismet/GameplayStatics.h"




void AMagnetGun::Tick(float DeltaSecond)
{


}

void AMagnetGun::CallbackfunctionToDelegate(float index)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, FString::Printf(TEXT("rjetjy")));

}

void AMagnetGun::PlayerInputs(float value)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, FString::Printf(TEXT("He")));
}

void AMagnetGun::BeginPlay()
{
	PrimaryActorTick.bCanEverTick = true;




	//InputComponent->BindAction(FName(TEXT("LMB")), IE_Pressed, this, AMagnetGun::LMB);
	//InputComponent->BindAction(FName(TEXT("RMB")), IE_Pressed, this, AMagnetGun::RMB);



}


AMagnetGun::AMagnetGun()
{

	
	
	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;
	//Mesh = NewObject<USkeletalMesh>(Root, FName(TEXT("Mesh")));
	GunMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GunMesh"));
	GunMesh->SetupAttachment(Root);
	Scene = CreateDefaultSubobject<USceneComponent>((TEXT("Scene")));
	Scene->SetupAttachment(Root);
	Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("collider"));
	Collider->SetupAttachment(Root);
	Collider->SetBoxExtent(FVector(100, 100, 100));
	Collider->SetGenerateOverlapEvents(true);
	Tags.Add("Gun");


	Collider->OnComponentBeginOverlap.AddDynamic(this, &AMagnetGun::HandleOverlap);
	//GunMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	GunMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

	//PlayerInputComponent->BindAction("GPFire", IE_Pressed, this, &AGPPlayerController::StartGunFire);
	//PlayerInputComponent->BindAction("GPFire", IE_Released, this, &AGPPlayerController::StopGunFire);
}

void AMagnetGun::HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 BodyIndex, bool bFromSweep, const FHitResult& SweepHit)
{
	if (OtherActor->ActorHasTag("Player"))
	{

		//AttachToActor(OtherActor, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), FName(TEXT("pinky_03_rSocket")));
		AttachToComponent(OtherActor->FindComponentByClass<USkeletalMeshComponent>(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), FName(TEXT("pinky_03_rSocket")));
		Player = Cast<AMagnetCharacter>(OtherActor);
		if (Player != nullptr)
		{
			if (bAttached == false)
			{
				Player->Fplayerinput.AddDynamic(this, &AMagnetGun::CallbackfunctionToDelegate);
				bAttached = true;

			}
			Player->Fplayerinput.AddDynamic(this, &AMagnetGun::PlayerInputs);
		}
	}


}


void AMagnetGun::LMB()
{



}

void AMagnetGun::RMB()
{

}




