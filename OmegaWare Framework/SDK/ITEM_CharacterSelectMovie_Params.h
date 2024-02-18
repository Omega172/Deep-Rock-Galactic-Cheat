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
	 * Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Collapse
	 */
	struct UITEM_CharacterSelectMovie_C_Collapse_Params
	{	};

	/**
	 * Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.SetVideo
	 */
	struct UITEM_CharacterSelectMovie_C_SetVideo_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Construct
	 */
	struct UITEM_CharacterSelectMovie_C_Construct_Params
	{	};

	/**
	 * Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.InitPlayer
	 */
	struct UITEM_CharacterSelectMovie_C_InitPlayer_Params
	{	};

	/**
	 * Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.BuildCharacterSelectionMovie
	 */
	struct UITEM_CharacterSelectMovie_C_BuildCharacterSelectionMovie_Params
	{	};

	/**
	 * Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.ExecuteUbergraph_ITEM_CharacterSelectMovie
	 */
	struct UITEM_CharacterSelectMovie_C_ExecuteUbergraph_ITEM_CharacterSelectMovie_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TB60[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
