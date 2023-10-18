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
	 * 		Name   -> Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InTint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ActorTrackingIcon_C::SetInfo(const class FText& InText, class UTexture2D* Texture, const struct FLinearColor& InTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.SetInfo");
		
		UHUD_ActorTrackingIcon_C_SetInfo_Params params {};
		params.InText = InText;
		params.Texture = Texture;
		params.InTint = InTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetDistanceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ActorTrackingIcon_C::OnTargetDistanceChanged(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetDistanceChanged");
		
		UHUD_ActorTrackingIcon_C_OnTargetDistanceChanged_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ActorTrackingIcon_C::OnTargetSet(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetSet");
		
		UHUD_ActorTrackingIcon_C_OnTargetSet_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnPlayerNameChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_ActorTrackingIcon_C::OnPlayerNameChanged(const class FString& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnPlayerNameChanged");
		
		UHUD_ActorTrackingIcon_C_OnPlayerNameChanged_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnInViewChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inView                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ActorTrackingIcon_C::OnInViewChanged(bool inView, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnInViewChanged");
		
		UHUD_ActorTrackingIcon_C_OnInViewChanged_Params params {};
		params.inView = inView;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_ActorTrackingIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.PreConstruct");
		
		UHUD_ActorTrackingIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.UpdateArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inView                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ActorTrackingIcon_C::UpdateArrow(bool inView, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.UpdateArrow");
		
		UHUD_ActorTrackingIcon_C_UpdateArrow_Params params {};
		params.inView = inView;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnShow
	 * 		Flags  -> ()
	 */
	void UHUD_ActorTrackingIcon_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnShow");
		
		UHUD_ActorTrackingIcon_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.ExecuteUbergraph_HUD_ActorTrackingIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ActorTrackingIcon_C::ExecuteUbergraph_HUD_ActorTrackingIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.ExecuteUbergraph_HUD_ActorTrackingIcon");
		
		UHUD_ActorTrackingIcon_C_ExecuteUbergraph_HUD_ActorTrackingIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_ActorTrackingIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_ActorTrackingIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C");
		return ptr;
	}

}


