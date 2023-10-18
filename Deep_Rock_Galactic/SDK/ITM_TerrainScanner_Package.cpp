/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TerrainScanner.ITM_TerrainScanner_C.AddedToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            ItemOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_TerrainScanner_C::AddedToInventory(class APlayerCharacter* ItemOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TerrainScanner.ITM_TerrainScanner_C.AddedToInventory");
		
		AITM_TerrainScanner_C_AddedToInventory_Params params {};
		params.ItemOwner = ItemOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TerrainScanner.ITM_TerrainScanner_C.OnTerrainScannerPressed
	 * 		Flags  -> ()
	 */
	void AITM_TerrainScanner_C::OnTerrainScannerPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TerrainScanner.ITM_TerrainScanner_C.OnTerrainScannerPressed");
		
		AITM_TerrainScanner_C_OnTerrainScannerPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TerrainScanner.ITM_TerrainScanner_C.OnTerrainScannerReleased
	 * 		Flags  -> ()
	 */
	void AITM_TerrainScanner_C::OnTerrainScannerReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TerrainScanner.ITM_TerrainScanner_C.OnTerrainScannerReleased");
		
		AITM_TerrainScanner_C_OnTerrainScannerReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TerrainScanner.ITM_TerrainScanner_C.ExecuteUbergraph_ITM_TerrainScanner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_TerrainScanner_C::ExecuteUbergraph_ITM_TerrainScanner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TerrainScanner.ITM_TerrainScanner_C.ExecuteUbergraph_ITM_TerrainScanner");
		
		AITM_TerrainScanner_C_ExecuteUbergraph_ITM_TerrainScanner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AITM_TerrainScanner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AITM_TerrainScanner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ITM_TerrainScanner.ITM_TerrainScanner_C");
		return ptr;
	}

}


