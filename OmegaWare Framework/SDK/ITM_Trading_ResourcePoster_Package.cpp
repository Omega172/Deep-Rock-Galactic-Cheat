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
	 * 		Name   -> Function ITM_Trading_ResourcePoster.ITM_Trading_ResourcePoster_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Trading_ResourcePoster_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_ResourcePoster.ITM_Trading_ResourcePoster_C.Construct");
		
		UITM_Trading_ResourcePoster_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_ResourcePoster.ITM_Trading_ResourcePoster_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Trading_ResourcePoster_C::SetData(class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_ResourcePoster.ITM_Trading_ResourcePoster_C.SetData");
		
		UITM_Trading_ResourcePoster_C_SetData_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_ResourcePoster.ITM_Trading_ResourcePoster_C.ExecuteUbergraph_ITM_Trading_ResourcePoster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Trading_ResourcePoster_C::ExecuteUbergraph_ITM_Trading_ResourcePoster(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_ResourcePoster.ITM_Trading_ResourcePoster_C.ExecuteUbergraph_ITM_Trading_ResourcePoster");
		
		UITM_Trading_ResourcePoster_C_ExecuteUbergraph_ITM_Trading_ResourcePoster_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Trading_ResourcePoster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Trading_ResourcePoster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Trading_ResourcePoster.ITM_Trading_ResourcePoster_C");
		return ptr;
	}

}


