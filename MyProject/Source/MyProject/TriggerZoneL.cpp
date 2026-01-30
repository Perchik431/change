#include "TriggerZoneL.h"

#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/Engine.h"

#include "DoorL_Actor.h"
#include "Lift_Gravity.h"

ATriggerZoneL::ATriggerZoneL()
{
	PrimaryActorTick.bCanEverTick = false;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;

	TriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	TriggerBox->SetGenerateOverlapEvents(true);
	TriggerBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	TriggerBox->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Overlap);
	TriggerBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ATriggerZoneL::BeginPlay()
{
	Super::BeginPlay();

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ATriggerZoneL::OnOverlapBegin);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ATriggerZoneL::OnOverlapEnd);

	// Create dynamic material
	if (Mesh->GetMaterial(0))
	{
		DynamicMaterial = UMaterialInstanceDynamic::Create(
			Mesh->GetMaterial(0),
			this
		);

		Mesh->SetMaterial(0, DynamicMaterial);
		DynamicMaterial->SetVectorParameterValue("Color", InactiveColor);
	}

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 5.f, FColor::Yellow,
			TEXT("TRIGGER L READY")
		);
	}
}

void ATriggerZoneL::OnOverlapBegin(
	UPrimitiveComponent*,
	AActor* OtherActor,
	UPrimitiveComponent*,
	int32,
	bool,
	const FHitResult&
)
{
	if (OtherActor && OtherActor->IsA(ALift_Gravity::StaticClass()))
	{
		if (DynamicMaterial)
		{
			DynamicMaterial->SetVectorParameterValue("Color", ActiveColor);
		}

		if (LinkedDoor)
		{
			LinkedDoor->OpenDoor();
		}
	}
}

void ATriggerZoneL::OnOverlapEnd(
	UPrimitiveComponent*,
	AActor* OtherActor,
	UPrimitiveComponent*,
	int32
)
{
	if (OtherActor && OtherActor->IsA(ALift_Gravity::StaticClass()))
	{
		if (DynamicMaterial)
		{
			DynamicMaterial->SetVectorParameterValue("Color", InactiveColor);
		}

		if (LinkedDoor)
		{
			LinkedDoor->CloseDoor();
		}
	}
}
