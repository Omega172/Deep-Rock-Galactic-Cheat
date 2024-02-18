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
	 * 		Name   -> Function UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C.SetCharacterIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          characterID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          OutCharacterID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RewardUnlock_SkinUnlock_C::SetCharacterIcon(class UPlayerCharacterID* characterID, class UPlayerCharacterID** OutCharacterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C.SetCharacterIcon");
		
		UUI_RewardUnlock_SkinUnlock_C_SetCharacterIcon_Params params {};
		params.characterID = characterID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCharacterID != nullptr)
			*OutCharacterID = params.OutCharacterID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C.SelectCharacterID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          OptionalID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          OutputPin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RewardUnlock_SkinUnlock_C::SelectCharacterID(class UPlayerCharacterID* OptionalID, class UPlayerCharacterID** OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C.SelectCharacterID");
		
		UUI_RewardUnlock_SkinUnlock_C_SelectCharacterID_Params params {};
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
	 * 		Name   -> Function UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C.GetUnlockDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OutTitle                                                   (Parm, OutParm)
	 * 		class FText                                        OutSubTitle                                                (Parm, OutParm)
	 * 		class UTexture*                                    Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RewardUnlock_SkinUnlock_C::GetUnlockDetails(class FText* OutTitle, class FText* OutSubTitle, class UTexture** Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C.GetUnlockDetails");
		
		UUI_RewardUnlock_SkinUnlock_C_GetUnlockDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTitle != nullptr)
			*OutTitle = params.OutTitle;
		if (OutSubTitle != nullptr)
			*OutSubTitle = params.OutSubTitle;
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RewardUnlock_SkinUnlock_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C.PreConstruct");
		
		UUI_RewardUnlock_SkinUnlock_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C.PlayReceiveAnim
	 * 		Flags  -> ()
	 */
	void UUI_RewardUnlock_SkinUnlock_C::PlayReceiveAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C.PlayReceiveAnim");
		
		UUI_RewardUnlock_SkinUnlock_C_PlayReceiveAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_RewardUnlock_SkinUnlock_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C.Construct");
		
		UUI_RewardUnlock_SkinUnlock_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C.ExecuteUbergraph_UI_RewardUnlock_SkinUnlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RewardUnlock_SkinUnlock_C::ExecuteUbergraph_UI_RewardUnlock_SkinUnlock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C.ExecuteUbergraph_UI_RewardUnlock_SkinUnlock");
		
		UUI_RewardUnlock_SkinUnlock_C_ExecuteUbergraph_UI_RewardUnlock_SkinUnlock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RewardUnlock_SkinUnlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RewardUnlock_SkinUnlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C");
		return ptr;
	}

}


