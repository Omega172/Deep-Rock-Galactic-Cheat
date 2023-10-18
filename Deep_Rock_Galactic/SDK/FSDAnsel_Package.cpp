/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDAnsel.FSDAnselFunctionLibrary.StopPhotographySession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSDAnselFunctionLibrary::StopPhotographySession(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.StopPhotographySession");
		
		UFSDAnselFunctionLibrary_StopPhotographySession_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDAnsel.FSDAnselFunctionLibrary.StartPhotographySession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSDAnselFunctionLibrary::StartPhotographySession(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.StartPhotographySession");
		
		UFSDAnselFunctionLibrary_StartPhotographySession_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDAnsel.FSDAnselFunctionLibrary.SetUIControlVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUIControlEffectTarget                             UIControlTarget                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsVisible                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSDAnselFunctionLibrary::SetUIControlVisibility(class UObject* WorldContextObject, EUIControlEffectTarget UIControlTarget, bool bIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetUIControlVisibility");
		
		UFSDAnselFunctionLibrary_SetUIControlVisibility_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UIControlTarget = UIControlTarget;
		params.bIsVisible = bIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDAnsel.FSDAnselFunctionLibrary.SetSettleFrames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumSettleFrames                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSDAnselFunctionLibrary::SetSettleFrames(int32_t NumSettleFrames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetSettleFrames");
		
		UFSDAnselFunctionLibrary_SetSettleFrames_Params params {};
		params.NumSettleFrames = NumSettleFrames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDAnsel.FSDAnselFunctionLibrary.SetIsPhotographyAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPhotographyAllowed                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSDAnselFunctionLibrary::SetIsPhotographyAllowed(bool bIsPhotographyAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetIsPhotographyAllowed");
		
		UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Params params {};
		params.bIsPhotographyAllowed = bIsPhotographyAllowed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraMovementSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TranslationSpeed                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSDAnselFunctionLibrary::SetCameraMovementSpeed(float TranslationSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraMovementSpeed");
		
		UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Params params {};
		params.TranslationSpeed = TranslationSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MaxCameraDistance                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSDAnselFunctionLibrary::SetCameraConstraintDistance(float MaxCameraDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintDistance");
		
		UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Params params {};
		params.MaxCameraDistance = MaxCameraDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintCameraSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CameraSize                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSDAnselFunctionLibrary::SetCameraConstraintCameraSize(float CameraSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintCameraSize");
		
		UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Params params {};
		params.CameraSize = CameraSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPostprocess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldAutoPostprocess                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSDAnselFunctionLibrary::SetAutoPostprocess(bool bShouldAutoPostprocess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPostprocess");
		
		UFSDAnselFunctionLibrary_SetAutoPostprocess_Params params {};
		params.bShouldAutoPostprocess = bShouldAutoPostprocess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPause
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldAutoPause                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSDAnselFunctionLibrary::SetAutoPause(bool bShouldAutoPause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPause");
		
		UFSDAnselFunctionLibrary_SetAutoPause_Params params {};
		params.bShouldAutoPause = bShouldAutoPause;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAvailable
	 * 		Flags  -> ()
	 */
	bool UFSDAnselFunctionLibrary::IsPhotographyAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAvailable");
		
		UFSDAnselFunctionLibrary_IsPhotographyAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAllowed
	 * 		Flags  -> ()
	 */
	bool UFSDAnselFunctionLibrary::IsPhotographyAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAllowed");
		
		UFSDAnselFunctionLibrary_IsPhotographyAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByGeometry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewCameraLocation                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PreviousCameraLocation                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OriginalCameraLocation                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutCameraLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSDAnselFunctionLibrary::ConstrainCameraByGeometry(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByGeometry");
		
		UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NewCameraLocation = NewCameraLocation;
		params.PreviousCameraLocation = PreviousCameraLocation;
		params.OriginalCameraLocation = OriginalCameraLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCameraLocation != nullptr)
			*OutCameraLocation = params.OutCameraLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewCameraLocation                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PreviousCameraLocation                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OriginalCameraLocation                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutCameraLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSDAnselFunctionLibrary::ConstrainCameraByDistance(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation, float MaxDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByDistance");
		
		UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NewCameraLocation = NewCameraLocation;
		params.PreviousCameraLocation = PreviousCameraLocation;
		params.OriginalCameraLocation = OriginalCameraLocation;
		params.MaxDistance = MaxDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCameraLocation != nullptr)
			*OutCameraLocation = params.OutCameraLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFSDAnselFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFSDAnselFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDAnsel.FSDAnselFunctionLibrary");
		return ptr;
	}

}


