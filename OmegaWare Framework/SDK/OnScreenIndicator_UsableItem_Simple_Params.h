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
	 * Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Construct
	 */
	struct UOnScreenIndicator_UsableItem_Simple_C_Construct_Params
	{	};

	/**
	 * Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Tick
	 */
	struct UOnScreenIndicator_UsableItem_Simple_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnItemEquipped
	 */
	struct UOnScreenIndicator_UsableItem_Simple_C_OnItemEquipped_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.PreConstruct
	 */
	struct UOnScreenIndicator_UsableItem_Simple_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.VisChanged
	 */
	struct UOnScreenIndicator_UsableItem_Simple_C_VisChanged_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple
	 */
	struct UOnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
