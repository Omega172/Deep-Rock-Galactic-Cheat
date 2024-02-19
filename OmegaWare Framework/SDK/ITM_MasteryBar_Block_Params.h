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
	 * Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.SetUnlocked
	 */
	struct UITM_MasteryBar_Block_C_SetUnlocked_Params
	{
	public:
		bool                                                       IsUnlocked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.PreConstruct
	 */
	struct UITM_MasteryBar_Block_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ReceiveUnlocked
	 */
	struct UITM_MasteryBar_Block_C_ReceiveUnlocked_Params
	{	};

	/**
	 * Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ExecuteUbergraph_ITM_MasteryBar_Block
	 */
	struct UITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
