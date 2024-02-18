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
	 * Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.SetPerks
	 */
	struct UHUD_ActivatablePerks_C_SetPerks_Params
	{
	public:
		TArray<class UPerkAsset*>                                  Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.Construct
	 */
	struct UHUD_ActivatablePerks_C_Construct_Params
	{	};

	/**
	 * Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.PreConstruct
	 */
	struct UHUD_ActivatablePerks_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.ExecuteUbergraph_HUD_ActivatablePerks
	 */
	struct UHUD_ActivatablePerks_C_ExecuteUbergraph_HUD_ActivatablePerks_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y7PZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
