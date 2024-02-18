#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.GetIconToolTip
	 */
	struct UITM_GeneratedIcon_Item_C_GetIconToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowBackground
	 */
	struct UITM_GeneratedIcon_Item_C_SetShowBackground_Params
	{
	public:
		bool                                                       InBackgroundVisible;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetRenderTarget
	 */
	struct UITM_GeneratedIcon_Item_C_SetRenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              InTexture;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ReleaseRenderTarget
	 */
	struct UITM_GeneratedIcon_Item_C_ReleaseRenderTarget_Params
	{	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowBorders
	 */
	struct UITM_GeneratedIcon_Item_C_SetShowBorders_Params
	{
	public:
		bool                                                       InBorderVisible;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetIconSize
	 */
	struct UITM_GeneratedIcon_Item_C_SetIconSize_Params
	{
	public:
		int32_t                                                    InSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowPadlock
	 */
	struct UITM_GeneratedIcon_Item_C_SetShowPadlock_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetBorderColor
	 */
	struct UITM_GeneratedIcon_Item_C_SetBorderColor_Params
	{
	public:
		ENUM_MenuColors                                            InColor;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.PreConstruct
	 */
	struct UITM_GeneratedIcon_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsItem
	 */
	struct UITM_GeneratedIcon_Item_C_ShowAsItem_Params
	{
	public:
		class UVanityItem*                                         Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsPickAxePart
	 */
	struct UITM_GeneratedIcon_Item_C_ShowAsPickAxePart_Params
	{
	public:
		class UPickaxePart*                                        part;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPickaxePartLocation                                       PickaxePartLocation;                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PGIR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPlayerCharacterID*                                  Character;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsTexture
	 */
	struct UITM_GeneratedIcon_Item_C_ShowAsTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Tint;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsMaterial
	 */
	struct UITM_GeneratedIcon_Item_C_ShowAsMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Tint;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.HideIcon
	 */
	struct UITM_GeneratedIcon_Item_C_HideIcon_Params
	{
	public:
		class UWidget*                                             AndSwitchTo;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsSoftMaterial
	 */
	struct UITM_GeneratedIcon_Item_C_ShowAsSoftMaterial_Params
	{
	public:
		unsigned char                                              UnknownData_D89K[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Tint;                                                    // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ForceIconOpacity
	 */
	struct UITM_GeneratedIcon_Item_C_ForceIconOpacity_Params
	{
	public:
		float                                                      StartDelay;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Opacity;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsSkin
	 */
	struct UITM_GeneratedIcon_Item_C_ShowAsSkin_Params
	{
	public:
		class UItemSkin*                                           Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ExecuteUbergraph_ITM_GeneratedIcon_Item
	 */
	struct UITM_GeneratedIcon_Item_C_ExecuteUbergraph_ITM_GeneratedIcon_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X7HV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
