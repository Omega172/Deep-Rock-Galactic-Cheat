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
	 * Function UI_CircularProgressBar.UI_CircularProgressBar_C.SetTintOpacity
	 */
	struct UUI_CircularProgressBar_C_SetTintOpacity_Params
	{
	public:
		float                                                      TintOpacity;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CircularProgressBar.UI_CircularProgressBar_C.SetTint
	 */
	struct UUI_CircularProgressBar_C_SetTint_Params
	{
	public:
		ENUM_MenuColors                                            Tint;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B34K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CircularProgressBar.UI_CircularProgressBar_C.IncPercent
	 */
	struct UUI_CircularProgressBar_C_IncPercent_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Percent;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CircularProgressBar.UI_CircularProgressBar_C.GetPercent
	 */
	struct UUI_CircularProgressBar_C_GetPercent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CircularProgressBar.UI_CircularProgressBar_C.SetClockwise
	 */
	struct UUI_CircularProgressBar_C_SetClockwise_Params
	{
	public:
		bool                                                       ShowClockwise;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CircularProgressBar.UI_CircularProgressBar_C.SetRingThickness
	 */
	struct UUI_CircularProgressBar_C_SetRingThickness_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9D28[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CircularProgressBar.UI_CircularProgressBar_C.SetRingRadius
	 */
	struct UUI_CircularProgressBar_C_SetRingRadius_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QJIJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CircularProgressBar.UI_CircularProgressBar_C.SetCompleteRange
	 */
	struct UUI_CircularProgressBar_C_SetCompleteRange_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KJH3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CircularProgressBar.UI_CircularProgressBar_C.SetStartAngle
	 */
	struct UUI_CircularProgressBar_C_SetStartAngle_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2442[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CircularProgressBar.UI_CircularProgressBar_C.CreateMaterial
	 */
	struct UUI_CircularProgressBar_C_CreateMaterial_Params
	{	};

	/**
	 * Function UI_CircularProgressBar.UI_CircularProgressBar_C.SetPercent
	 */
	struct UUI_CircularProgressBar_C_SetPercent_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CircularProgressBar.UI_CircularProgressBar_C.PreConstruct
	 */
	struct UUI_CircularProgressBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CircularProgressBar.UI_CircularProgressBar_C.ExecuteUbergraph_UI_CircularProgressBar
	 */
	struct UUI_CircularProgressBar_C_ExecuteUbergraph_UI_CircularProgressBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
