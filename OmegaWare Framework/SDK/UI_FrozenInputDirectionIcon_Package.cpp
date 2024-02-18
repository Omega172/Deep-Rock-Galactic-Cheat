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
	 * 		Name   -> Function UI_FrozenInputDirectionIcon.UI_FrozenInputDirectionIcon_C.Finished_CD1267A8441EB6B05873859D8163D918
	 * 		Flags  -> ()
	 */
	void UUI_FrozenInputDirectionIcon_C::Finished_CD1267A8441EB6B05873859D8163D918()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrozenInputDirectionIcon.UI_FrozenInputDirectionIcon_C.Finished_CD1267A8441EB6B05873859D8163D918");
		
		UUI_FrozenInputDirectionIcon_C_Finished_CD1267A8441EB6B05873859D8163D918_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FrozenInputDirectionIcon.UI_FrozenInputDirectionIcon_C.SetDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EThawInputDirection                                Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_FrozenInputDirectionIcon_C::SetDirection(EThawInputDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrozenInputDirectionIcon.UI_FrozenInputDirectionIcon_C.SetDirection");
		
		UUI_FrozenInputDirectionIcon_C_SetDirection_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FrozenInputDirectionIcon.UI_FrozenInputDirectionIcon_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_FrozenInputDirectionIcon_C::SetActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrozenInputDirectionIcon.UI_FrozenInputDirectionIcon_C.SetActive");
		
		UUI_FrozenInputDirectionIcon_C_SetActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FrozenInputDirectionIcon.UI_FrozenInputDirectionIcon_C.OnPressed
	 * 		Flags  -> ()
	 */
	void UUI_FrozenInputDirectionIcon_C::OnPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrozenInputDirectionIcon.UI_FrozenInputDirectionIcon_C.OnPressed");
		
		UUI_FrozenInputDirectionIcon_C_OnPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FrozenInputDirectionIcon.UI_FrozenInputDirectionIcon_C.OnFailed
	 * 		Flags  -> ()
	 */
	void UUI_FrozenInputDirectionIcon_C::OnFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrozenInputDirectionIcon.UI_FrozenInputDirectionIcon_C.OnFailed");
		
		UUI_FrozenInputDirectionIcon_C_OnFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FrozenInputDirectionIcon.UI_FrozenInputDirectionIcon_C.ExecuteUbergraph_UI_FrozenInputDirectionIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_FrozenInputDirectionIcon_C::ExecuteUbergraph_UI_FrozenInputDirectionIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrozenInputDirectionIcon.UI_FrozenInputDirectionIcon_C.ExecuteUbergraph_UI_FrozenInputDirectionIcon");
		
		UUI_FrozenInputDirectionIcon_C_ExecuteUbergraph_UI_FrozenInputDirectionIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_FrozenInputDirectionIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_FrozenInputDirectionIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_FrozenInputDirectionIcon.UI_FrozenInputDirectionIcon_C");
		return ptr;
	}

}


