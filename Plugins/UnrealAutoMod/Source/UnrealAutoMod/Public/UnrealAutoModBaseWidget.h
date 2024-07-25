#pragma once

#include "UnrealAutoModPrivatePCH.h"
#include "Blueprint/UserWidget.h"
#include "UnrealAutoModUtilities.h" // Include the header for UnrealAutoModUtilities
#include "UnrealAutoModBaseWidget.generated.h"

UCLASS()
class UNREALAUTOMOD_API UUnrealAutoModBaseWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UUnrealAutoModBaseWidget(const FObjectInitializer& ObjectInitializer);

protected:
    virtual void NativeConstruct() override;

    // UnrealAutoModUtilities object
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Utilities", Transient, Instanced, meta = (AllowPrivateAccess = "true"))
        UUnrealAutoModUtilities* Utilities;
};
