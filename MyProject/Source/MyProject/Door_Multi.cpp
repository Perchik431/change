#include "Door_Multi.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"

ADoor_Multi::ADoor_Multi()
{
	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	RootComponent = DoorMesh;
}

void ADoor_Multi::ActivateTrigger()
{
	ActiveTriggers++;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 2.f, FColor::Yellow,
			FString::Printf(TEXT("Trigger Activated | Count = %d"), ActiveTriggers)
		);
	}

	UpdateDoor();
}

void ADoor_Multi::DeactivateTrigger()
{
	ActiveTriggers = FMath::Max(0, ActiveTriggers - 1);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 2.f, FColor::Blue,
			FString::Printf(TEXT("Trigger Deactivated | Count = %d"), ActiveTriggers)
		);
	}

	UpdateDoor();
}

void ADoor_Multi::UpdateDoor()
{
	if (ActiveTriggers >= 2)
	{
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);

		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("DOOR OPEN"));
	}
	else
	{
		SetActorHiddenInGame(false);
		SetActorEnableCollision(true);

		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("DOOR CLOSED"));
	}
}
