#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerZoneL.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class ADoorL_Actor;

UCLASS()
class MYPROJECT_API ATriggerZoneL : public AActor
{
	GENERATED_BODY()

public:
	ATriggerZoneL();

protected:
	virtual void BeginPlay() override;

private:
	// Collision
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* TriggerBox;

	// Visual
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY()
	UMaterialInstanceDynamic* DynamicMaterial;

	// Door link
	UPROPERTY(EditAnywhere, Category = "Trigger")
	ADoorL_Actor* LinkedDoor;

	// Colors
	UPROPERTY(EditAnywhere, Category = "Trigger|Color")
	FLinearColor InactiveColor = FLinearColor::Red;

	UPROPERTY(EditAnywhere, Category = "Trigger|Color")
	FLinearColor ActiveColor = FLinearColor::Green;

	// Overlap handlers
	UFUNCTION()
	void OnOverlapBegin(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	UFUNCTION()
	void OnOverlapEnd(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex
	);
};
