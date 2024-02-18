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
	 * Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.CheckFSDEvents
	 */
	struct UUI_JettyBoots_Character_C_CheckFSDEvents_Params
	{	};

	/**
	 * Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.Set Safe
	 */
	struct UUI_JettyBoots_Character_C_SetSafe_Params
	{
	public:
		bool                                                       InIsSafe;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.Set Dead
	 */
	struct UUI_JettyBoots_Character_C_SetDead_Params
	{
	public:
		bool                                                       InIsDead;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.SetJetActive
	 */
	struct UUI_JettyBoots_Character_C_SetJetActive_Params
	{
	public:
		bool                                                       InJetActive;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutValueChanged;                                         // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutJetActive;                                            // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.Construct
	 */
	struct UUI_JettyBoots_Character_C_Construct_Params
	{	};

	/**
	 * Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.OnEventActiveChanged_Event
	 */
	struct UUI_JettyBoots_Character_C_OnEventActiveChanged_Event_Params
	{
	public:
		class UFSDEvent*                                           InFsdEvent;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsActive;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.ExecuteUbergraph_UI_JettyBoots_Character
	 */
	struct UUI_JettyBoots_Character_C_ExecuteUbergraph_UI_JettyBoots_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
