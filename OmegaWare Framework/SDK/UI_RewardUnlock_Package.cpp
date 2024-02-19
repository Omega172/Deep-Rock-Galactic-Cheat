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
	 * 		Name   -> Function UI_RewardUnlock.UI_RewardUnlock_C.SelectCharacterID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          OptionalID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          OutputPin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RewardUnlock_C::SelectCharacterID(class UPlayerCharacterID* OptionalID, class UPlayerCharacterID** OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock.UI_RewardUnlock_C.SelectCharacterID");
		
		UUI_RewardUnlock_C_SelectCharacterID_Params params {};
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
	 * 		Name   -> Function UI_RewardUnlock.UI_RewardUnlock_C.GetUnlockDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHidden                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        OutTitle                                                   (Parm, OutParm)
	 * 		class UTexture*                                    Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                IconTint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  BigImage                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RewardUnlock_C::GetUnlockDetails(bool* IsHidden, class FText* OutTitle, class UTexture** Icon, struct FLinearColor* IconTint, class UTexture2D** BigImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock.UI_RewardUnlock_C.GetUnlockDetails");
		
		UUI_RewardUnlock_C_GetUnlockDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsHidden != nullptr)
			*IsHidden = params.IsHidden;
		if (OutTitle != nullptr)
			*OutTitle = params.OutTitle;
		if (Icon != nullptr)
			*Icon = params.Icon;
		if (IconTint != nullptr)
			*IconTint = params.IconTint;
		if (BigImage != nullptr)
			*BigImage = params.BigImage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardUnlock.UI_RewardUnlock_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RewardUnlock_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock.UI_RewardUnlock_C.PreConstruct");
		
		UUI_RewardUnlock_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardUnlock.UI_RewardUnlock_C.PlayReceiveAnim
	 * 		Flags  -> ()
	 */
	void UUI_RewardUnlock_C::PlayReceiveAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock.UI_RewardUnlock_C.PlayReceiveAnim");
		
		UUI_RewardUnlock_C_PlayReceiveAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardUnlock.UI_RewardUnlock_C.ExecuteUbergraph_UI_RewardUnlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RewardUnlock_C::ExecuteUbergraph_UI_RewardUnlock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock.UI_RewardUnlock_C.ExecuteUbergraph_UI_RewardUnlock");
		
		UUI_RewardUnlock_C_ExecuteUbergraph_UI_RewardUnlock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RewardUnlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RewardUnlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RewardUnlock.UI_RewardUnlock_C");
		return ptr;
	}

}


