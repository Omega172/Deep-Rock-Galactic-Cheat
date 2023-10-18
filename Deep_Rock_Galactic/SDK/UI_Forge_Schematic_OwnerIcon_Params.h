#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromActorClass
	 */
	struct UUI_Forge_Schematic_OwnerIcon_C_FromActorClass_Params
	{
	public:
		class UItemData*                                           ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromItemID
	 */
	struct UUI_Forge_Schematic_OwnerIcon_C_FromItemID_Params
	{
	public:
		class UItemID*                                             ItemID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetIconAndVisibility
	 */
	struct UUI_Forge_Schematic_OwnerIcon_C_SetIconAndVisibility_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InColor;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromSchematic
	 */
	struct UUI_Forge_Schematic_OwnerIcon_C_FromSchematic_Params
	{
	public:
		class USchematic*                                          InSchematic;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetMaxSize
	 */
	struct UUI_Forge_Schematic_OwnerIcon_C_SetMaxSize_Params
	{
	public:
		int32_t                                                    InWidth;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InHeight;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.PreConstruct
	 */
	struct UUI_Forge_Schematic_OwnerIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.Construct
	 */
	struct UUI_Forge_Schematic_OwnerIcon_C_Construct_Params
	{	};

	/**
	 * Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon
	 */
	struct UUI_Forge_Schematic_OwnerIcon_C_ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
