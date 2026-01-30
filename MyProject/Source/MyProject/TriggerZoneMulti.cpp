#include "TriggerZoneMulti.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Door_Multi.h"
#include "Engine/Engine.h"

ATriggerZoneMulti::ATriggerZoneMulti()
{
	PrimaryActorTick.bCanEverTick = false;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;

	TriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	TriggerBox->SetCollisionResponseToAllChannels(ECR_Overlap);

	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualMesh"));
	VisualMesh->SetupAttachment(RootComponent);
	VisualMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ATriggerZoneMulti::BeginPlay()
{
	Super::BeginPlay();

	if (VisualMesh && VisualMesh->GetMaterial(0))
	{
		DynMaterial = VisualMesh->CreateDynamicMaterialInstance(0);
		if (DynMaterial)
			DynMaterial->SetVectorParameterValue("Color", FLinearColor::Red);
	}

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT("Trigger READY"));
}

void ATriggerZoneMulti::NotifyActorBeginOverlap(AActor* OtherActor)
{
	if (bIsActive) return;

	bIsActive = true;

	if (DynMaterial)
		DynMaterial->SetVectorParameterValue("Color", FLinearColor::Green);

	if (LinkedDoor)
		LinkedDoor->ActivateTrigger();

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Yellow, TEXT("TRIGGER ACTIVATED"));
}

void ATriggerZoneMulti::NotifyActorEndOverlap(AActor* OtherActor)
{
	if (!bIsActive) return;

	bIsActive = false;

	if (DynMaterial)
		DynMaterial->SetVectorParameterValue("Color", FLinearColor::Red);

	if (LinkedDoor)
		LinkedDoor->DeactivateTrigger();

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Blue, TEXT("TRIGGER DEACTIVATED"));
}
