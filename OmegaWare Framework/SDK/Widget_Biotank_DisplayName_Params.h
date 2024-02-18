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
	 * Function Widget_Biotank_DisplayName.Widget_Biotank_DisplayName_C.SetCase
	 */
	struct UWidget_Biotank_DisplayName_C_SetCase_Params
	{
	public:
		class ADisplayCase*                                        Case;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Biotank_DisplayName.Widget_Biotank_DisplayName_C.ContentUpdated
	 */
	struct UWidget_Biotank_DisplayName_C_ContentUpdated_Params
	{
	public:
		struct FDisplayContent                                     Content;                                                 // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_Biotank_DisplayName.Widget_Biotank_DisplayName_C.ExecuteUbergraph_Widget_Biotank_DisplayName
	 */
	struct UWidget_Biotank_DisplayName_C_ExecuteUbergraph_Widget_Biotank_DisplayName_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
