#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Forvard_Gravity.generated.h"

UENUM()
enum class EMoveState : uint8
{
	Forward,
	Backward,
	Frozen
};

UCLASS()
class MYPROJECT_API AForvard_Gravity : public AActor
{
	GENERATED_BODY()

public:
	AForvard_Gravity();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	// ===== COMPONENT =====
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* CubeMesh;

	// ===== MOVEMENT =====
	UPROPERTY(EditAnywhere, Category = "Movement")
	float MoveSpeed = 200.f;

	EMoveState MoveState = EMoveState::Frozen;

	// ===== INPUT =====
	void OnToggleState();
};
