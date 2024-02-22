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
	 * Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnTargetDistanceChanged
	 */
	struct UHud_LockOnTarget_C_OnTargetDistanceChanged_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnInViewChanged
	 */
	struct UHud_LockOnTarget_C_OnInViewChanged_Params
	{
	public:
		bool                                                       inView;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WWKV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Angle;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_LockOnTarget.Hud_LockOnTarget_C.PreConstruct
	 */
	struct UHud_LockOnTarget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_LockOnTarget.Hud_LockOnTarget_C.UpdateArrow
	 */
	struct UHud_LockOnTarget_C_UpdateArrow_Params
	{
	public:
		bool                                                       inView;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4XL4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Angle;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnLockOn
	 */
	struct UHud_LockOnTarget_C_OnLockOn_Params
	{
	public:
		int32_t                                                    numberOfLockOnsOnThisTarget;                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    totalNumberOfLockOns;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnFireComplete
	 */
	struct UHud_LockOnTarget_C_OnFireComplete_Params
	{
	public:
		int32_t                                                    numberOfLockOnsOnThisTarget;                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_LockOnTarget.Hud_LockOnTarget_C.UpdateCount
	 */
	struct UHud_LockOnTarget_C_UpdateCount_Params
	{
	public:
		int32_t                                                    NewCount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_LockOnTarget.Hud_LockOnTarget_C.OnShow
	 */
	struct UHud_LockOnTarget_C_OnShow_Params
	{	};

	/**
	 * Function Hud_LockOnTarget.Hud_LockOnTarget_C.CleanUpWidget
	 */
	struct UHud_LockOnTarget_C_CleanUpWidget_Params
	{
	public:
		bool                                                       showFade;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_LockOnTarget.Hud_LockOnTarget_C.Construct
	 */
	struct UHud_LockOnTarget_C_Construct_Params
	{	};

	/**
	 * Function Hud_LockOnTarget.Hud_LockOnTarget_C.OutroFinished
	 */
	struct UHud_LockOnTarget_C_OutroFinished_Params
	{	};

	/**
	 * Function Hud_LockOnTarget.Hud_LockOnTarget_C.ExecuteUbergraph_Hud_LockOnTarget
	 */
	struct UHud_LockOnTarget_C_ExecuteUbergraph_Hud_LockOnTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
