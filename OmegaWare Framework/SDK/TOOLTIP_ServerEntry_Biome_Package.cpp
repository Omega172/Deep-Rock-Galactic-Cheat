/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * 		Name   -> Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBiome*                                      InBiome                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_ServerEntry_Biome_C::SetData(class UBiome* InBiome)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.SetData");
		
		UTOOLTIP_ServerEntry_Biome_C_SetData_Params params {};
		params.InBiome = InBiome;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTOOLTIP_ServerEntry_Biome_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.PreConstruct");
		
		UTOOLTIP_ServerEntry_Biome_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Biome
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_ServerEntry_Biome_C::ExecuteUbergraph_TOOLTIP_ServerEntry_Biome(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Biome");
		
		UTOOLTIP_ServerEntry_Biome_C_ExecuteUbergraph_TOOLTIP_ServerEntry_Biome_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTOOLTIP_ServerEntry_Biome_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTOOLTIP_ServerEntry_Biome_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C");
		return ptr;
	}

}


