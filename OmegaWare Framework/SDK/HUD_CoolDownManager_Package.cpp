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
	 * 		Name   -> Function HUD_CoolDownManager.HUD_CoolDownManager_C.GetOrCreateWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     CoolDownOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCoolDownProgressStyle                      CoolDownStyle                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCoolDownProgressWidget*                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CoolDownManager_C::GetOrCreateWidget(class UObject* CoolDownOwner, const struct FCoolDownProgressStyle& CoolDownStyle, class UCoolDownProgressWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoolDownManager.HUD_CoolDownManager_C.GetOrCreateWidget");
		
		UHUD_CoolDownManager_C_GetOrCreateWidget_Params params {};
		params.CoolDownOwner = CoolDownOwner;
		params.CoolDownStyle = CoolDownStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CoolDownManager.HUD_CoolDownManager_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_CoolDownManager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoolDownManager.HUD_CoolDownManager_C.Construct");
		
		UHUD_CoolDownManager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CoolDownManager.HUD_CoolDownManager_C.OnCoolDownProgress_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     CoolDownObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCoolDownProgressStyle                      Style                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CoolDownManager_C::OnCoolDownProgress_Event(class UObject* CoolDownObject, const struct FCoolDownProgressStyle& Style, float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoolDownManager.HUD_CoolDownManager_C.OnCoolDownProgress_Event");
		
		UHUD_CoolDownManager_C_OnCoolDownProgress_Event_Params params {};
		params.CoolDownObject = CoolDownObject;
		params.Style = Style;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CoolDownManager.HUD_CoolDownManager_C.ExecuteUbergraph_HUD_CoolDownManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CoolDownManager_C::ExecuteUbergraph_HUD_CoolDownManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoolDownManager.HUD_CoolDownManager_C.ExecuteUbergraph_HUD_CoolDownManager");
		
		UHUD_CoolDownManager_C_ExecuteUbergraph_HUD_CoolDownManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_CoolDownManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_CoolDownManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_CoolDownManager.HUD_CoolDownManager_C");
		return ptr;
	}

}


