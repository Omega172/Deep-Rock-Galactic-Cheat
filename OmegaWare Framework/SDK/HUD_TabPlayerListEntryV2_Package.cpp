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
	 * 		Name   -> Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.UpdatePlayerClass
	 * 		Flags  -> ()
	 */
	void UHUD_TabPlayerListEntryV2_C::UpdatePlayerClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.UpdatePlayerClass");
		
		UHUD_TabPlayerListEntryV2_C_UpdatePlayerClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.UpdateVolatileStats
	 * 		Flags  -> ()
	 */
	void UHUD_TabPlayerListEntryV2_C::UpdateVolatileStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.UpdateVolatileStats");
		
		UHUD_TabPlayerListEntryV2_C_UpdateVolatileStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Set Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TabPlayerListEntryV2_C::SetData(class AFSDPlayerState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Set Data");
		
		UHUD_TabPlayerListEntryV2_C_SetData_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TabPlayerListEntryV2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Tick");
		
		UHUD_TabPlayerListEntryV2_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_TabPlayerListEntryV2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.PreConstruct");
		
		UHUD_TabPlayerListEntryV2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ShowInfoBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_TabPlayerListEntryV2_C::ShowInfoBar(bool shouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ShowInfoBar");
		
		UHUD_TabPlayerListEntryV2_C_ShowInfoBar_Params params {};
		params.shouldShow = shouldShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.CharacterChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TabPlayerListEntryV2_C::CharacterChanged(class APlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.CharacterChanged");
		
		UHUD_TabPlayerListEntryV2_C_CharacterChanged_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ExecuteUbergraph_HUD_TabPlayerListEntryV2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TabPlayerListEntryV2_C::ExecuteUbergraph_HUD_TabPlayerListEntryV2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ExecuteUbergraph_HUD_TabPlayerListEntryV2");
		
		UHUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_TabPlayerListEntryV2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_TabPlayerListEntryV2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C");
		return ptr;
	}

}


