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
	 * Function FSDAnsel.FSDAnselFunctionLibrary.StopPhotographySession
	 */
	struct UFSDAnselFunctionLibrary_StopPhotographySession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDAnsel.FSDAnselFunctionLibrary.StartPhotographySession
	 */
	struct UFSDAnselFunctionLibrary_StartPhotographySession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDAnsel.FSDAnselFunctionLibrary.SetUIControlVisibility
	 */
	struct UFSDAnselFunctionLibrary_SetUIControlVisibility_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUIControlEffectTarget                                     UIControlTarget;                                         // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsVisible;                                              // 0x0009(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDAnsel.FSDAnselFunctionLibrary.SetSettleFrames
	 */
	struct UFSDAnselFunctionLibrary_SetSettleFrames_Params
	{
	public:
		int32_t                                                    NumSettleFrames;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDAnsel.FSDAnselFunctionLibrary.SetIsPhotographyAllowed
	 */
	struct UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Params
	{
	public:
		bool                                                       bIsPhotographyAllowed;                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraMovementSpeed
	 */
	struct UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Params
	{
	public:
		float                                                      TranslationSpeed;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintDistance
	 */
	struct UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Params
	{
	public:
		float                                                      MaxCameraDistance;                                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintCameraSize
	 */
	struct UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Params
	{
	public:
		float                                                      CameraSize;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPostprocess
	 */
	struct UFSDAnselFunctionLibrary_SetAutoPostprocess_Params
	{
	public:
		bool                                                       bShouldAutoPostprocess;                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPause
	 */
	struct UFSDAnselFunctionLibrary_SetAutoPause_Params
	{
	public:
		bool                                                       bShouldAutoPause;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAvailable
	 */
	struct UFSDAnselFunctionLibrary_IsPhotographyAvailable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAllowed
	 */
	struct UFSDAnselFunctionLibrary_IsPhotographyAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByGeometry
	 */
	struct UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewCameraLocation;                                       // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             PreviousCameraLocation;                                  // 0x0014(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OriginalCameraLocation;                                  // 0x0020(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutCameraLocation;                                       // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByDistance
	 */
	struct UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewCameraLocation;                                       // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             PreviousCameraLocation;                                  // 0x0014(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OriginalCameraLocation;                                  // 0x0020(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutCameraLocation;                                       // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxDistance;                                             // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
