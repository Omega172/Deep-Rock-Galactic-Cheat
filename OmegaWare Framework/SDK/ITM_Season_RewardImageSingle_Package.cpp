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
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_2
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_2");
		
		UITM_Season_RewardImageSingle_C_SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_1
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_1");
		
		UITM_Season_RewardImageSingle_C_SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetupMaterial
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::SetupMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetupMaterial");
		
		UITM_Season_RewardImageSingle_C_SetupMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.Set Skin Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemSkin*                                   InSkin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          InMaterial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_SkinWidgetTypes                               InBucketIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Season_RewardImageSingle_C::SetSkinIcon(class UItemSkin* InSkin, class UMaterialInterface* InMaterial, ENUM_SkinWidgetTypes InBucketIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.Set Skin Icon");
		
		UITM_Season_RewardImageSingle_C_SetSkinIcon_Params params {};
		params.InSkin = InSkin;
		params.InMaterial = InMaterial;
		params.InBucketIcon = InBucketIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.GetPickaxe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          characterID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemID*                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Season_RewardImageSingle_C::GetPickaxe(class UPlayerCharacterID* characterID, class UItemID** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.GetPickaxe");
		
		UITM_Season_RewardImageSingle_C_GetPickaxe_Params params {};
		params.characterID = characterID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.Get_Image_Main_ToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_Season_RewardImageSingle_C::Get_Image_Main_ToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.Get_Image_Main_ToolTipWidget");
		
		UITM_Season_RewardImageSingle_C_Get_Image_Main_ToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.AnimTick
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::AnimTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.AnimTick");
		
		UITM_Season_RewardImageSingle_C_AnimTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Season_RewardImageSingle_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.PreConstruct");
		
		UITM_Season_RewardImageSingle_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UReward*                                     Reward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowToolTip                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PlayRewardGained                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoHoverAnim                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowClaimedEffects                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESeasonVisibilityState                             inNodeState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_MenuColors                                    BoughtColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Season_RewardImageSingle_C::SetData(class UReward* Reward, bool ShowToolTip, bool PlayRewardGained, bool DoHoverAnim, bool ShowClaimedEffects, ESeasonVisibilityState inNodeState, ENUM_MenuColors BoughtColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetData");
		
		UITM_Season_RewardImageSingle_C_SetData_Params params {};
		params.Reward = Reward;
		params.ShowToolTip = ShowToolTip;
		params.PlayRewardGained = PlayRewardGained;
		params.DoHoverAnim = DoHoverAnim;
		params.ShowClaimedEffects = ShowClaimedEffects;
		params.inNodeState = inNodeState;
		params.BoughtColor = BoughtColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.ImageReadyTick
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::ImageReadyTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.ImageReadyTick");
		
		UITM_Season_RewardImageSingle_C_ImageReadyTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetDataFromDynMat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    DynMat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UReward*                                     Reward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowToolTip                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Season_RewardImageSingle_C::SetDataFromDynMat(class UMaterialInstanceDynamic* DynMat, class UReward* Reward, bool ShowToolTip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetDataFromDynMat");
		
		UITM_Season_RewardImageSingle_C_SetDataFromDynMat_Params params {};
		params.DynMat = DynMat;
		params.Reward = Reward;
		params.ShowToolTip = ShowToolTip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnRewardGainFinished
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::OnRewardGainFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnRewardGainFinished");
		
		UITM_Season_RewardImageSingle_C_OnRewardGainFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Season_RewardImageSingle_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Season_RewardImageSingle_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetTextureReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      OptionalTexture                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Season_RewardImageSingle_C::SetTextureReady(class UTextureRenderTarget2D* OptionalTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetTextureReady");
		
		UITM_Season_RewardImageSingle_C_SetTextureReady_Params params {};
		params.OptionalTexture = OptionalTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnImageReady
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::OnImageReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnImageReady");
		
		UITM_Season_RewardImageSingle_C_OnImageReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.AnimHoverFinished
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::AnimHoverFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.AnimHoverFinished");
		
		UITM_Season_RewardImageSingle_C_AnimHoverFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Season_RewardImageSingle_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetDoHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDoHover                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Season_RewardImageSingle_C::SetDoHover(bool InDoHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetDoHover");
		
		UITM_Season_RewardImageSingle_C_SetDoHover_Params params {};
		params.InDoHover = InDoHover;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetVanityIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVanityItem*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Season_RewardImageSingle_C::SetVanityIcon(class UVanityItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetVanityIcon");
		
		UITM_Season_RewardImageSingle_C_SetVanityIcon_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.ChangeSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Season_RewardImageSingle_C::ChangeSize(const struct FVector2D& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.ChangeSize");
		
		UITM_Season_RewardImageSingle_C_ChangeSize_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetActiveLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESeasonVisibilityState                             IsActiveLook                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Season_RewardImageSingle_C::SetActiveLook(ESeasonVisibilityState IsActiveLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetActiveLook");
		
		UITM_Season_RewardImageSingle_C_SetActiveLook_Params params {};
		params.IsActiveLook = IsActiveLook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetSkin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemSkin*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Season_RewardImageSingle_C::SetSkin(class UItemSkin* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetSkin");
		
		UITM_Season_RewardImageSingle_C_SetSkin_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.UpdateWidgetColor
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::UpdateWidgetColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.UpdateWidgetColor");
		
		UITM_Season_RewardImageSingle_C_UpdateWidgetColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.ExecuteUbergraph_ITM_Season_RewardImageSingle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Season_RewardImageSingle_C::ExecuteUbergraph_ITM_Season_RewardImageSingle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.ExecuteUbergraph_ITM_Season_RewardImageSingle");
		
		UITM_Season_RewardImageSingle_C_ExecuteUbergraph_ITM_Season_RewardImageSingle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnClicked__DelegateSignature");
		
		UITM_Season_RewardImageSingle_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnUnhovered__DelegateSignature");
		
		UITM_Season_RewardImageSingle_C_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnHovered__DelegateSignature");
		
		UITM_Season_RewardImageSingle_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.ImageIsReady__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::ImageIsReady__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.ImageIsReady__DelegateSignature");
		
		UITM_Season_RewardImageSingle_C_ImageIsReady__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.RewardGainFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Season_RewardImageSingle_C::RewardGainFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.RewardGainFinished__DelegateSignature");
		
		UITM_Season_RewardImageSingle_C_RewardGainFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Season_RewardImageSingle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Season_RewardImageSingle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C");
		return ptr;
	}

}


