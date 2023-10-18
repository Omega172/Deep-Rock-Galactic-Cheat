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
	 * Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnRep_CurrentCameraOffset
	 */
	struct UDE_UnderhillDeluxe_C_OnRep_CurrentCameraOffset_Params
	{	};

	/**
	 * Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnRep_CurrentScale
	 */
	struct UDE_UnderhillDeluxe_C_OnRep_CurrentScale_Params
	{	};

	/**
	 * Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.TraceForScaledCollision
	 */
	struct UDE_UnderhillDeluxe_C_TraceForScaledCollision_Params
	{
	public:
		bool                                                       IsNextScaleColliding;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RKJ4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.ReceiveTick
	 */
	struct UDE_UnderhillDeluxe_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnStartEffect
	 */
	struct UDE_UnderhillDeluxe_C_OnStartEffect_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnStopEffect
	 */
	struct UDE_UnderhillDeluxe_C_OnStopEffect_Params
	{	};

	/**
	 * Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.Handle Scaling
	 */
	struct UDE_UnderhillDeluxe_C_HandleScaling_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.Reset Voice
	 */
	struct UDE_UnderhillDeluxe_C_ResetVoice_Params
	{	};

	/**
	 * Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.ExecuteUbergraph_DE_UnderhillDeluxe
	 */
	struct UDE_UnderhillDeluxe_C_ExecuteUbergraph_DE_UnderhillDeluxe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
