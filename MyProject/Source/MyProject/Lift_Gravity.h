#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lift_Gravity.generated.h"

class UStaticMeshComponent;

UCLASS()
class MYPROJECT_API ALift_Gravity : public AActor
{
	GENERATED_BODY()

public:
	ALift_Gravity();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Category = "Lift")
	float Speed = 300.f;

	UPROPERTY(EditAnywhere, Category = "Lift")
	float MoveDistance = 1020.f;

	float StartZ = 0.f;
	float TargetZ = 0.f;

	bool bMoveUp = true;
	bool bIsMoving = false;

	void HandleLift();  
};
