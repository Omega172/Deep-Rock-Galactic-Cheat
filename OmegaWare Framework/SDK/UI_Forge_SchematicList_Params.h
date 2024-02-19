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
	 * Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddSeparator
	 */
	struct UUI_Forge_SchematicList_C_AddSeparator_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.PopulateList
	 */
	struct UUI_Forge_SchematicList_C_PopulateList_Params
	{	};

	/**
	 * Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.TryAddSeparator
	 */
	struct UUI_Forge_SchematicList_C_TryAddSeparator_Params
	{
	public:
		class USchematic*                                          InNextSchematic;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.GetCategoryOrder
	 */
	struct UUI_Forge_SchematicList_C_GetCategoryOrder_Params
	{
	public:
		class USchematic*                                          Schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutOrder;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_89FF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutName;                                                 // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddNext
	 */
	struct UUI_Forge_SchematicList_C_AddNext_Params
	{	};

	/**
	 * Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Refresh
	 */
	struct UUI_Forge_SchematicList_C_Refresh_Params
	{	};

	/**
	 * Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.ItemClicked
	 */
	struct UUI_Forge_SchematicList_C_ItemClicked_Params
	{
	public:
		class UUI_Forge_Schematic_C*                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddSchematic
	 */
	struct UUI_Forge_SchematicList_C_AddSchematic_Params
	{
	public:
		class USchematic*                                          InSchematic;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Clear
	 */
	struct UUI_Forge_SchematicList_C_Clear_Params
	{	};

	/**
	 * Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Construct
	 */
	struct UUI_Forge_SchematicList_C_Construct_Params
	{	};

	/**
	 * Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.ExecuteUbergraph_UI_Forge_SchematicList
	 */
	struct UUI_Forge_SchematicList_C_ExecuteUbergraph_UI_Forge_SchematicList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.OnItemClicked__DelegateSignature
	 */
	struct UUI_Forge_SchematicList_C_OnItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_Forge_Schematic_C*                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
