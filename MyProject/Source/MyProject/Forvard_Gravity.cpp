#include "Forvard_Gravity.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "Components/StaticMeshComponent.h"
#include "InputCoreTypes.h"

AForvard_Gravity::AForvard_Gravity()
{
	PrimaryActorTick.bCanEverTick = true;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	RootComponent = CubeMesh;

	// 🔒 ВАЖНО: нормальная коллизия
	CubeMesh->SetSimulatePhysics(false);
	CubeMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CubeMesh->SetCollisionProfileName(TEXT("BlockAll"));

	UE_LOG(LogTemp, Warning, TEXT("Forvard_Gravity CONSTRUCTOR"));
}

void AForvard_Gravity::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			4.f,
			FColor::Yellow,
			TEXT("Forvard_Gravity READY | Press F")
		);
	}

	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		EnableInput(PC);

		if (InputComponent)
		{
			InputComponent->BindKey(
				EKeys::F,
				IE_Pressed,
				this,
				&AForvard_Gravity::OnToggleState
			);
		}
	}
}

void AForvard_Gravity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MoveState == EMoveState::Frozen)
	{
		return;
	}

	FVector Direction = FVector::ZeroVector;

	if (MoveState == EMoveState::Forward)
	{
		Direction = FVector(1.f, 0.f, 0.f);
	}
	else if (MoveState == EMoveState::Backward)
	{
		Direction = FVector(-1.f, 0.f, 0.f);
	}

	FVector NewLocation = GetActorLocation() + Direction * MoveSpeed * DeltaTime;

	// ✅ SWEEP = TRUE → НЕ проходит сквозь объекты
	SetActorLocation(NewLocation, true);

	if (GEngine)
	{
		FString StateText;

		switch (MoveState)
		{
		case EMoveState::Forward:
			StateText = TEXT("STATE: FORWARD (+X)");
			break;
		case EMoveState::Backward:
			StateText = TEXT("STATE: BACKWARD (-X)");
			break;
		case EMoveState::Frozen:
			StateText = TEXT("STATE: FROZEN");
			break;
		}

		GEngine->AddOnScreenDebugMessage(
			1,
			0.f,
			FColor::Green,
			StateText
		);
	}
}

void AForvard_Gravity::OnToggleState()
{
	// 🔁 Цикл состояний
	if (MoveState == EMoveState::Frozen)
	{
		MoveState = EMoveState::Forward;
	}
	else if (MoveState == EMoveState::Forward)
	{
		MoveState = EMoveState::Backward;
	}
	else
	{
		MoveState = EMoveState::Frozen;
	}

	UE_LOG(LogTemp, Warning, TEXT("STATE CHANGED"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			2.f,
			FColor::Cyan,
			TEXT("F PRESSED → STATE CHANGED")
		);
	}
}
