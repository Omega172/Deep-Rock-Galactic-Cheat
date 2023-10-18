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
	 * Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.GetPlayerClass
	 */
	struct UITM_TopBar_PlayerCounter_C_GetPlayerClass_Params
	{
	public:
		class UPlayerCharacterID*                                  OutPlayerCharacter;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.Refresh
	 */
	struct UITM_TopBar_PlayerCounter_C_Refresh_Params
	{	};

	/**
	 * Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.Construct
	 */
	struct UITM_TopBar_PlayerCounter_C_Construct_Params
	{	};

	/**
	 * Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.ExecuteUbergraph_ITM_TopBar_PlayerCounter
	 */
	struct UITM_TopBar_PlayerCounter_C_ExecuteUbergraph_ITM_TopBar_PlayerCounter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
