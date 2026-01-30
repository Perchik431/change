#include "DoorL_Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"

ADoorL_Actor::ADoorL_Actor()
{
	PrimaryActorTick.bCanEverTick = false;

	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	RootComponent = DoorMesh;

	DoorMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	DoorMesh->SetCollisionResponseToAllChannels(ECR_Block);
}

void ADoorL_Actor::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 5.f, FColor::Green,
			TEXT("DOOR L READY")
		);
	}
}

void ADoorL_Actor::OpenDoor()
{
	if (bIsOpen) return;
	bIsOpen = true;

	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 3.f, FColor::Green,
			TEXT("DOOR L OPENED")
		);
	}
}

void ADoorL_Actor::CloseDoor()
{
	if (!bIsOpen) return;
	bIsOpen = false;

	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 3.f, FColor::Red,
			TEXT("DOOR L CLOSED")
		);
	}
}

