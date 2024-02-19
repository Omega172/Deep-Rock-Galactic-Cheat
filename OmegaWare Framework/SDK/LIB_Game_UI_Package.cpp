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
	 * 		Name   -> Function LIB_Game_UI.LIB_Game_UI_C.GetSkinText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemSkin*                                   InSkin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemID*                                     InOptionalItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          InOptionalCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Title                                                      (Parm, OutParm)
	 * 		class FText                                        Category                                                   (Parm, OutParm)
	 * 		class FText                                        Description                                                (Parm, OutParm)
	 * 		bool                                               HasOptionalCharacterID                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPlayerCharacterID*                          characterID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Game_UI_C::GetSkinText(class UItemSkin* InSkin, class UItemID* InOptionalItem, class UPlayerCharacterID* InOptionalCharacter, class UObject* __WorldContext, class FText* Title, class FText* Category, class FText* Description, bool* HasOptionalCharacterID, class UPlayerCharacterID** characterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetSkinText");
		
		ULIB_Game_UI_C_GetSkinText_Params params {};
		params.InSkin = InSkin;
		params.InOptionalItem = InOptionalItem;
		params.InOptionalCharacter = InOptionalCharacter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Title != nullptr)
			*Title = params.Title;
		if (Category != nullptr)
			*Category = params.Category;
		if (Description != nullptr)
			*Description = params.Description;
		if (HasOptionalCharacterID != nullptr)
			*HasOptionalCharacterID = params.HasOptionalCharacterID;
		if (characterID != nullptr)
			*characterID = params.characterID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Game_UI.LIB_Game_UI_C.GetRewardIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UReward*                                     Reward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture*                                    Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Game_UI_C::GetRewardIcon(class UReward* Reward, class UObject* __WorldContext, class UTexture** Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetRewardIcon");
		
		ULIB_Game_UI_C_GetRewardIcon_Params params {};
		params.Reward = Reward;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Game_UI.LIB_Game_UI_C.GetRewardText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UReward*                                     Reward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Title                                                      (Parm, OutParm)
	 * 		class FText                                        Category                                                   (Parm, OutParm)
	 * 		class FText                                        Description                                                (Parm, OutParm)
	 * 		bool                                               HasOptionalCharacterID                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPlayerCharacterID*                          characterID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Game_UI_C::GetRewardText(class UReward* Reward, class UObject* __WorldContext, class FText* Title, class FText* Category, class FText* Description, bool* HasOptionalCharacterID, class UPlayerCharacterID** characterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetRewardText");
		
		ULIB_Game_UI_C_GetRewardText_Params params {};
		params.Reward = Reward;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Title != nullptr)
			*Title = params.Title;
		if (Category != nullptr)
			*Category = params.Category;
		if (Description != nullptr)
			*Description = params.Description;
		if (HasOptionalCharacterID != nullptr)
			*HasOptionalCharacterID = params.HasOptionalCharacterID;
		if (characterID != nullptr)
			*characterID = params.characterID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyFamilyName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEnemyFamily                                       Family                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 */
	void ULIB_Game_UI_C::GetEnemyFamilyName(EEnemyFamily Family, class UObject* __WorldContext, class FText* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyFamilyName");
		
		ULIB_Game_UI_C_GetEnemyFamilyName_Params params {};
		params.Family = Family;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Game_UI.LIB_Game_UI_C.GetArmorTypeInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EArmorType                                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DisplayText                                                (Parm, OutParm)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Game_UI_C::GetArmorTypeInfo(EArmorType Type, class UObject* __WorldContext, class FText* DisplayText, class UTexture2D** Icon, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetArmorTypeInfo");
		
		ULIB_Game_UI_C_GetArmorTypeInfo_Params params {};
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayText != nullptr)
			*DisplayText = params.DisplayText;
		if (Icon != nullptr)
			*Icon = params.Icon;
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyTypeInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEnemyType                                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DisplayText                                                (Parm, OutParm)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                IconColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Game_UI_C::GetEnemyTypeInfo(EEnemyType Type, class UObject* __WorldContext, class FText* DisplayText, class UTexture2D** Icon, struct FLinearColor* IconColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyTypeInfo");
		
		ULIB_Game_UI_C_GetEnemyTypeInfo_Params params {};
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayText != nullptr)
			*DisplayText = params.DisplayText;
		if (Icon != nullptr)
			*Icon = params.Icon;
		if (IconColor != nullptr)
			*IconColor = params.IconColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyFamilyInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEnemyFamily                                       Family                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Game_UI_C::GetEnemyFamilyInfo(EEnemyFamily Family, class UObject* __WorldContext, class FText* Name, class UTexture2D** Icon, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyFamilyInfo");
		
		ULIB_Game_UI_C_GetEnemyFamilyInfo_Params params {};
		params.Family = Family;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		if (Icon != nullptr)
			*Icon = params.Icon;
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Game_UI.LIB_Game_UI_C.GetPickaxePartLocationTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPickaxePartLocation                               InPartLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UpperCase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LongName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutTitle                                                   (Parm, OutParm)
	 */
	void ULIB_Game_UI_C::GetPickaxePartLocationTitle(EPickaxePartLocation InPartLocation, bool UpperCase, bool LongName, class UObject* __WorldContext, class FText* OutTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetPickaxePartLocationTitle");
		
		ULIB_Game_UI_C_GetPickaxePartLocationTitle_Params params {};
		params.InPartLocation = InPartLocation;
		params.UpperCase = UpperCase;
		params.LongName = LongName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTitle != nullptr)
			*OutTitle = params.OutTitle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Game_UI.LIB_Game_UI_C.GetVanitySlotTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVanitySlot                                        InVanitySlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UpperCase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutTitle                                                   (Parm, OutParm)
	 */
	void ULIB_Game_UI_C::GetVanitySlotTitle(EVanitySlot InVanitySlot, bool UpperCase, class UObject* __WorldContext, class FText* OutTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetVanitySlotTitle");
		
		ULIB_Game_UI_C_GetVanitySlotTitle_Params params {};
		params.InVanitySlot = InVanitySlot;
		params.UpperCase = UpperCase;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTitle != nullptr)
			*OutTitle = params.OutTitle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULIB_Game_UI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULIB_Game_UI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LIB_Game_UI.LIB_Game_UI_C");
		return ptr;
	}

}


