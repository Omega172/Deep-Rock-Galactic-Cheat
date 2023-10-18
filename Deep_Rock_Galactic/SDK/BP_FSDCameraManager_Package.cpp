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
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeMaxDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MaxDistance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FSDCameraManager_C::ChangeMaxDistance(float MaxDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeMaxDistance");
		
		ABP_FSDCameraManager_C_ChangeMaxDistance_Params params {};
		params.MaxDistance = MaxDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MaxSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FSDCameraManager_C::ChangeSpeed(float MaxSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeSpeed");
		
		ABP_FSDCameraManager_C_ChangeSpeed_Params params {};
		params.MaxSpeed = MaxSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.SmoothReturnVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewCameraLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_FSDCameraManager_C::SmoothReturnVelocity(const struct FVector& NewCameraLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.SmoothReturnVelocity");
		
		ABP_FSDCameraManager_C_SmoothReturnVelocity_Params params {};
		params.NewCameraLocation = NewCameraLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.SphereDirectionToPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FSDCameraManager_C::SphereDirectionToPlayer(struct FVector* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.SphereDirectionToPlayer");
		
		ABP_FSDCameraManager_C_SphereDirectionToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.SetToThirdPersonCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewCameraPosition                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FSDCameraManager_C::SetToThirdPersonCamera(struct FVector* NewCameraPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.SetToThirdPersonCamera");
		
		ABP_FSDCameraManager_C_SetToThirdPersonCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewCameraPosition != nullptr)
			*NewCameraPosition = params.NewCameraPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReturnCameraMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterCameraMode                               NewCameraMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FSDCameraManager_C::ReturnCameraMode(class APlayerCharacter* Target, ECharacterCameraMode NewCameraMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReturnCameraMode");
		
		ABP_FSDCameraManager_C_ReturnCameraMode_Params params {};
		params.Target = Target;
		params.NewCameraMode = NewCameraMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.PhotographyCameraModify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewCameraLocation                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PreviousCameraLocation                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OriginalCameraLocation                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ResultCameraLocation                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FSDCameraManager_C::PhotographyCameraModify(const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* ResultCameraLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.PhotographyCameraModify");
		
		ABP_FSDCameraManager_C_PhotographyCameraModify_Params params {};
		params.NewCameraLocation = NewCameraLocation;
		params.PreviousCameraLocation = PreviousCameraLocation;
		params.OriginalCameraLocation = OriginalCameraLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultCameraLocation != nullptr)
			*ResultCameraLocation = params.ResultCameraLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_FSDCameraManager_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveDestroyed");
		
		ABP_FSDCameraManager_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionEnd
	 * 		Flags  -> ()
	 */
	void ABP_FSDCameraManager_C::OnPhotographySessionEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionEnd");
		
		ABP_FSDCameraManager_C_OnPhotographySessionEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionStart
	 * 		Flags  -> ()
	 */
	void ABP_FSDCameraManager_C::OnPhotographySessionStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionStart");
		
		ABP_FSDCameraManager_C_OnPhotographySessionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FSDCameraManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveTick");
		
		ABP_FSDCameraManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FSDCameraManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveBeginPlay");
		
		ABP_FSDCameraManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.TogglePhotographyMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FSDCameraManager_C::TogglePhotographyMode(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.TogglePhotographyMode");
		
		ABP_FSDCameraManager_C_TogglePhotographyMode_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.Return Camera
	 * 		Flags  -> ()
	 */
	void ABP_FSDCameraManager_C::ReturnCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.Return Camera");
		
		ABP_FSDCameraManager_C_ReturnCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelSequence*                              LoaderLevelSequence                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FSDCameraManager_C::LoaderStart(class ULevelSequence* LoaderLevelSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStart");
		
		ABP_FSDCameraManager_C_LoaderStart_Params params {};
		params.LoaderLevelSequence = LoaderLevelSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStop
	 * 		Flags  -> ()
	 */
	void ABP_FSDCameraManager_C::LoaderStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStop");
		
		ABP_FSDCameraManager_C_LoaderStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.ExecuteUbergraph_BP_FSDCameraManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FSDCameraManager_C::ExecuteUbergraph_BP_FSDCameraManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ExecuteUbergraph_BP_FSDCameraManager");
		
		ABP_FSDCameraManager_C_ExecuteUbergraph_BP_FSDCameraManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.ShowHUDForPhotography__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_FSDCameraManager_C::ShowHUDForPhotography__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ShowHUDForPhotography__DelegateSignature");
		
		ABP_FSDCameraManager_C_ShowHUDForPhotography__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSDCameraManager.BP_FSDCameraManager_C.HideHUDForPhotography__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_FSDCameraManager_C::HideHUDForPhotography__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.HideHUDForPhotography__DelegateSignature");
		
		ABP_FSDCameraManager_C_HideHUDForPhotography__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FSDCameraManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FSDCameraManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FSDCameraManager.BP_FSDCameraManager_C");
		return ptr;
	}

}


