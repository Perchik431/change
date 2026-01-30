#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Y_GravityCube.generated.h"

UENUM()
enum class EYMoveState : uint8
{
	Forward,
	Backward,
	Frozen
};

UCLASS()
class MYPROJECT_API AY_GravityCube : public AActor
{
	GENERATED_BODY()

public:
	AY_GravityCube();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* CubeMesh;

	UPROPERTY(EditAnywhere)
	float MoveSpeed = 300.f;

	EYMoveState MoveState = EYMoveState::Frozen;

	void ToggleMove();
};
