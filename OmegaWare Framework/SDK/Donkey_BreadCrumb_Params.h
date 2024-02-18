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
	 * Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.OnRep_NextPointLookat
	 */
	struct ADonkey_BreadCrumb_C_OnRep_NextPointLookat_Params
	{	};

	/**
	 * Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.SetNextArrowPoint
	 */
	struct ADonkey_BreadCrumb_C_SetNextArrowPoint_Params
	{
	public:
		struct FVector                                             NextPoint;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.GetArrowPoint
	 */
	struct ADonkey_BreadCrumb_C_GetArrowPoint_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ReceiveBeginPlay
	 */
	struct ADonkey_BreadCrumb_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink
	 */
	struct ADonkey_BreadCrumb_C_Blink_Params
	{	};

	/**
	 * Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink_Photosensitive
	 */
	struct ADonkey_BreadCrumb_C_Blink_Photosensitive_Params
	{	};

	/**
	 * Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ExecuteUbergraph_Donkey_BreadCrumb
	 */
	struct ADonkey_BreadCrumb_C_ExecuteUbergraph_Donkey_BreadCrumb_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
