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
	 * 		Name   -> Function ITM_SocialMediaButtons.ITM_SocialMediaButtons_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_SocialMediaButtons_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SocialMediaButtons.ITM_SocialMediaButtons_C.Construct");
		
		UITM_SocialMediaButtons_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SocialMediaButtons.ITM_SocialMediaButtons_C.ExecuteUbergraph_ITM_SocialMediaButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SocialMediaButtons_C::ExecuteUbergraph_ITM_SocialMediaButtons(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SocialMediaButtons.ITM_SocialMediaButtons_C.ExecuteUbergraph_ITM_SocialMediaButtons");
		
		UITM_SocialMediaButtons_C_ExecuteUbergraph_ITM_SocialMediaButtons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_SocialMediaButtons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_SocialMediaButtons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_SocialMediaButtons.ITM_SocialMediaButtons_C");
		return ptr;
	}

}


