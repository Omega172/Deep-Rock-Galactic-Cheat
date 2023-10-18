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
	 * 		Name   -> Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.SetIconColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_LaserPointerTrackingIcon_C::SetIconColor(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.SetIconColor");
		
		UHUD_LaserPointerTrackingIcon_C_SetIconColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdateVisibility
	 * 		Flags  -> ()
	 */
	void UHUD_LaserPointerTrackingIcon_C::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdateVisibility");
		
		UHUD_LaserPointerTrackingIcon_C_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdatePixelOffset
	 * 		Flags  -> ()
	 */
	void UHUD_LaserPointerTrackingIcon_C::UpdatePixelOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdatePixelOffset");
		
		UHUD_LaserPointerTrackingIcon_C_UpdatePixelOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnInViewChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inView                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_LaserPointerTrackingIcon_C::OnInViewChanged(bool inView, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnInViewChanged");
		
		UHUD_LaserPointerTrackingIcon_C_OnInViewChanged_Params params {};
		params.inView = inView;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_LaserPointerTrackingIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.PreConstruct");
		
		UHUD_LaserPointerTrackingIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdateArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inView                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_LaserPointerTrackingIcon_C::UpdateArrow(bool inView, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdateArrow");
		
		UHUD_LaserPointerTrackingIcon_C_UpdateArrow_Params params {};
		params.inView = inView;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnShow
	 * 		Flags  -> ()
	 */
	void UHUD_LaserPointerTrackingIcon_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnShow");
		
		UHUD_LaserPointerTrackingIcon_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnTargetDistanceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_LaserPointerTrackingIcon_C::OnTargetDistanceChanged(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnTargetDistanceChanged");
		
		UHUD_LaserPointerTrackingIcon_C_OnTargetDistanceChanged_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnTargetSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_LaserPointerTrackingIcon_C::OnTargetSet(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnTargetSet");
		
		UHUD_LaserPointerTrackingIcon_C_OnTargetSet_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.ExecuteUbergraph_HUD_LaserPointerTrackingIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_LaserPointerTrackingIcon_C::ExecuteUbergraph_HUD_LaserPointerTrackingIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.ExecuteUbergraph_HUD_LaserPointerTrackingIcon");
		
		UHUD_LaserPointerTrackingIcon_C_ExecuteUbergraph_HUD_LaserPointerTrackingIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_LaserPointerTrackingIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_LaserPointerTrackingIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C");
		return ptr;
	}

}


