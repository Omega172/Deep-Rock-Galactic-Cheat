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
	 * Function Reflex.ReflexBlueprintLibrary.SetReflexMode
	 */
	struct UReflexBlueprintLibrary_SetReflexMode_Params
	{
	public:
		EReflexMode                                                Mode;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled
	 */
	struct UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs
	 */
	struct UReflexBlueprintLibrary_GetRenderLatencyInMs_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Reflex.ReflexBlueprintLibrary.GetReflexMode
	 */
	struct UReflexBlueprintLibrary_GetReflexMode_Params
	{
	public:
		EReflexMode                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Reflex.ReflexBlueprintLibrary.GetReflexAvailable
	 */
	struct UReflexBlueprintLibrary_GetReflexAvailable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs
	 */
	struct UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs
	 */
	struct UReflexBlueprintLibrary_GetGameLatencyInMs_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled
	 */
	struct UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
