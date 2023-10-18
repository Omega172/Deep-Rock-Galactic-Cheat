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
	 * Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.CalculateScreenPos
	 */
	struct UOnScreenIndicator_Actor_Shout_C_CalculateScreenPos_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Tick
	 */
	struct UOnScreenIndicator_Actor_Shout_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Construct
	 */
	struct UOnScreenIndicator_Actor_Shout_C_Construct_Params
	{	};

	/**
	 * Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.OnShout
	 */
	struct UOnScreenIndicator_Actor_Shout_C_OnShout_Params
	{	};

	/**
	 * Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.PreConstruct
	 */
	struct UOnScreenIndicator_Actor_Shout_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.BndEvt__OnScreenIndicator_Actor_Shout_ShoutBox_K2Node_ComponentBoundEvent_0_OnShoutActiveChanged__DelegateSignature
	 */
	struct UOnScreenIndicator_Actor_Shout_C_BndEvt__OnScreenIndicator_Actor_Shout_ShoutBox_K2Node_ComponentBoundEvent_0_OnShoutActiveChanged__DelegateSignature_Params
	{
	public:
		bool                                                       InShoutActive;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.UpdateScreenPosAndDistance
	 */
	struct UOnScreenIndicator_Actor_Shout_C_UpdateScreenPosAndDistance_Params
	{	};

	/**
	 * Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.ExecuteUbergraph_OnScreenIndicator_Actor_Shout
	 */
	struct UOnScreenIndicator_Actor_Shout_C_ExecuteUbergraph_OnScreenIndicator_Actor_Shout_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
