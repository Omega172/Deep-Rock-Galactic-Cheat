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
	 * Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetTintOpacity
	 */
	struct UW_CircularProgressBar01_C_SetTintOpacity_Params
	{
	public:
		float                                                      TintOpacity;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetTint
	 */
	struct UW_CircularProgressBar01_C_SetTint_Params
	{
	public:
		ENUM_MenuColors                                            Tint;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QV3Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_CircularProgressBar01.W_CircularProgressBar01_C.IncPercent
	 */
	struct UW_CircularProgressBar01_C_IncPercent_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Percent;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CircularProgressBar01.W_CircularProgressBar01_C.GetPercent
	 */
	struct UW_CircularProgressBar01_C_GetPercent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetClockwise
	 */
	struct UW_CircularProgressBar01_C_SetClockwise_Params
	{
	public:
		bool                                                       ShowClockwise;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetRingThickness
	 */
	struct UW_CircularProgressBar01_C_SetRingThickness_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UDLH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetRingRadius
	 */
	struct UW_CircularProgressBar01_C_SetRingRadius_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F75N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetCompleteRange
	 */
	struct UW_CircularProgressBar01_C_SetCompleteRange_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GQ0W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetStartAngle
	 */
	struct UW_CircularProgressBar01_C_SetStartAngle_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3KDY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_CircularProgressBar01.W_CircularProgressBar01_C.CreateMaterial
	 */
	struct UW_CircularProgressBar01_C_CreateMaterial_Params
	{	};

	/**
	 * Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetPercent
	 */
	struct UW_CircularProgressBar01_C_SetPercent_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CircularProgressBar01.W_CircularProgressBar01_C.PreConstruct
	 */
	struct UW_CircularProgressBar01_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_CircularProgressBar01.W_CircularProgressBar01_C.ExecuteUbergraph_W_CircularProgressBar01
	 */
	struct UW_CircularProgressBar01_C_ExecuteUbergraph_W_CircularProgressBar01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
