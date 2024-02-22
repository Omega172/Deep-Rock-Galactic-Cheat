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
	 * Function HUD_CoolDownManager.HUD_CoolDownManager_C.GetOrCreateWidget
	 */
	struct UHUD_CoolDownManager_C_GetOrCreateWidget_Params
	{
	public:
		class UObject*                                             CoolDownOwner;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCoolDownProgressStyle                              CoolDownStyle;                                           // 0x0008(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCoolDownProgressWidget*                             Widget;                                                  // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CoolDownManager.HUD_CoolDownManager_C.Construct
	 */
	struct UHUD_CoolDownManager_C_Construct_Params
	{	};

	/**
	 * Function HUD_CoolDownManager.HUD_CoolDownManager_C.OnCoolDownProgress_Event
	 */
	struct UHUD_CoolDownManager_C_OnCoolDownProgress_Event_Params
	{
	public:
		class UObject*                                             CoolDownObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCoolDownProgressStyle                              Style;                                                   // 0x0008(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Progress;                                                // 0x0048(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CoolDownManager.HUD_CoolDownManager_C.ExecuteUbergraph_HUD_CoolDownManager
	 */
	struct UHUD_CoolDownManager_C_ExecuteUbergraph_HUD_CoolDownManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZBPW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
