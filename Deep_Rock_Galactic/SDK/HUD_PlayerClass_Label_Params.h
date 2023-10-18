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
	 * Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.UpdateCharacterName
	 */
	struct UHUD_PlayerClass_Label_C_UpdateCharacterName_Params
	{	};

	/**
	 * Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.Construct
	 */
	struct UHUD_PlayerClass_Label_C_Construct_Params
	{	};

	/**
	 * Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.PreConstruct
	 */
	struct UHUD_PlayerClass_Label_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.ExecuteUbergraph_HUD_PlayerClass_Label
	 */
	struct UHUD_PlayerClass_Label_C_ExecuteUbergraph_HUD_PlayerClass_Label_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
