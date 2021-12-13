namespace UnrealBuildTool.Rules
{
    public class MyExamplePluginCommandlet : ModuleRules
    {
        public MyExamplePluginCommandlet(ReadOnlyTargetRules Target) : base(Target)
        {
            PrivateDependencyModuleNames.AddRange(
                new string[] 
                {
					"Core",
                    "CoreUObject",
                    "Engine"
				}
			);
        }
    };
}
