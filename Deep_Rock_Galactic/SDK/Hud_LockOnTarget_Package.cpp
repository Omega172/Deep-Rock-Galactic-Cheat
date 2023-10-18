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
	 * 		Name   -> Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnTargetDistanceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_LockOnTarget_C::OnTargetDistanceChanged(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnTargetDistanceChanged");
		
		UHud_LockOnTarget_C_OnTargetDistanceChanged_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnInViewChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inView                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_LockOnTarget_C::OnInViewChanged(bool inView, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnInViewChanged");
		
		UHud_LockOnTarget_C_OnInViewChanged_Params params {};
		params.inView = inView;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_LockOnTarget.Hud_LockOnTarget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_LockOnTarget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_LockOnTarget.Hud_LockOnTarget_C.PreConstruct");
		
		UHud_LockOnTarget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_LockOnTarget.Hud_LockOnTarget_C.UpdateArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inView                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_LockOnTarget_C::UpdateArrow(bool inView, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_LockOnTarget.Hud_LockOnTarget_C.UpdateArrow");
		
		UHud_LockOnTarget_C_UpdateArrow_Params params {};
		params.inView = inView;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnLockOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            numberOfLockOnsOnThisTarget                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            totalNumberOfLockOns                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_LockOnTarget_C::OnLockOn(int32_t numberOfLockOnsOnThisTarget, int32_t totalNumberOfLockOns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnLockOn");
		
		UHud_LockOnTarget_C_OnLockOn_Params params {};
		params.numberOfLockOnsOnThisTarget = numberOfLockOnsOnThisTarget;
		params.totalNumberOfLockOns = totalNumberOfLockOns;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnFireComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            numberOfLockOnsOnThisTarget                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_LockOnTarget_C::OnFireComplete(int32_t numberOfLockOnsOnThisTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnFireComplete");
		
		UHud_LockOnTarget_C_OnFireComplete_Params params {};
		params.numberOfLockOnsOnThisTarget = numberOfLockOnsOnThisTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_LockOnTarget.Hud_LockOnTarget_C.UpdateCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_LockOnTarget_C::UpdateCount(int32_t NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_LockOnTarget.Hud_LockOnTarget_C.UpdateCount");
		
		UHud_LockOnTarget_C_UpdateCount_Params params {};
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnShow
	 * 		Flags  -> ()
	 */
	void UHud_LockOnTarget_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnShow");
		
		UHud_LockOnTarget_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_LockOnTarget.Hud_LockOnTarget_C.CleanUpWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               showFade                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_LockOnTarget_C::CleanUpWidget(bool showFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_LockOnTarget.Hud_LockOnTarget_C.CleanUpWidget");
		
		UHud_LockOnTarget_C_CleanUpWidget_Params params {};
		params.showFade = showFade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_LockOnTarget.Hud_LockOnTarget_C.Construct
	 * 		Flags  -> ()
	 */
	void UHud_LockOnTarget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_LockOnTarget.Hud_LockOnTarget_C.Construct");
		
		UHud_LockOnTarget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_LockOnTarget.Hud_LockOnTarget_C.OutroFinished
	 * 		Flags  -> ()
	 */
	void UHud_LockOnTarget_C::OutroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_LockOnTarget.Hud_LockOnTarget_C.OutroFinished");
		
		UHud_LockOnTarget_C_OutroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_LockOnTarget.Hud_LockOnTarget_C.ExecuteUbergraph_Hud_LockOnTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_LockOnTarget_C::ExecuteUbergraph_Hud_LockOnTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_LockOnTarget.Hud_LockOnTarget_C.ExecuteUbergraph_Hud_LockOnTarget");
		
		UHud_LockOnTarget_C_ExecuteUbergraph_Hud_LockOnTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHud_LockOnTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_LockOnTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_LockOnTarget.Hud_LockOnTarget_C");
		return ptr;
	}

}


