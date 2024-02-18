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
	 * Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Fold
	 */
	struct UWND_Jobs_Entry_Base_C_Fold_Params
	{	};

	/**
	 * Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.SetData
	 */
	struct UWND_Jobs_Entry_Base_C_SetData_Params
	{
	public:
		class UCampaign*                                           Campaign;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Refresh
	 */
	struct UWND_Jobs_Entry_Base_C_Refresh_Params
	{	};

	/**
	 * Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfold
	 */
	struct UWND_Jobs_Entry_Base_C_Unfold_Params
	{	};

	/**
	 * Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.ExecuteUbergraph_WND_Jobs_Entry_Base
	 */
	struct UWND_Jobs_Entry_Base_C_ExecuteUbergraph_WND_Jobs_Entry_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_42GB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Updated__DelegateSignature
	 */
	struct UWND_Jobs_Entry_Base_C_Updated__DelegateSignature_Params
	{	};

	/**
	 * Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfolded__DelegateSignature
	 */
	struct UWND_Jobs_Entry_Base_C_Unfolded__DelegateSignature_Params
	{
	public:
		class UWND_Jobs_Entry_Base_C*                              Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
