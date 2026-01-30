#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door_Multi.generated.h"

UCLASS()
class MYPROJECT_API ADoor_Multi : public AActor
{
	GENERATED_BODY()

public:
	ADoor_Multi();

	// ?????????? ??????????
	void ActivateTrigger();
	void DeactivateTrigger();

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* DoorMesh;

	int32 ActiveTriggers = 0;

	void UpdateDoor();
};
