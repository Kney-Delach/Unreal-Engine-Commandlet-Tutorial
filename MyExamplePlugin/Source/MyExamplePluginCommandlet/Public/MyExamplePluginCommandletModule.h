#pragma once

#include <Runtime/Core/Public/Modules/ModuleInterface.h>

class FMyExamplePluginCommandletModule final : public IModuleInterface
{
private:
    virtual void StartupModule() override;

    virtual void ShutdownModule() override;
};
