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
	 * Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.GetContextWidgetFromActor
	 */
	struct UHUD_ActorContext_Manager_C_GetContextWidgetFromActor_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UActorContextWidget*                                 OutWidget;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.SetContextWidget
	 */
	struct UHUD_ActorContext_Manager_C_SetContextWidget_Params
	{
	public:
		class UActorContextWidget*                                 InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 InPrimitive;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.Construct
	 */
	struct UHUD_ActorContext_Manager_C_Construct_Params
	{	};

	/**
	 * Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.OnTargetChanged
	 */
	struct UHUD_ActorContext_Manager_C_OnTargetChanged_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 NewPrimitive;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.UpdateTick
	 */
	struct UHUD_ActorContext_Manager_C_UpdateTick_Params
	{	};

	/**
	 * Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.ExecuteUbergraph_HUD_ActorContext_Manager
	 */
	struct UHUD_ActorContext_Manager_C_ExecuteUbergraph_HUD_ActorContext_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
