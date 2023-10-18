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
	 * Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.UpdatePlayerClass
	 */
	struct UHUD_TabPlayerListEntryV2_C_UpdatePlayerClass_Params
	{	};

	/**
	 * Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.UpdateVolatileStats
	 */
	struct UHUD_TabPlayerListEntryV2_C_UpdateVolatileStats_Params
	{	};

	/**
	 * Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Set Data
	 */
	struct UHUD_TabPlayerListEntryV2_C_SetData_Params
	{
	public:
		class AFSDPlayerState*                                     State;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Tick
	 */
	struct UHUD_TabPlayerListEntryV2_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.PreConstruct
	 */
	struct UHUD_TabPlayerListEntryV2_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ShowInfoBar
	 */
	struct UHUD_TabPlayerListEntryV2_C_ShowInfoBar_Params
	{
	public:
		bool                                                       shouldShow;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.CharacterChanged
	 */
	struct UHUD_TabPlayerListEntryV2_C_CharacterChanged_Params
	{
	public:
		class APlayerCharacter*                                    PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ExecuteUbergraph_HUD_TabPlayerListEntryV2
	 */
	struct UHUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
