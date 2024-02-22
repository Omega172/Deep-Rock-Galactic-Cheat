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
	 * Function HUD_PipelineContext.HUD_PipelineContext_C.UpdateWidget
	 */
	struct UHUD_PipelineContext_C_UpdateWidget_Params
	{
	public:
		class UPrimitiveComponent*                                 InPrimitive;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PipelineContext.HUD_PipelineContext_C.ReceiveContextActorChanged
	 */
	struct UHUD_PipelineContext_C_ReceiveContextActorChanged_Params
	{
	public:
		class AActor*                                              InContextActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PipelineContext.HUD_PipelineContext_C.PreConstruct
	 */
	struct UHUD_PipelineContext_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PipelineContext.HUD_PipelineContext_C.ReceiveUpdate
	 */
	struct UHUD_PipelineContext_C_ReceiveUpdate_Params
	{
	public:
		class UPrimitiveComponent*                                 InContextPrimitive;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PipelineContext.HUD_PipelineContext_C.ReceiveShow
	 */
	struct UHUD_PipelineContext_C_ReceiveShow_Params
	{
	public:
		class UPrimitiveComponent*                                 InContextPrimitive;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PipelineContext.HUD_PipelineContext_C.ExecuteUbergraph_HUD_PipelineContext
	 */
	struct UHUD_PipelineContext_C_ExecuteUbergraph_HUD_PipelineContext_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7AE0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
