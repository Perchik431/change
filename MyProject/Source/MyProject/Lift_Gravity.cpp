#include "Lift_Gravity.h"

#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"

ALift_Gravity::ALift_Gravity()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	Mesh->SetSimulatePhysics(false);
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Mesh->SetCollisionResponseToAllChannels(ECR_Block);
}

void ALift_Gravity::BeginPlay()
{
	Super::BeginPlay();

	StartZ = GetActorLocation().Z;
	TargetZ = StartZ;

	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (!PC) return;

	EnableInput(PC);

	if (InputComponent)
	{
		InputComponent->BindKey(EKeys::H, IE_Pressed, this, &ALift_Gravity::HandleLift);
	}

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 5.f, FColor::Yellow,
			TEXT("LIFT READY | Press H")
		);
	}
}

void ALift_Gravity::HandleLift()
{
	if (bIsMoving) return;

	bIsMoving = true;

	if (bMoveUp)
	{
		TargetZ = StartZ + MoveDistance;
	}
	else
	{
		TargetZ = StartZ;
	}

	bMoveUp = !bMoveUp;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 2.f, FColor::Cyan,
			TEXT("H PRESSED")
		);
	}
}

void ALift_Gravity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsMoving) return;

	FVector Location = GetActorLocation();
	float Direction = (TargetZ > Location.Z) ? 1.f : -1.f;

	Location.Z += Direction * Speed * DeltaTime;

	if ((Direction > 0 && Location.Z >= TargetZ) ||
		(Direction < 0 && Location.Z <= TargetZ))
	{
		Location.Z = TargetZ;
		bIsMoving = false;
	}

	SetActorLocation(Location);
}

