#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerZoneF.generated.h"

class UBoxComponent;
class ADoor_ActorF;
class UMaterialInstanceDynamic;

UCLASS()
class MYPROJECT_API ATriggerZoneF : public AActor
{
	GENERATED_BODY()

public:
	ATriggerZoneF();

protected:
	virtual void BeginPlay() override;

private:
	// ===== COMPONENTS =====
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* TriggerBox;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* VisualMesh;

	// ===== DOOR LINK =====
	UPROPERTY(EditAnywhere, Category = "Trigger")
	ADoor_ActorF* LinkedDoor;

	// ===== MATERIAL =====
	UMaterialInstanceDynamic* DynamicMaterial;

	// ===== EVENTS =====
	UFUNCTION()
	void OnTriggerBegin(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	UFUNCTION()
	void OnTriggerEnd(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex
	);

	// ===== HELPERS =====
	void SetTriggerColor(const FLinearColor& Color);
};
