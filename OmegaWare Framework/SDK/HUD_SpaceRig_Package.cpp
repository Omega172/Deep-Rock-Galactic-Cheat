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
	 * 		Name   -> Function HUD_SpaceRig.HUD_SpaceRig_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_SpaceRig_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig.HUD_SpaceRig_C.Construct");
		
		UHUD_SpaceRig_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SpaceRig.HUD_SpaceRig_C.OnCountdownCompleted_Event_1
	 * 		Flags  -> ()
	 */
	void UHUD_SpaceRig_C::OnCountdownCompleted_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig.HUD_SpaceRig_C.OnCountdownCompleted_Event_1");
		
		UHUD_SpaceRig_C_OnCountdownCompleted_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SpaceRig.HUD_SpaceRig_C.OnCameraModeChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterCameraMode                               NewCameraMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterCameraMode                               OldCameraMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SpaceRig_C::OnCameraModeChanged_Event(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig.HUD_SpaceRig_C.OnCameraModeChanged_Event");
		
		UHUD_SpaceRig_C_OnCameraModeChanged_Event_Params params {};
		params.NewCameraMode = NewCameraMode;
		params.OldCameraMode = OldCameraMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SpaceRig.HUD_SpaceRig_C.OnTemporaryBuffChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTemporaryBuff*                              buff                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            AffectedPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SpaceRig_C::OnTemporaryBuffChanged(class UTemporaryBuff* buff, class APlayerCharacter* AffectedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig.HUD_SpaceRig_C.OnTemporaryBuffChanged");
		
		UHUD_SpaceRig_C_OnTemporaryBuffChanged_Params params {};
		params.buff = buff;
		params.AffectedPlayer = AffectedPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SpaceRig.HUD_SpaceRig_C.ExecuteUbergraph_HUD_SpaceRig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SpaceRig_C::ExecuteUbergraph_HUD_SpaceRig(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig.HUD_SpaceRig_C.ExecuteUbergraph_HUD_SpaceRig");
		
		UHUD_SpaceRig_C_ExecuteUbergraph_HUD_SpaceRig_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_SpaceRig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_SpaceRig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_SpaceRig.HUD_SpaceRig_C");
		return ptr;
	}

}


