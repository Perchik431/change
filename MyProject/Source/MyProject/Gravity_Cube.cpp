#include "Gravity_Cube.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"

AGravity_Cube::AGravity_Cube()
{
	PrimaryActorTick.bCanEverTick = true;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	RootComponent = CubeMesh;

	CubeMesh->SetSimulatePhysics(false);
	CubeMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CubeMesh->SetCollisionResponseToAllChannels(ECR_Block);
}

void AGravity_Cube::BeginPlay()
{
	Super::BeginPlay();
	EnableInput(GetWorld()->GetFirstPlayerController());

	InputComponent->BindKey(EKeys::G, IE_Pressed, this, &AGravity_Cube::ToggleMove);

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT("Gravity_Cube READY"));
}

void AGravity_Cube::ToggleMove()
{
	if (MoveState == EGravityMoveState::Frozen)
		MoveState = EGravityMoveState::Up;
	else if (MoveState == EGravityMoveState::Up)
		MoveState = EGravityMoveState::Down;
	else
		MoveState = EGravityMoveState::Frozen;

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Yellow, TEXT("Gravity Cube TOGGLED"));
}

void AGravity_Cube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MoveState == EGravityMoveState::Frozen) return;

	FVector Offset = FVector::ZeroVector;
	Offset.Z = (MoveState == EGravityMoveState::Up ? 1 : -1) * MoveSpeed * DeltaTime;

	AddActorWorldOffset(Offset, true); // 🔥 ВАЖНО: true = sweep
}
