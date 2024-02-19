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
	 * Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.FillGrid
	 */
	struct UITM_LoadoutIconSelector_C_FillGrid_Params
	{	};

	/**
	 * Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.SetData
	 */
	struct UITM_LoadoutIconSelector_C_SetData_Params
	{	};

	/**
	 * Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconClicked
	 */
	struct UITM_LoadoutIconSelector_C_OnIconClicked_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ImageIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.ExecuteUbergraph_ITM_LoadoutIconSelector
	 */
	struct UITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L0FP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconSelected__DelegateSignature
	 */
	struct UITM_LoadoutIconSelector_C_OnIconSelected__DelegateSignature_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ImageIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
