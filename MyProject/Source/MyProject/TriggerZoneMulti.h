#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerZoneMulti.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class ADoor_Multi;
class UMaterialInstanceDynamic;

UCLASS()
class MYPROJECT_API ATriggerZoneMulti : public AActor
{
	GENERATED_BODY()

public:
	ATriggerZoneMulti();

protected:
	virtual void BeginPlay() override;

public:
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

	UPROPERTY(EditAnywhere)
	ADoor_Multi* LinkedDoor;

private:
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* TriggerBox;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* VisualMesh;

	UMaterialInstanceDynamic* DynMaterial;

	bool bIsActive = false;
};
