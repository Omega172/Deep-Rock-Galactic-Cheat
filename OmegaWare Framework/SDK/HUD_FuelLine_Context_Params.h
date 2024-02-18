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
	 * Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.UpdateWidget
	 */
	struct UHUD_FuelLine_Context_C_UpdateWidget_Params
	{
	public:
		class UPrimitiveComponent*                                 InPrimitive;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ReceiveContextActorChanged
	 */
	struct UHUD_FuelLine_Context_C_ReceiveContextActorChanged_Params
	{
	public:
		class AActor*                                              InContextActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.PreConstruct
	 */
	struct UHUD_FuelLine_Context_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ReceiveUpdate
	 */
	struct UHUD_FuelLine_Context_C_ReceiveUpdate_Params
	{
	public:
		class UPrimitiveComponent*                                 InContextPrimitive;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ReceiveShow
	 */
	struct UHUD_FuelLine_Context_C_ReceiveShow_Params
	{
	public:
		class UPrimitiveComponent*                                 InContextPrimitive;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ExecuteUbergraph_HUD_FuelLine_Context
	 */
	struct UHUD_FuelLine_Context_C_ExecuteUbergraph_HUD_FuelLine_Context_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7GZR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
