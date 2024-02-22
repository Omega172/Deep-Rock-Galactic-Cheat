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
	 * 		Name   -> Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.GetPlayerClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          OutPlayerCharacter                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_TopBar_PlayerCounter_C::GetPlayerClass(class UPlayerCharacterID** OutPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.GetPlayerClass");
		
		UITM_TopBar_PlayerCounter_C_GetPlayerClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlayerCharacter != nullptr)
			*OutPlayerCharacter = params.OutPlayerCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.Refresh
	 * 		Flags  -> ()
	 */
	void UITM_TopBar_PlayerCounter_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.Refresh");
		
		UITM_TopBar_PlayerCounter_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_TopBar_PlayerCounter_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.Construct");
		
		UITM_TopBar_PlayerCounter_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.ExecuteUbergraph_ITM_TopBar_PlayerCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_TopBar_PlayerCounter_C::ExecuteUbergraph_ITM_TopBar_PlayerCounter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.ExecuteUbergraph_ITM_TopBar_PlayerCounter");
		
		UITM_TopBar_PlayerCounter_C_ExecuteUbergraph_ITM_TopBar_PlayerCounter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_TopBar_PlayerCounter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_TopBar_PlayerCounter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C");
		return ptr;
	}

}


