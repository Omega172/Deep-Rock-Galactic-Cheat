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
	 * Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.PreConstruct
	 */
	struct ULore_Container_Text_W_Image_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.AddItem
	 */
	struct ULore_Container_Text_W_Image_C_AddItem_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FP16[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMargin                                             InPadding;                                               // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESlateSizeRule                                             SizeRule;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.SetData
	 */
	struct ULore_Container_Text_W_Image_C_SetData_Params
	{
	public:
		class UMinersManualData*                                   Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.Refresh
	 */
	struct ULore_Container_Text_W_Image_C_Refresh_Params
	{	};

	/**
	 * Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.ExecuteUbergraph_Lore_Container_Text_W_Image
	 */
	struct ULore_Container_Text_W_Image_C_ExecuteUbergraph_Lore_Container_Text_W_Image_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
