#include "Y_GravityCube.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"

AY_GravityCube::AY_GravityCube()
{
	PrimaryActorTick.bCanEverTick = true;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	RootComponent = CubeMesh;

	CubeMesh->SetSimulatePhysics(false);
	CubeMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CubeMesh->SetCollisionResponseToAllChannels(ECR_Block);
}

void AY_GravityCube::BeginPlay()
{
	Super::BeginPlay();
	EnableInput(GetWorld()->GetFirstPlayerController());

	InputComponent->BindKey(EKeys::Y, IE_Pressed, this, &AY_GravityCube::ToggleMove);

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT("Y_GravityCube READY"));
}

void AY_GravityCube::ToggleMove()
{
	if (MoveState == EYMoveState::Frozen)
		MoveState = EYMoveState::Forward;
	else if (MoveState == EYMoveState::Forward)
		MoveState = EYMoveState::Backward;
	else
		MoveState = EYMoveState::Frozen;

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Yellow, TEXT("Y Cube TOGGLED"));
}

void AY_GravityCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MoveState == EYMoveState::Frozen) return;

	FVector Offset = FVector::ZeroVector;
	Offset.Y = (MoveState == EYMoveState::Forward ? 1 : -1) * MoveSpeed * DeltaTime;

	AddActorWorldOffset(Offset, true);
}
