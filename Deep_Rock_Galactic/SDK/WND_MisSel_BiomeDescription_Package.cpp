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
	 * 		Name   -> Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBiome*                                      Biome                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_MisSel_BiomeDescription_C::SetData(class UBiome* Biome)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.SetData");
		
		UWND_MisSel_BiomeDescription_C_SetData_Params params {};
		params.Biome = Biome;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_MisSel_BiomeDescription_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.PreConstruct");
		
		UWND_MisSel_BiomeDescription_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.Construct
	 * 		Flags  -> ()
	 */
	void UWND_MisSel_BiomeDescription_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.Construct");
		
		UWND_MisSel_BiomeDescription_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.ExecuteUbergraph_WND_MisSel_BiomeDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_MisSel_BiomeDescription_C::ExecuteUbergraph_WND_MisSel_BiomeDescription(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.ExecuteUbergraph_WND_MisSel_BiomeDescription");
		
		UWND_MisSel_BiomeDescription_C_ExecuteUbergraph_WND_MisSel_BiomeDescription_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_MisSel_BiomeDescription_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_MisSel_BiomeDescription_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C");
		return ptr;
	}

}


