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
	 * Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.GetDynamicMaterial
	 */
	struct UUI_GradientMasked_Base_C_GetDynamicMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.Refresh
	 */
	struct UUI_GradientMasked_Base_C_Refresh_Params
	{	};

	/**
	 * Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.GetMaterialTemplate
	 */
	struct UUI_GradientMasked_Base_C_GetMaterialTemplate_Params
	{
	public:
		ENUM_MaskedGradientTypes                                   GradientType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GGCS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  OutTemplate;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.PreConstruct
	 */
	struct UUI_GradientMasked_Base_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.OnMaterialRefreshed
	 */
	struct UUI_GradientMasked_Base_C_OnMaterialRefreshed_Params
	{	};

	/**
	 * Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.ExecuteUbergraph_UI_GradientMasked_Base
	 */
	struct UUI_GradientMasked_Base_C_ExecuteUbergraph_UI_GradientMasked_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
