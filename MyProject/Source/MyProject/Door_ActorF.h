#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door_ActorF.generated.h"

UCLASS()
class MYPROJECT_API ADoor_ActorF : public AActor
{
	GENERATED_BODY()

public:
	ADoor_ActorF();

protected:
	virtual void BeginPlay() override;

private:
	// ===== COMPONENT =====
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* DoorMesh;

	// ===== STATE =====
	bool bIsOpen = false;

public:
	// ===== DOOR CONTROL =====
	UFUNCTION(BlueprintCallable)
	void OpenDoor();

	UFUNCTION(BlueprintCallable)
	void CloseDoor();

	bool IsDoorOpen() const { return bIsOpen; }
};
