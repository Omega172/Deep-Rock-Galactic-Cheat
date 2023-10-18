/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * 		Name   -> Function HUD_Main.HUD_Main_C.Get_TEMPtestSeedText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UHUD_Main_C::Get_TEMPtestSeedText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.Get_TEMPtestSeedText_Text_1");
		
		UHUD_Main_C_Get_TEMPtestSeedText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.ToggleHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_C::ToggleHUD(bool IsVisible, bool Instant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.ToggleHUD");
		
		UHUD_Main_C_ToggleHUD_Params params {};
		params.IsVisible = IsVisible;
		params.Instant = Instant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Main_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.Construct");
		
		UHUD_Main_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.Tick");
		
		UHUD_Main_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.Destruct
	 * 		Flags  -> ()
	 */
	void UHUD_Main_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.Destruct");
		
		UHUD_Main_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.AllDwarvesDown
	 * 		Flags  -> ()
	 */
	void UHUD_Main_C::AllDwarvesDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.AllDwarvesDown");
		
		UHUD_Main_C_AllDwarvesDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.OnCameraModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterCameraMode                               NewCameraMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterCameraMode                               OldCameraMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_C::OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.OnCameraModeChanged");
		
		UHUD_Main_C_OnCameraModeChanged_Params params {};
		params.NewCameraMode = NewCameraMode;
		params.OldCameraMode = OldCameraMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.UpdateCurrentCanvas
	 * 		Flags  -> ()
	 */
	void UHUD_Main_C::UpdateCurrentCanvas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.UpdateCurrentCanvas");
		
		UHUD_Main_C_UpdateCurrentCanvas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.OnCharacterStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterState                                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_C::OnCharacterStateChanged(ECharacterState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.OnCharacterStateChanged");
		
		UHUD_Main_C_OnCharacterStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.Setup HUD Elements
	 * 		Flags  -> ()
	 */
	void UHUD_Main_C::SetupHUDElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.Setup HUD Elements");
		
		UHUD_Main_C_SetupHUDElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.PushEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     eventWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_C::PushEvent(class UWidget* eventWidget, bool Left)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.PushEvent");
		
		UHUD_Main_C_PushEvent_Params params {};
		params.eventWidget = eventWidget;
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.PopEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     eventWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_C::PopEvent(class UWidget* eventWidget, bool Left)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.PopEvent");
		
		UHUD_Main_C_PopEvent_Params params {};
		params.eventWidget = eventWidget;
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.BndEvt__HUD_Main_VG_VersionNumber_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDVisibilityGroup*                         Group                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_C::BndEvt__HUD_Main_VG_VersionNumber_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.BndEvt__HUD_Main_VG_VersionNumber_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature");
		
		UHUD_Main_C_BndEvt__HUD_Main_VG_VersionNumber_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature_Params params {};
		params.Group = Group;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDVisibilityGroup*                         Group                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_C::BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature");
		
		UHUD_Main_C_BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature_Params params {};
		params.Group = Group;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDVisibilityGroup*                         Group                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_C::BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature");
		
		UHUD_Main_C_BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature_Params params {};
		params.Group = Group;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDVisibilityGroup*                         Group                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_C::BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature");
		
		UHUD_Main_C_BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature_Params params {};
		params.Group = Group;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.RefreshHUDElements
	 * 		Flags  -> ()
	 */
	void UHUD_Main_C::RefreshHUDElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.RefreshHUDElements");
		
		UHUD_Main_C_RefreshHUDElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main.HUD_Main_C.ExecuteUbergraph_HUD_Main
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_C::ExecuteUbergraph_HUD_Main(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.ExecuteUbergraph_HUD_Main");
		
		UHUD_Main_C_ExecuteUbergraph_HUD_Main_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Main_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Main_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Main.HUD_Main_C");
		return ptr;
	}

}


