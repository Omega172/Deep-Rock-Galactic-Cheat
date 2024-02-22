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
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.ReleaseRenderTarget
	 */
	struct UUI_Forge_Schematic_C_ReleaseRenderTarget_Params
	{	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.PrepareRevealAnim
	 */
	struct UUI_Forge_Schematic_C_PrepareRevealAnim_Params
	{	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.PlayRevealAnim
	 */
	struct UUI_Forge_Schematic_C_PlayRevealAnim_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.GetCategory
	 */
	struct UUI_Forge_Schematic_C_GetCategory_Params
	{
	public:
		class USchematicCategory*                                  Category;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemReset
	 */
	struct UUI_Forge_Schematic_C_OnItemReset_Params
	{
	public:
		class USchematic*                                          Schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.SetHovering
	 */
	struct UUI_Forge_Schematic_C_SetHovering_Params
	{
	public:
		bool                                                       InHovering;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.TryBuildSchematic
	 */
	struct UUI_Forge_Schematic_C_TryBuildSchematic_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemChanged
	 */
	struct UUI_Forge_Schematic_C_OnItemChanged_Params
	{
	public:
		class USchematic*                                          Schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.GetSchematic
	 */
	struct UUI_Forge_Schematic_C_GetSchematic_Params
	{
	public:
		class USchematic*                                          Schematic;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.Refresh
	 */
	struct UUI_Forge_Schematic_C_Refresh_Params
	{
	public:
		bool                                                       RefreshImage;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.SetSchematic
	 */
	struct UUI_Forge_Schematic_C_SetSchematic_Params
	{
	public:
		class USchematic*                                          InSchematic;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Forge_Schematic_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Forge_Schematic_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Forge_Schematic_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.Construct
	 */
	struct UUI_Forge_Schematic_C_Construct_Params
	{	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.PreConstruct
	 */
	struct UUI_Forge_Schematic_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.GenerateIcon
	 */
	struct UUI_Forge_Schematic_C_GenerateIcon_Params
	{
	public:
		class UVanityItem*                                         Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.ExecuteUbergraph_UI_Forge_Schematic
	 */
	struct UUI_Forge_Schematic_C_ExecuteUbergraph_UI_Forge_Schematic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QV9J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemClicked__DelegateSignature
	 */
	struct UUI_Forge_Schematic_C_OnItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_Forge_Schematic_C*                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemUnhovered__DelegateSignature
	 */
	struct UUI_Forge_Schematic_C_OnItemUnhovered__DelegateSignature_Params
	{
	public:
		class UUI_Forge_Schematic_C*                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemHovered__DelegateSignature
	 */
	struct UUI_Forge_Schematic_C_OnItemHovered__DelegateSignature_Params
	{
	public:
		class UUI_Forge_Schematic_C*                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
