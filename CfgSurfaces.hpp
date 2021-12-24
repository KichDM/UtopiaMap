class CfgSurfaces
{
    class Default {};
    class utopia_desert_Surface : Default
    {      
        files = "utopia_desert_*";
        rough = 0.09;
        maxSpeedCoef = 0.9;
        dust = 0.5;
        soundEnviron = "dirt";
        character = "Empty";
        soundHit = "soft_ground";
        lucidity = 1;
        grassCover = 0.03;
    };
    class utopia_beach_Surface : Default
    {      
        files = "utopia_beach_*";
        rough = 0.09;
        maxSpeedCoef = 0.9;
        dust = 0.5;
        soundEnviron = "dirt";
        character = "Empty";
        soundHit = "soft_ground";
        lucidity = 1;
        grassCover = 0.03;
    };
	class utopia_wild_grass_Surface : Default
    {      
        files = "utopia_wild_grass_*";
        rough = 0.08;
        maxSpeedCoef = 0.9;
        dust = 0.75;
        soundEnviron = "dirt";
        character = "utopia_wild_grass_Character";
        soundHit = "soft_ground";
        lucidity = 2;
        grassCover = 0.1;
    };
    class utopia_grass_green_Surface : Default
    {      
        files = "utopia_grass_green_*";
        rough = 0.08;
        maxSpeedCoef = 0.9;
        dust = 0.75;
        soundEnviron = "dirt";
        character = "Empty";
        soundHit = "hard_ground";
        lucidity = 2;
        grassCover = 0.1;
    };
    class utopia_strthistles_Surface : Default
    {      
        files = "utopia_strthistles_*";
        rough = 0.08;
        maxSpeedCoef = 0.9;
        dust = 0.75;
        soundEnviron = "dirt";
        character = "Empty";
        soundHit = "hard_ground";
        lucidity = 2;
        grassCover = 0.1;
    };
	class utopia_strgreengrass_Surface : Default
    {      
        files = "utopia_strgreengrass_*";
        rough = 0.08;
        maxSpeedCoef = 0.9;
        dust = 0.75;
        soundEnviron = "dirt";
        character = "utopia_strgreengrass_Character";
        soundHit = "soft_ground";
        lucidity = 2;
        grassCover = 0.1;
    };	
	class utopia_concrete_Surface : Default
    {      
        files = "utopia_concrete_*";
        rough = 0.08;
        maxSpeedCoef = 0.9;
        dust = 0.75;
        soundEnviron = "dirt";
        character = "Empty";
        soundHit = "hard_ground";
        lucidity = 2;
        grassCover = 0.1;
    };
	class utopia_dead_Surface : Default
    {      
        files = "utopia_dead_*";
        rough = 0.08;
        maxSpeedCoef = 0.9;
        dust = 0.75;
        soundEnviron = "dirt";
        character = "Empty";
        soundHit = "hard_ground";
        lucidity = 2;
        grassCover = 0.1;
    };	
	class utopia_muddysoil_Surface : Default
    {      
        files = "utopia_muddysoil_*";
        rough = 0.08;
        maxSpeedCoef = 0.9;
        dust = 0.75;
        soundEnviron = "dirt";
        character = "Empty";
        soundHit = "soft_ground";
        lucidity = 2;
        grassCover = 0.1;
    };
	class utopia_snow_Surface : Default
    {      
        files = "utopia_snow_*";
        rough = 0.08;
        maxSpeedCoef = 0.9;
        dust = 0.75;
        soundEnviron = "dirt";
        character = "Empty";
        soundHit = "soft_ground";
        lucidity = 2;
        grassCover = 0.1;
    };
};
 
class CfgSurfaceCharacters
{
	class utopia_strgreengrass_Character 
    {
        probability[] = {1};
        names[] = {"utopia_GrassGreen"};
    };
	class utopia_wild_grass_Character 
    {
        probability[] = {1};
        names[] = {"utopia_GrassGreen"};
    };
};