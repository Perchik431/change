#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Dead_Zone_Actor.generated.h"

class UBoxComponent;

UCLASS()
class MYPROJECT_API ADead_Zone_Actor : public AActor
{
	GENERATED_BODY()

public:
	ADead_Zone_Actor();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Dead Zone")
	UBoxComponent* TriggerBox;

	UFUNCTION()
	void OnTriggerBegin(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
};
