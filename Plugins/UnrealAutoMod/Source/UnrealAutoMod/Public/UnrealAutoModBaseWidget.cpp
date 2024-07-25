#include "UnrealAutoModBaseWidget.h"
#include "UnrealAutoModPrivatePCH.h"

UUnrealAutoModBaseWidget::UUnrealAutoModBaseWidget(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    // Initialize the UnrealAutoModUtilities object
    Utilities = CreateDefaultSubobject<UUnrealAutoModUtilities>(TEXT("Utilities"));
}

void UUnrealAutoModBaseWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // Additional initialization if needed
}
