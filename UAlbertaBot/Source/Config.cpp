#include "Config.h"
#include "UABAssert.h"

namespace Config
{
    namespace ConfigFile
    {
        bool ConfigFileFound                = false;
        bool ConfigFileParsed               = false;
		/*std::string ConfigFileLocation		=	"E:/Homework/CMPUT350/TheDon/UAlbertaBot/UAlbertaBot_Config.txt";*/
        //std::string ConfigFileLocation      = "C:/Users/Hussain/Desktop/git/TheDon/UAlbertaBot/UAlbertaBot_Config.txt";


        std::string ConfigFileLocation      = "bwapi-data/UAlbertaBot_Config.txt";

       // std::string ConfigFileLocation      = "C:/Users/AlexB_000/Documents/GitHub/TheDon/UAlbertaBot/UAlbertaBot_Config.txt";*/


    }

    namespace Strategy
    {
        std::string ProtossStrategyName     = "Protoss_ZealotRush";
        std::string TerranStrategyName      = "Terran_MarineDrop";
        std::string ZergStrategyName        = "Zerg_6pool";
        std::string StrategyName            = "Protoss_ZealotRush";
        std::string ReadDir                 = "bwapi-data/write/";
		//std::string ReadDir					= "E:/Homework/CMPUT350/TheDon/UAlbertaBot/bin/write/";
        std::string WriteDir                = "bwapi-data/write/";
		//std::string WriteDir				= "E:/Homework/CMPUT350/TheDon/UAlbertaBot/bin/write/";
        bool GasStealWithScout              = false;
        bool ScoutHarassEnemy               = false;
        bool UseEnemySpecificStrategy       = true;
        bool FoundEnemySpecificStrategy     = false;
    }

    namespace Modules							    
    {
        // the default tournament bot modules
        bool UsingGameCommander             = true;     // toggle GameCommander, effectively UAlbertaBot
        bool UsingScoutManager              = true;
        bool UsingCombatCommander           = true;
        bool UsingBuildOrderSearch          = true;     // toggle use of Build Order Search, currently no backup
        bool UsingAutoObserver              = true;
        bool UsingStrategyIO                = true;    // toggle the use of file io for strategy
        bool UsingUnitCommandManager        = false;    // handles all unit commands
		
        // extra things, don't enable unless you know what they are
        bool UsingBuildOrderDemo            = false;
    }

    namespace BotInfo
    {
        std::string BotName                 = "theDon";
        std::string Authors                 = "Dave Churchill, Alex Brosda, Imran Ali, Hussain Khan";
        bool PrintInfoOnStart               = false;
    }

    namespace BWAPIOptions
    {
        int SetLocalSpeed                   = 42;
        int SetFrameSkip                    = 0;
        bool EnableUserInput                = true;
        bool EnableCompleteMapInformation   = false;
    }
    
    namespace Tournament						
    {
        int GameEndFrame                    = 86400;	
    }
    
    namespace Debug								
    {
        bool DrawGameInfo                   = true;
        bool DrawUnitHealthBars             = true;
        bool DrawProductionInfo             = true;
        bool DrawBuildOrderSearchInfo       = false;
        bool DrawScoutInfo                  = false;
        bool DrawResourceInfo               = false;
        bool DrawWorkerInfo                 = false;
        bool DrawModuleTimers               = false;
        bool DrawReservedBuildingTiles      = true;
        bool DrawCombatSimulationInfo       = false;
        bool DrawBuildingInfo               = false;
        bool DrawMouseCursorInfo            = false;
        bool DrawEnemyUnitInfo              = false;
        bool DrawBWTAInfo                   = false;
        bool DrawMapGrid                    = false;
        bool DrawUnitTargetInfo             = false;
        bool DrawSquadInfo                  = false;
        bool DrawBOSSStateInfo              = false;
        bool PrintModuleTimeout             = false;	

        std::string ErrorLogFilename        = "UAB_ErrorLog.txt";
        bool LogAssertToErrorFile           = false;

        BWAPI::Color ColorLineTarget        = BWAPI::Colors::White;
        BWAPI::Color ColorLineMineral       = BWAPI::Colors::Cyan;
        BWAPI::Color ColorUnitNearEnemy     = BWAPI::Colors::Red;
        BWAPI::Color ColorUnitNotNearEnemy  = BWAPI::Colors::Green;
    }

    namespace Micro								
    {
        bool UseSparcraftSimulation         = true;
        bool KiteWithRangedUnits            = true;
        std::set<BWAPI::UnitType> KiteLongerRangedUnits;
        bool WorkersDefendRush              = false; 
		int RetreatMeleeUnitShields         = 0;
        int RetreatMeleeUnitHP              = 0;
        int CombatRadius                    = 1000;     // radius of combat to consider units for Micro Search
        int CombatRegroupRadius             = 300;      // radius of units around frontmost unit we consider in regroup calculation
        int UnitNearEnemyRadius             = 600;      // radius to consider a unit 'near' to an enemy unit
    }

    namespace Macro
    {
        int BOSSFrameLimit                  = 160;
        int WorkersPerRefinery              = 3;
        int BuildingSpacing                 = 1;
        int PylonSpacing                    = 3;
    }

    namespace Tools								
    {
        extern int MAP_GRID_SIZE            = 320;      // size of grid spacing in MapGrid
    }
}