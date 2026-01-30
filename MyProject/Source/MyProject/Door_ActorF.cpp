#include "Door_ActorF.h"
#include "Engine/Engine.h"
#include "Components/StaticMeshComponent.h"

ADoor_ActorF::ADoor_ActorF()
{
	PrimaryActorTick.bCanEverTick = false;

	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	RootComponent = DoorMesh;

	// ?? ????? — ?????????? ????
	DoorMesh->SetSimulatePhysics(false);
	DoorMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	DoorMesh->SetCollisionProfileName(TEXT("BlockAll"));

	UE_LOG(LogTemp, Warning, TEXT("Door_ActorF CONSTRUCTOR"));
}

void ADoor_ActorF::BeginPlay()
{
	Super::BeginPlay();

	bIsOpen = false;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			4.f,
			FColor::Red,
			TEXT("DOOR: CLOSED (BeginPlay)")
		);
	}
}

void ADoor_ActorF::OpenDoor()
{
	if (bIsOpen)
	{
		return;
	}

	bIsOpen = true;

	DoorMesh->SetVisibility(false);
	DoorMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	UE_LOG(LogTemp, Warning, TEXT("DOOR OPENED"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			3.f,
			FColor::Green,
			TEXT("DOOR: OPENED")
		);
	}
}

void ADoor_ActorF::CloseDoor()
{
	if (!bIsOpen)
	{
		return;
	}

	bIsOpen = false;

	DoorMesh->SetVisibility(true);
	DoorMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	UE_LOG(LogTemp, Warning, TEXT("DOOR CLOSED"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			3.f,
			FColor::Red,
			TEXT("DOOR: CLOSED")
		);
	}
}
