#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorL_Actor.generated.h"

class UStaticMeshComponent;

UCLASS()
class MYPROJECT_API ADoorL_Actor : public AActor
{
	GENERATED_BODY()

public:
	ADoorL_Actor();

protected:
	virtual void BeginPlay() override;

public:
	// Door mesh
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* DoorMesh;

	// Door state
	void OpenDoor();
	void CloseDoor();

private:
	bool bIsOpen = false;
};
