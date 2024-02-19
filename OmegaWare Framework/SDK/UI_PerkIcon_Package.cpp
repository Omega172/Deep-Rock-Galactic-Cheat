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
	 * 		Name   -> Function UI_PerkIcon.UI_PerkIcon_C.SetPerkLevelVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PerkIcon_C::SetPerkLevelVisibility(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.SetPerkLevelVisibility");
		
		UUI_PerkIcon_C_SetPerkLevelVisibility_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkIcon.UI_PerkIcon_C.ShowPerkAs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  InPerk                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InIconColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InRank                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkIcon_C::ShowPerkAs(class UPerkAsset* InPerk, const struct FLinearColor& InIconColor, int32_t InRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.ShowPerkAs");
		
		UUI_PerkIcon_C_ShowPerkAs_Params params {};
		params.InPerk = InPerk;
		params.InIconColor = InIconColor;
		params.InRank = InRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkIcon.UI_PerkIcon_C.ShowPerkByRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  InPerk                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InRank                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkIcon_C::ShowPerkByRank(class UPerkAsset* InPerk, int32_t InRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.ShowPerkByRank");
		
		UUI_PerkIcon_C_ShowPerkByRank_Params params {};
		params.InPerk = InPerk;
		params.InRank = InRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkIcon.UI_PerkIcon_C.ShowAs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InIconTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InIconColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InRank                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkIcon_C::ShowAs(class UTexture2D* InIconTexture, const struct FLinearColor& InIconColor, int32_t InRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.ShowAs");
		
		UUI_PerkIcon_C_ShowAs_Params params {};
		params.InIconTexture = InIconTexture;
		params.InIconColor = InIconColor;
		params.InRank = InRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkIcon.UI_PerkIcon_C.SetDimensions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDiminsions                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkIcon_C::SetDimensions(float InDiminsions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.SetDimensions");
		
		UUI_PerkIcon_C_SetDimensions_Params params {};
		params.InDiminsions = InDiminsions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkIcon.UI_PerkIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PerkIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.PreConstruct");
		
		UUI_PerkIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset Last Claimed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkIcon_C::SetPerkAssetLastClaimed(class UPerkAsset* PerkAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset Last Claimed");
		
		UUI_PerkIcon_C_SetPerkAssetLastClaimed_Params params {};
		params.PerkAsset = PerkAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkIcon.UI_PerkIcon_C.ExecuteUbergraph_UI_PerkIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkIcon_C::ExecuteUbergraph_UI_PerkIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.ExecuteUbergraph_UI_PerkIcon");
		
		UUI_PerkIcon_C_ExecuteUbergraph_UI_PerkIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PerkIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PerkIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PerkIcon.UI_PerkIcon_C");
		return ptr;
	}

}


