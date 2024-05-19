class CfgPatches
{
	class bcombat
	{
		units[] = { };
		weapons[] = { };
		requiredAddons[] = {"A3_Characters_F", "CBA_Extended_EventHandlers"};
		version = "0.18";
		versionStr = "0.18";
		versionDesc= "bCombat | infantry AI mod";
		versionAr[] = {0,18,0};
		author[] = {"fabrizio_T"};
	};
};

class Extended_PostInit_EventHandlers {
    class bcombat {
        clientInit = "call compile preprocessFileLineNumbers '\@bcombat\bcombat.sqf'";
    };
}; 

class CfgVehicles
{
 class Land;
 class Man: Land{};
 class CAManBase: Man
 {
  fsmDanger = "@bcombat\fsm\danger.fsm";
 };
};
