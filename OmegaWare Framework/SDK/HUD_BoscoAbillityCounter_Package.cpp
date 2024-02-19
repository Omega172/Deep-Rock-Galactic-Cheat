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
	 * 		Name   -> Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.CreateIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IconCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BoscoAbillityCounter_C::CreateIcons(int32_t IconCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.CreateIcons");
		
		UHUD_BoscoAbillityCounter_C_CreateIcons_Params params {};
		params.IconCount = IconCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_BoscoAbillityCounter_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.PreConstruct");
		
		UHUD_BoscoAbillityCounter_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_BoscoAbillityCounter_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.Construct");
		
		UHUD_BoscoAbillityCounter_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnItemsLoaded
	 * 		Flags  -> ()
	 */
	void UHUD_BoscoAbillityCounter_C::OnItemsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnItemsLoaded");
		
		UHUD_BoscoAbillityCounter_C_OnItemsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnAbillityChargeProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              aProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            aNextIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BoscoAbillityCounter_C::OnAbillityChargeProgress(float aProgress, int32_t aNextIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnAbillityChargeProgress");
		
		UHUD_BoscoAbillityCounter_C_OnAbillityChargeProgress_Params params {};
		params.aProgress = aProgress;
		params.aNextIndex = aNextIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnBoscoChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABosco*                                      Bosco                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BoscoAbillityCounter_C::OnBoscoChanged(class ABosco* Bosco)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnBoscoChanged");
		
		UHUD_BoscoAbillityCounter_C_OnBoscoChanged_Params params {};
		params.Bosco = Bosco;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnAbilityDataUpdated_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBoscoAbillityComponent*                     ability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BoscoAbillityCounter_C::OnAbilityDataUpdated_Event_1(class UBoscoAbillityComponent* ability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnAbilityDataUpdated_Event_1");
		
		UHUD_BoscoAbillityCounter_C_OnAbilityDataUpdated_Event_1_Params params {};
		params.ability = ability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.ExecuteUbergraph_HUD_BoscoAbillityCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BoscoAbillityCounter_C::ExecuteUbergraph_HUD_BoscoAbillityCounter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.ExecuteUbergraph_HUD_BoscoAbillityCounter");
		
		UHUD_BoscoAbillityCounter_C_ExecuteUbergraph_HUD_BoscoAbillityCounter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_BoscoAbillityCounter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_BoscoAbillityCounter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C");
		return ptr;
	}

}


