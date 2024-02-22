/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * 		Name   -> Function ITM_Biome_ResourceIcon.ITM_Biome_ResourceIcon_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsScarce                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Biome_ResourceIcon_C::SetData(class UResourceData* Resource, bool IsScarce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Biome_ResourceIcon.ITM_Biome_ResourceIcon_C.SetData");
		
		UITM_Biome_ResourceIcon_C_SetData_Params params {};
		params.Resource = Resource;
		params.IsScarce = IsScarce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Biome_ResourceIcon.ITM_Biome_ResourceIcon_C.ExecuteUbergraph_ITM_Biome_ResourceIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Biome_ResourceIcon_C::ExecuteUbergraph_ITM_Biome_ResourceIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Biome_ResourceIcon.ITM_Biome_ResourceIcon_C.ExecuteUbergraph_ITM_Biome_ResourceIcon");
		
		UITM_Biome_ResourceIcon_C_ExecuteUbergraph_ITM_Biome_ResourceIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Biome_ResourceIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Biome_ResourceIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Biome_ResourceIcon.ITM_Biome_ResourceIcon_C");
		return ptr;
	}

}


