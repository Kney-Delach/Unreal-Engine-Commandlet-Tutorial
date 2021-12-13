#include "MyExamplePluginCommandlet/Public/MyExamplePluginCommandlet.h"

#include <Runtime/Core/Public/Containers/Array.h>
#include <Runtime/Core/Public/Containers/Map.h>
#include <Runtime/Core/Public/Logging/LogMacros.h>

DEFINE_LOG_CATEGORY_STATIC(LogMyExamplePluginCommandlet, Log, All);

UMyExamplePluginCommandlet::UMyExamplePluginCommandlet(const FObjectInitializer& InObjectInitializer)
	: Super(InObjectInitializer)
{
}

int32 UMyExamplePluginCommandlet::Main(const FString& InCmdLineParams)
{
	TArray<FString> Tokens;
	TArray<FString> Switches;
	TMap<FString, FString> KeyValuePairs;

	ParseCommandLine(*InCmdLineParams, Tokens, Switches, KeyValuePairs);

	for (const FString& Token : Tokens)
	{
		UE_LOG(LogMyExamplePluginCommandlet, Display, TEXT("Token Parsed: %s"), *Token);
	}

	for (const FString& Switch : Switches)
	{
		UE_LOG(LogMyExamplePluginCommandlet, Display, TEXT("Switch Parsed: %s"), *Switch);
	}

	for (const TPair<FString, FString>& Pair : KeyValuePairs)
	{
		UE_LOG(LogMyExamplePluginCommandlet, Display, TEXT("Key Value Pair Parsed: %s = %s"), *Pair.Key, *Pair.Value);
	}

	UE_LOG(LogMyExamplePluginCommandlet, Display, TEXT("Hello World!"));

	return 0;
}
