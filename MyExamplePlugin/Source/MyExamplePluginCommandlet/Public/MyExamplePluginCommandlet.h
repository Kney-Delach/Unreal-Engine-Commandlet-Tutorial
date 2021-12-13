#pragma once

#include <Runtime/Core/Public/Containers/UnrealString.h>
#include <Runtime/CoreUObject/Public/UObject/ObjectMacros.h>
#include <Runtime/Engine/Classes/Commandlets/Commandlet.h>

#include "MyExamplePluginCommandlet.generated.h"           

UCLASS()
class UMyExamplePluginCommandlet final : public UCommandlet
{
	GENERATED_UCLASS_BODY()

	int32 Main(const FString& InCmdLineParams) final;
};
