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
	 * Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.Construct
	 */
	struct UHUD_ThrowCarriable_C_Construct_Params
	{	};

	/**
	 * Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.OnThrowCarriableProgress_Event
	 */
	struct UHUD_ThrowCarriable_C_OnThrowCarriableProgress_Event_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      timeToCancel;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isDone;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_ThrowCarriable.HUD_ThrowCarriable_C.ExecuteUbergraph_HUD_ThrowCarriable
	 */
	struct UHUD_ThrowCarriable_C_ExecuteUbergraph_HUD_ThrowCarriable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
