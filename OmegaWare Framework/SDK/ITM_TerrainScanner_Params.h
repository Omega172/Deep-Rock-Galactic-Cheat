#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ITM_TerrainScanner.ITM_TerrainScanner_C.AddedToInventory
	 */
	struct AITM_TerrainScanner_C_AddedToInventory_Params
	{
	public:
		class APlayerCharacter*                                    ItemOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_TerrainScanner.ITM_TerrainScanner_C.OnTerrainScannerPressed
	 */
	struct AITM_TerrainScanner_C_OnTerrainScannerPressed_Params
	{	};

	/**
	 * Function ITM_TerrainScanner.ITM_TerrainScanner_C.OnTerrainScannerReleased
	 */
	struct AITM_TerrainScanner_C_OnTerrainScannerReleased_Params
	{	};

	/**
	 * Function ITM_TerrainScanner.ITM_TerrainScanner_C.ExecuteUbergraph_ITM_TerrainScanner
	 */
	struct AITM_TerrainScanner_C_ExecuteUbergraph_ITM_TerrainScanner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
