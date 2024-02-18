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
	 * 		Name   -> Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.Update
	 * 		Flags  -> ()
	 */
	void UITM_WeaponAndPerkInfo_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.Update");
		
		UITM_WeaponAndPerkInfo_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.PlayEnter
	 * 		Flags  -> ()
	 */
	void UITM_WeaponAndPerkInfo_C::PlayEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.PlayEnter");
		
		UITM_WeaponAndPerkInfo_C_PlayEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.PlayLeave
	 * 		Flags  -> ()
	 */
	void UITM_WeaponAndPerkInfo_C::PlayLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.PlayLeave");
		
		UITM_WeaponAndPerkInfo_C_PlayLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.EnterFinished
	 * 		Flags  -> ()
	 */
	void UITM_WeaponAndPerkInfo_C::EnterFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.EnterFinished");
		
		UITM_WeaponAndPerkInfo_C_EnterFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.ExecuteUbergraph_ITM_WeaponAndPerkInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_WeaponAndPerkInfo_C::ExecuteUbergraph_ITM_WeaponAndPerkInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.ExecuteUbergraph_ITM_WeaponAndPerkInfo");
		
		UITM_WeaponAndPerkInfo_C_ExecuteUbergraph_ITM_WeaponAndPerkInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_WeaponAndPerkInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_WeaponAndPerkInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C");
		return ptr;
	}

}


