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
	 * 		Name   -> Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.SelectCharacterID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          OptionalID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          OutputPin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RewardUnlock_PerformancePoints_C::SelectCharacterID(class UPlayerCharacterID* OptionalID, class UPlayerCharacterID** OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.SelectCharacterID");
		
		UUI_RewardUnlock_PerformancePoints_C_SelectCharacterID_Params params {};
		params.OptionalID = OptionalID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.GetUnlockDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UUI_RewardUnlock_PerformancePoints_C::GetUnlockDetails(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.GetUnlockDetails");
		
		UUI_RewardUnlock_PerformancePoints_C_GetUnlockDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RewardUnlock_PerformancePoints_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.PreConstruct");
		
		UUI_RewardUnlock_PerformancePoints_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.PlayReceiveAnim
	 * 		Flags  -> ()
	 */
	void UUI_RewardUnlock_PerformancePoints_C::PlayReceiveAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.PlayReceiveAnim");
		
		UUI_RewardUnlock_PerformancePoints_C_PlayReceiveAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_RewardUnlock_PerformancePoints_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.Construct");
		
		UUI_RewardUnlock_PerformancePoints_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.OnLevelReached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RewardUnlock_PerformancePoints_C::OnLevelReached(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.OnLevelReached");
		
		UUI_RewardUnlock_PerformancePoints_C_OnLevelReached_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.ExecuteUbergraph_UI_RewardUnlock_PerformancePoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RewardUnlock_PerformancePoints_C::ExecuteUbergraph_UI_RewardUnlock_PerformancePoints(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.ExecuteUbergraph_UI_RewardUnlock_PerformancePoints");
		
		UUI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RewardUnlock_PerformancePoints_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RewardUnlock_PerformancePoints_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C");
		return ptr;
	}

}


