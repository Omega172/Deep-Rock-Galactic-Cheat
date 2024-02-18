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
	 * 		Name   -> Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.SetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DisableAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_BoscoAbillityIcon_C::SetProgress(float Percent, bool DisableAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.SetProgress");
		
		UHUD_BoscoAbillityIcon_C_SetProgress_Params params {};
		params.Percent = Percent;
		params.DisableAnim = DisableAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBoscoAbillityComponent*                     Abillity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BoscoAbillityIcon_C::Init(int32_t Index, class UBoscoAbillityComponent* Abillity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.Init");
		
		UHUD_BoscoAbillityIcon_C_Init_Params params {};
		params.Index = Index;
		params.Abillity = Abillity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_BoscoAbillityIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.PreConstruct");
		
		UHUD_BoscoAbillityIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.On Flare Production Finished
	 * 		Flags  -> ()
	 */
	void UHUD_BoscoAbillityIcon_C::OnFlareProductionFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.On Flare Production Finished");
		
		UHUD_BoscoAbillityIcon_C_OnFlareProductionFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.OnChargeUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            aCurrentCharges                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BoscoAbillityIcon_C::OnChargeUsed(int32_t aCurrentCharges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.OnChargeUsed");
		
		UHUD_BoscoAbillityIcon_C_OnChargeUsed_Params params {};
		params.aCurrentCharges = aCurrentCharges;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.ExecuteUbergraph_HUD_BoscoAbillityIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BoscoAbillityIcon_C::ExecuteUbergraph_HUD_BoscoAbillityIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.ExecuteUbergraph_HUD_BoscoAbillityIcon");
		
		UHUD_BoscoAbillityIcon_C_ExecuteUbergraph_HUD_BoscoAbillityIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_BoscoAbillityIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_BoscoAbillityIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C");
		return ptr;
	}

}


