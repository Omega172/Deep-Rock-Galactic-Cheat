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
	 * Function ITM_Season_CharacterIcon.ITM_Season_CharacterIcon_C.SetData
	 */
	struct UITM_Season_CharacterIcon_C_SetData_Params
	{
	public:
		class UPlayerCharacterID*                                  characterID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowIcon;                                                // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Season_CharacterIcon.ITM_Season_CharacterIcon_C.Construct
	 */
	struct UITM_Season_CharacterIcon_C_Construct_Params
	{	};

	/**
	 * Function ITM_Season_CharacterIcon.ITM_Season_CharacterIcon_C.PreConstruct
	 */
	struct UITM_Season_CharacterIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Season_CharacterIcon.ITM_Season_CharacterIcon_C.ExecuteUbergraph_ITM_Season_CharacterIcon
	 */
	struct UITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
