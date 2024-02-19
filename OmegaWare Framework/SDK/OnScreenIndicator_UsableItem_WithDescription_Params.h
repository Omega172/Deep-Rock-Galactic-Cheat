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
	 * Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.GetUsable
	 */
	struct UOnScreenIndicator_UsableItem_WithDescription_C_GetUsable_Params
	{
	public:
		class UUsableComponentBase*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.SetTitle
	 */
	struct UOnScreenIndicator_UsableItem_WithDescription_C_SetTitle_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.SetAction
	 */
	struct UOnScreenIndicator_UsableItem_WithDescription_C_SetAction_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                OverrideControllerText;                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.OnDepositingBegin
	 */
	struct UOnScreenIndicator_UsableItem_WithDescription_C_OnDepositingBegin_Params
	{
	public:
		class UResourceBank*                                       ResourceBank;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.PreConstruct
	 */
	struct UOnScreenIndicator_UsableItem_WithDescription_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.EndHover
	 */
	struct UOnScreenIndicator_UsableItem_WithDescription_C_EndHover_Params
	{	};

	/**
	 * Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.BeginHover
	 */
	struct UOnScreenIndicator_UsableItem_WithDescription_C_BeginHover_Params
	{
	public:
		class UUsableComponentBase*                                Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.Construct
	 */
	struct UOnScreenIndicator_UsableItem_WithDescription_C_Construct_Params
	{	};

	/**
	 * Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.On Initialize
	 */
	struct UOnScreenIndicator_UsableItem_WithDescription_C_OnInitialize_Params
	{	};

	/**
	 * Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.Tick
	 */
	struct UOnScreenIndicator_UsableItem_WithDescription_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription
	 */
	struct UOnScreenIndicator_UsableItem_WithDescription_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_STFQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
