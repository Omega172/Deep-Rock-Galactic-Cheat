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
	 * Function UI_MaskedCanvas.UI_MaskedCanvas_C.SetMask
	 */
	struct UUI_MaskedCanvas_C_SetMask_Params
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MaskedCanvas.UI_MaskedCanvas_C.UpdateMaterial
	 */
	struct UUI_MaskedCanvas_C_UpdateMaterial_Params
	{	};

	/**
	 * Function UI_MaskedCanvas.UI_MaskedCanvas_C.PreConstruct
	 */
	struct UUI_MaskedCanvas_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MaskedCanvas.UI_MaskedCanvas_C.ExecuteUbergraph_UI_MaskedCanvas
	 */
	struct UUI_MaskedCanvas_C_ExecuteUbergraph_UI_MaskedCanvas_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
