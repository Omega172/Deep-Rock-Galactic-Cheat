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
	 * Function UI_RoundedCanvas.UI_RoundedCanvas_C.OnPaint
	 */
	struct UUI_RoundedCanvas_C_OnPaint_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function UI_RoundedCanvas.UI_RoundedCanvas_C.UpdateMaterial
	 */
	struct UUI_RoundedCanvas_C_UpdateMaterial_Params
	{	};

	/**
	 * Function UI_RoundedCanvas.UI_RoundedCanvas_C.PreConstruct
	 */
	struct UUI_RoundedCanvas_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RoundedCanvas.UI_RoundedCanvas_C.ExecuteUbergraph_UI_RoundedCanvas
	 */
	struct UUI_RoundedCanvas_C_ExecuteUbergraph_UI_RoundedCanvas_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
