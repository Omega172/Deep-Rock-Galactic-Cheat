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
	 * Function BP_ModularLamp.BP_ModularLamp_C.GetMeshStructByEnum
	 */
	struct ABP_ModularLamp_C_GetMeshStructByEnum_Params
	{
	public:
		ENUM_ModularLamps                                          Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PZ9L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSTRUCT_Lamp                                        ReturnValue;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularLamp.BP_ModularLamp_C.SetLightColor
	 */
	struct ABP_ModularLamp_C_SetLightColor_Params
	{
	public:
		struct FLinearColor                                        LightColor;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularLamp.BP_ModularLamp_C.UserConstructionScript
	 */
	struct ABP_ModularLamp_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
