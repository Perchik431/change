#include "Gravity_Cube.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "Components/StaticMeshComponent.h"

AGravity_Cube::AGravity_Cube()
{
    PrimaryActorTick.bCanEverTick = true;

    // Mesh
    CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
    RootComponent = CubeMesh;

    // Ôèçèêà ÂÊË (âàæíî)
    CubeMesh->SetSimulatePhysics(false);
    CubeMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    CubeMesh->SetCollisionProfileName(TEXT("BlockAll"));

    UE_LOG(LogTemp, Warning, TEXT("Gravity Cube CONSTRUCTOR"));
}

void AGravity_Cube::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("Gravity Cube BEGIN PLAY"));

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            3.f,
            FColor::Yellow,
            TEXT("Gravity Cube Ready")
        );
    }

    // ÂÊËÞ×ÀÅÌ INPUT
    if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
    {
        EnableInput(PC);

        InputComponent->BindKey(
            EKeys::G,
            EInputEvent::IE_Pressed,
            this,
            &AGravity_Cube::ToggleGravity
        );

        UE_LOG(LogTemp, Warning, TEXT("INPUT ENABLED (Key G)"));
    }
}

void AGravity_Cube::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector Location = GetActorLocation();

    float Direction = bMoveUp ? 1.f : -1.f;
    Location.Z += Direction * MoveSpeed * DeltaTime;

    SetActorLocation(Location, true);

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            1,
            0.f,
            bMoveUp ? FColor::Green : FColor::Red,
            bMoveUp ? TEXT("MOVING UP") : TEXT("MOVING DOWN")
        );
    }
}

void AGravity_Cube::ToggleGravity()
{
    bMoveUp = !bMoveUp;

    UE_LOG(
        LogTemp,
        Warning,
        TEXT("GRAVITY TOGGLED: %s"),
        bMoveUp ? TEXT("UP") : TEXT("DOWN")
    );

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            2.f,
            FColor::Cyan,
            bMoveUp ? TEXT("Gravity UP") : TEXT("Gravity DOWN")
        );
    }
}