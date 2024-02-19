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
	 * Function HUD_JetBootsFuel_Vertical.HUD_JetBootsFuel_Vertical_C.PreConstruct
	 */
	struct UHUD_JetBootsFuel_Vertical_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_JetBootsFuel_Vertical.HUD_JetBootsFuel_Vertical_C.SetProgress
	 */
	struct UHUD_JetBootsFuel_Vertical_C_SetProgress_Params
	{
	public:
		float                                                      CurrentProgress;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       overHeated;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_JetBootsFuel_Vertical.HUD_JetBootsFuel_Vertical_C.SetIsActive
	 */
	struct UHUD_JetBootsFuel_Vertical_C_SetIsActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_JetBootsFuel_Vertical.HUD_JetBootsFuel_Vertical_C.ExecuteUbergraph_HUD_JetBootsFuel_Vertical
	 */
	struct UHUD_JetBootsFuel_Vertical_C_ExecuteUbergraph_HUD_JetBootsFuel_Vertical_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
