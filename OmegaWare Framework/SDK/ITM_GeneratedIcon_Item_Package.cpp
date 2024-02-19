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
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.GetIconToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_GeneratedIcon_Item_C::GetIconToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.GetIconToolTip");
		
		UITM_GeneratedIcon_Item_C_GetIconToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowBackground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InBackgroundVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_GeneratedIcon_Item_C::SetShowBackground(bool InBackgroundVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowBackground");
		
		UITM_GeneratedIcon_Item_C_SetShowBackground_Params params {};
		params.InBackgroundVisible = InBackgroundVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_GeneratedIcon_Item_C::SetRenderTarget(class UTextureRenderTarget2D* InTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetRenderTarget");
		
		UITM_GeneratedIcon_Item_C_SetRenderTarget_Params params {};
		params.InTexture = InTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ReleaseRenderTarget
	 * 		Flags  -> ()
	 */
	void UITM_GeneratedIcon_Item_C::ReleaseRenderTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ReleaseRenderTarget");
		
		UITM_GeneratedIcon_Item_C_ReleaseRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowBorders
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InBorderVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_GeneratedIcon_Item_C::SetShowBorders(bool InBorderVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowBorders");
		
		UITM_GeneratedIcon_Item_C_SetShowBorders_Params params {};
		params.InBorderVisible = InBorderVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetIconSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_GeneratedIcon_Item_C::SetIconSize(int32_t InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetIconSize");
		
		UITM_GeneratedIcon_Item_C_SetIconSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowPadlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_GeneratedIcon_Item_C::SetShowPadlock(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowPadlock");
		
		UITM_GeneratedIcon_Item_C_SetShowPadlock_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetBorderColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_GeneratedIcon_Item_C::SetBorderColor(ENUM_MenuColors InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetBorderColor");
		
		UITM_GeneratedIcon_Item_C_SetBorderColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_GeneratedIcon_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.PreConstruct");
		
		UITM_GeneratedIcon_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVanityItem*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_GeneratedIcon_Item_C::ShowAsItem(class UVanityItem* Item, class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsItem");
		
		UITM_GeneratedIcon_Item_C_ShowAsItem_Params params {};
		params.Item = Item;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsPickAxePart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPickaxePart*                                part                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPickaxePartLocation                               PickaxePartLocation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_GeneratedIcon_Item_C::ShowAsPickAxePart(class UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsPickAxePart");
		
		UITM_GeneratedIcon_Item_C_ShowAsPickAxePart_Params params {};
		params.part = part;
		params.PickaxePartLocation = PickaxePartLocation;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Tint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_GeneratedIcon_Item_C::ShowAsTexture(class UTexture2D* Texture, const struct FLinearColor& Tint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsTexture");
		
		UITM_GeneratedIcon_Item_C_ShowAsTexture_Params params {};
		params.Texture = Texture;
		params.Tint = Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Tint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_GeneratedIcon_Item_C::ShowAsMaterial(class UMaterialInterface* Material, const struct FLinearColor& Tint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsMaterial");
		
		UITM_GeneratedIcon_Item_C_ShowAsMaterial_Params params {};
		params.Material = Material;
		params.Tint = Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.HideIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     AndSwitchTo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_GeneratedIcon_Item_C::HideIcon(class UWidget* AndSwitchTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.HideIcon");
		
		UITM_GeneratedIcon_Item_C_HideIcon_Params params {};
		params.AndSwitchTo = AndSwitchTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsSoftMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Tint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_GeneratedIcon_Item_C::ShowAsSoftMaterial(const struct FLinearColor& Tint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsSoftMaterial");
		
		UITM_GeneratedIcon_Item_C_ShowAsSoftMaterial_Params params {};
		params.Tint = Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ForceIconOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StartDelay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Opacity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_GeneratedIcon_Item_C::ForceIconOpacity(float StartDelay, float Opacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ForceIconOpacity");
		
		UITM_GeneratedIcon_Item_C_ForceIconOpacity_Params params {};
		params.StartDelay = StartDelay;
		params.Opacity = Opacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsSkin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemSkin*                                   Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_GeneratedIcon_Item_C::ShowAsSkin(class UItemSkin* Skin, class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsSkin");
		
		UITM_GeneratedIcon_Item_C_ShowAsSkin_Params params {};
		params.Skin = Skin;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ExecuteUbergraph_ITM_GeneratedIcon_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_GeneratedIcon_Item_C::ExecuteUbergraph_ITM_GeneratedIcon_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ExecuteUbergraph_ITM_GeneratedIcon_Item");
		
		UITM_GeneratedIcon_Item_C_ExecuteUbergraph_ITM_GeneratedIcon_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_GeneratedIcon_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_GeneratedIcon_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C");
		return ptr;
	}

}


