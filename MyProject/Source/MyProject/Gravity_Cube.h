#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gravity_Cube.generated.h"

UCLASS()
class MYPROJECT_API AGravity_Cube : public AActor
{
	GENERATED_BODY()

public:
	AGravity_Cube();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	// ===== COMPONENTS =====
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* CubeMesh;

	// ===== MOVEMENT =====
	UPROPERTY(EditAnywhere, Category = "Gravity")
	float MoveSpeed = 200.f;

	bool bMoveUp = false;

	// ===== INPUT =====
	void ToggleGravity();
};