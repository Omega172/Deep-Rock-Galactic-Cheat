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
	 * Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.GetBorderColor
	 */
	struct UITM_Craft_ItemIcon_C_GetBorderColor_Params
	{
	public:
		struct FLinearColor                                        OutputColor;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.FreeRenderTarget
	 */
	struct UITM_Craft_ItemIcon_C_FreeRenderTarget_Params
	{	};

	/**
	 * Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetIconTexture
	 */
	struct UITM_Craft_ItemIcon_C_SetIconTexture_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.GetPlayerState
	 */
	struct UITM_Craft_ItemIcon_C_GetPlayerState_Params
	{
	public:
		class AFSDPlayerState*                                     AsFSDPlayerState;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetData
	 */
	struct UITM_Craft_ItemIcon_C_SetData_Params
	{
	public:
		unsigned char                                              UnknownData_ODVN[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              CharacterClass;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.PreConstruct
	 */
	struct UITM_Craft_ItemIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.Construct
	 */
	struct UITM_Craft_ItemIcon_C_Construct_Params
	{	};

	/**
	 * Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.ExecuteUbergraph_ITM_Craft_ItemIcon
	 */
	struct UITM_Craft_ItemIcon_C_ExecuteUbergraph_ITM_Craft_ItemIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
