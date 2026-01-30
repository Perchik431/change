#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gravity_Cube.generated.h"

UENUM()
enum class EGravityMoveState : uint8
{
	Up,
	Down,
	Frozen
};

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
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* CubeMesh;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MoveSpeed = 300.f;

	EGravityMoveState MoveState = EGravityMoveState::Frozen;

	void ToggleMove();
};
