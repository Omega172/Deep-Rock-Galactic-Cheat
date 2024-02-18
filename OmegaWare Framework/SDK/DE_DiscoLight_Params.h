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
	 * Function DE_DiscoLight.DE_DiscoLight_C.OnRep_Light
	 */
	struct UDE_DiscoLight_C_OnRep_Light_Params
	{	};

	/**
	 * Function DE_DiscoLight.DE_DiscoLight_C.OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC
	 */
	struct UDE_DiscoLight_C_OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_DiscoLight.DE_DiscoLight_C.ReceiveBeginPlay
	 */
	struct UDE_DiscoLight_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DE_DiscoLight.DE_DiscoLight_C.ReceiveTick
	 */
	struct UDE_DiscoLight_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_DiscoLight.DE_DiscoLight_C.OnStartEffect
	 */
	struct UDE_DiscoLight_C_OnStartEffect_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DE_DiscoLight.DE_DiscoLight_C.OnStopEffect
	 */
	struct UDE_DiscoLight_C_OnStopEffect_Params
	{	};

	/**
	 * Function DE_DiscoLight.DE_DiscoLight_C.Set Light
	 */
	struct UDE_DiscoLight_C_SetLight_Params
	{	};

	/**
	 * Function DE_DiscoLight.DE_DiscoLight_C.ExecuteUbergraph_DE_DiscoLight
	 */
	struct UDE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_13FX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
