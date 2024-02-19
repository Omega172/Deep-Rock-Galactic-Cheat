#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_2
	 */
	struct UITM_Season_RewardImageSingle_C_SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_2_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_1
	 */
	struct UITM_Season_RewardImageSingle_C_SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_1_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetupMaterial
	 */
	struct UITM_Season_RewardImageSingle_C_SetupMaterial_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.Set Skin Icon
	 */
	struct UITM_Season_RewardImageSingle_C_SetSkinIcon_Params
	{
	public:
		class UItemSkin*                                           InSkin;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInterface*                                  InMaterial;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_SkinWidgetTypes                                       InBucketIcon;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.GetPickaxe
	 */
	struct UITM_Season_RewardImageSingle_C_GetPickaxe_Params
	{
	public:
		class UPlayerCharacterID*                                  characterID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItemID*                                             Output;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.Get_Image_Main_ToolTipWidget
	 */
	struct UITM_Season_RewardImageSingle_C_Get_Image_Main_ToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.AnimTick
	 */
	struct UITM_Season_RewardImageSingle_C_AnimTick_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.PreConstruct
	 */
	struct UITM_Season_RewardImageSingle_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetData
	 */
	struct UITM_Season_RewardImageSingle_C_SetData_Params
	{
	public:
		class UReward*                                             Reward;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowToolTip;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PlayRewardGained;                                        // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoHoverAnim;                                             // 0x000A(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowClaimedEffects;                                      // 0x000B(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESeasonVisibilityState                                     inNodeState;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_MenuColors                                            BoughtColor;                                             // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.ImageReadyTick
	 */
	struct UITM_Season_RewardImageSingle_C_ImageReadyTick_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetDataFromDynMat
	 */
	struct UITM_Season_RewardImageSingle_C_SetDataFromDynMat_Params
	{
	public:
		class UMaterialInstanceDynamic*                            DynMat;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UReward*                                             Reward;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowToolTip;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnRewardGainFinished
	 */
	struct UITM_Season_RewardImageSingle_C_OnRewardGainFinished_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Season_RewardImageSingle_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Season_RewardImageSingle_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetTextureReady
	 */
	struct UITM_Season_RewardImageSingle_C_SetTextureReady_Params
	{
	public:
		class UTextureRenderTarget2D*                              OptionalTexture;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnImageReady
	 */
	struct UITM_Season_RewardImageSingle_C_OnImageReady_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.AnimHoverFinished
	 */
	struct UITM_Season_RewardImageSingle_C_AnimHoverFinished_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Season_RewardImageSingle_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetDoHover
	 */
	struct UITM_Season_RewardImageSingle_C_SetDoHover_Params
	{
	public:
		bool                                                       InDoHover;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetVanityIcon
	 */
	struct UITM_Season_RewardImageSingle_C_SetVanityIcon_Params
	{
	public:
		class UVanityItem*                                         Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.ChangeSize
	 */
	struct UITM_Season_RewardImageSingle_C_ChangeSize_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetActiveLook
	 */
	struct UITM_Season_RewardImageSingle_C_SetActiveLook_Params
	{
	public:
		ESeasonVisibilityState                                     IsActiveLook;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.SetSkin
	 */
	struct UITM_Season_RewardImageSingle_C_SetSkin_Params
	{
	public:
		class UItemSkin*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.UpdateWidgetColor
	 */
	struct UITM_Season_RewardImageSingle_C_UpdateWidgetColor_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.ExecuteUbergraph_ITM_Season_RewardImageSingle
	 */
	struct UITM_Season_RewardImageSingle_C_ExecuteUbergraph_ITM_Season_RewardImageSingle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnClicked__DelegateSignature
	 */
	struct UITM_Season_RewardImageSingle_C_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnUnhovered__DelegateSignature
	 */
	struct UITM_Season_RewardImageSingle_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.OnHovered__DelegateSignature
	 */
	struct UITM_Season_RewardImageSingle_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.ImageIsReady__DelegateSignature
	 */
	struct UITM_Season_RewardImageSingle_C_ImageIsReady__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C.RewardGainFinished__DelegateSignature
	 */
	struct UITM_Season_RewardImageSingle_C_RewardGainFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
