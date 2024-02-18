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
	 * Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnRep_Current Scale
	 */
	struct UDE_MaltRockBearer_C_OnRep_CurrentScale_Params
	{	};

	/**
	 * Function DE_MaltRockBearer.DE_MaltRockBearer_C.TraceForScaledCollision
	 */
	struct UDE_MaltRockBearer_C_TraceForScaledCollision_Params
	{
	public:
		bool                                                       IsNextScaleColliding;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H1XJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DE_MaltRockBearer.DE_MaltRockBearer_C.ReceiveTick
	 */
	struct UDE_MaltRockBearer_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnStartEffect
	 */
	struct UDE_MaltRockBearer_C_OnStartEffect_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnStopEffect
	 */
	struct UDE_MaltRockBearer_C_OnStopEffect_Params
	{	};

	/**
	 * Function DE_MaltRockBearer.DE_MaltRockBearer_C.Handle Scaling
	 */
	struct UDE_MaltRockBearer_C_HandleScaling_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_MaltRockBearer.DE_MaltRockBearer_C.Reset Voice
	 */
	struct UDE_MaltRockBearer_C_ResetVoice_Params
	{	};

	/**
	 * Function DE_MaltRockBearer.DE_MaltRockBearer_C.ExecuteUbergraph_DE_MaltRockBearer
	 */
	struct UDE_MaltRockBearer_C_ExecuteUbergraph_DE_MaltRockBearer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
