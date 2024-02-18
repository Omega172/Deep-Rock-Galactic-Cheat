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
	 * 		Name   -> Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.SetClipCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_LineCutter_CurrentClip_C::SetClipCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.SetClipCount");
		
		UWeaponDisplay_LineCutter_CurrentClip_C_SetClipCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.SetTotalCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_LineCutter_CurrentClip_C::SetTotalCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.SetTotalCount");
		
		UWeaponDisplay_LineCutter_CurrentClip_C_SetTotalCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponDisplay_LineCutter_CurrentClip_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.PreConstruct");
		
		UWeaponDisplay_LineCutter_CurrentClip_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.ExecuteUbergraph_WeaponDisplay_LineCutter_CurrentClip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_LineCutter_CurrentClip_C::ExecuteUbergraph_WeaponDisplay_LineCutter_CurrentClip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C.ExecuteUbergraph_WeaponDisplay_LineCutter_CurrentClip");
		
		UWeaponDisplay_LineCutter_CurrentClip_C_ExecuteUbergraph_WeaponDisplay_LineCutter_CurrentClip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_LineCutter_CurrentClip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_LineCutter_CurrentClip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_LineCutter_CurrentClip.WeaponDisplay_LineCutter_CurrentClip_C");
		return ptr;
	}

}


