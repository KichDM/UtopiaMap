class CfgPatches
{
    class Utopia
    {
        name = "Utopia";
        author = "ChelseaBoyC18, IC3G4M3R";
        url = "";
        requiredAddons[] = {"A3_Structures_F"};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles
{
    #include "CfgVehicles.hpp"
};

class CfgWorldList
{
    class Utopia {};
};

class CfgWorlds
{
    class Stratis;
    class Utopia: Stratis
    {
        cutscenes[] = {};
        description = "Utopia";
        icon = "";
        worldName = "Utopia\Utopia.wrp";
        author = "ChelseaBoyC18, IC3G4M3R";
        loadingTexts[] = {"Utopia Is A Paradise Island For the Hard Working And Upper Class Who Moved From Altis!"};
        newRoadsShape = "Utopia\data\roads\roads.shp";
        
        pictureMap = "Utopia\data\imagery\pictureMap.paa"; // Background map
        pictureShot = "Utopia\data\imagery\pictureShot.paa"; // Overview picture 
        
        centerPosition[] = {5120,2120};
        ilsPosition[] = {0,0}; // X, Y
        ilsDirection[] = {0,0.08,1}; // X, Z, Y
        ilsTaxiIn[] = {};  // Take off  
        ilsTaxiOff[] = {};  // Landing
        drawTaxiway = false;
		minTreesInForestSquare = 3;
		minRocksInRockSquare = 2;
        class SecondaryAirports {};
        class ReplaceObjects{};
        
        class Sounds
        {
            sounds[] = {};
        };
        
        class Animation
        {
            vehicles[] = {};
        };
        
        class Subdivision {};
        class Names
        {
            #include "Utopia.hpp"
        };
        class DefaultClutter;
        #include "CfgClutter.hpp"
    };
};

#include "CfgSurfaces.hpp"

