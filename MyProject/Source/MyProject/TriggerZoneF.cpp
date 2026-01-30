#include "TriggerZoneF.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Door_ActorF.h"
#include "Forvard_Gravity.h"
#include "Engine/Engine.h"

ATriggerZoneF::ATriggerZoneF()
{
	PrimaryActorTick.bCanEverTick = false;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerBox->SetupAttachment(Root);

	TriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	TriggerBox->SetCollisionResponseToAllChannels(ECR_Overlap);

	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualMesh"));
	VisualMesh->SetupAttachment(Root);
	VisualMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	UE_LOG(LogTemp, Warning, TEXT("TriggerZoneF CONSTRUCTOR"));
}

void ATriggerZoneF::BeginPlay()
{
	Super::BeginPlay();

	// ===== MATERIAL =====
	if (VisualMesh && VisualMesh->GetMaterial(0))
	{
		DynamicMaterial = VisualMesh->CreateDynamicMaterialInstance(0);
		SetTriggerColor(FLinearColor::Red);
	}

	// ===== EVENTS =====
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ATriggerZoneF::OnTriggerBegin);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ATriggerZoneF::OnTriggerEnd);

	// ===== DOOR CHECK =====
	if (LinkedDoor)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				4.f,
				FColor::Green,
				TEXT("TRIGGER: LINKED DOOR OK")
			);
		}
	}
	else
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				5.f,
				FColor::Red,
				TEXT("TRIGGER ERROR: NO LINKED DOOR")
			);
		}
	}
}

void ATriggerZoneF::OnTriggerBegin(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult
)
{
	if (!OtherActor || !LinkedDoor)
	{
		return;
	}

	// ✅ ФИЛЬТР: ТОЛЬКО Forvard_Gravity
	if (!OtherActor->IsA(AForvard_Gravity::StaticClass()))
	{
		return;
	}

	LinkedDoor->OpenDoor();
	SetTriggerColor(FLinearColor::Green);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			2.f,
			FColor::Green,
			TEXT("TRIGGER: FORVARD_GRAVITY ENTERED → DOOR OPEN")
		);
	}
}

void ATriggerZoneF::OnTriggerEnd(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex
)
{
	if (!OtherActor || !LinkedDoor)
	{
		return;
	}

	// ✅ ФИЛЬТР: ТОЛЬКО Forvard_Gravity
	if (!OtherActor->IsA(AForvard_Gravity::StaticClass()))
	{
		return;
	}

	LinkedDoor->CloseDoor();
	SetTriggerColor(FLinearColor::Red);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			2.f,
			FColor::Red,
			TEXT("TRIGGER: FORVARD_GRAVITY EXITED → DOOR CLOSED")
		);
	}
}

void ATriggerZoneF::SetTriggerColor(const FLinearColor& Color)
{
	if (DynamicMaterial)
	{
		DynamicMaterial->SetVectorParameterValue(TEXT("Color"), Color);
	}
}
