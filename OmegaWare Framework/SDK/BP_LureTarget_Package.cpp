/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.GetIsTargetable
	 * 		Flags  -> ()
	 */
	bool ABP_LureTarget_C::GetIsTargetable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.GetIsTargetable");
		
		ABP_LureTarget_C_GetIsTargetable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.GetTargetCenterMass
	 * 		Flags  -> ()
	 */
	struct FVector ABP_LureTarget_C::GetTargetCenterMass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.GetTargetCenterMass");
		
		ABP_LureTarget_C_GetTargetCenterMass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.GetTargetHealthComponent
	 * 		Flags  -> ()
	 */
	class UHealthComponentBase* ABP_LureTarget_C::GetTargetHealthComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.GetTargetHealthComponent");
		
		ABP_LureTarget_C_GetTargetHealthComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.SetScaleDownLerp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Z                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LureTarget_C::SetScaleDownLerp(float Z, float Y, float X)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.SetScaleDownLerp");
		
		ABP_LureTarget_C_SetScaleDownLerp_Params params {};
		params.Z = Z;
		params.Y = Y;
		params.X = X;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.SetScaleUpLerp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Z                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LureTarget_C::SetScaleUpLerp(float Z, float Y, float X)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.SetScaleUpLerp");
		
		ABP_LureTarget_C_SetScaleUpLerp_Params params {};
		params.Z = Z;
		params.Y = Y;
		params.X = X;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.SetScaleLerpFromRandom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ZRandomConnection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              YRandomConnection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              XRandomConnection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LureTarget_C::SetScaleLerpFromRandom(float ZRandomConnection, float YRandomConnection, float XRandomConnection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.SetScaleLerpFromRandom");
		
		ABP_LureTarget_C_SetScaleLerpFromRandom_Params params {};
		params.ZRandomConnection = ZRandomConnection;
		params.YRandomConnection = YRandomConnection;
		params.XRandomConnection = XRandomConnection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_LureTarget_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.UserConstructionScript");
		
		ABP_LureTarget_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.GrowHologramZ__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_LureTarget_C::GrowHologramZ__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.GrowHologramZ__FinishedFunc");
		
		ABP_LureTarget_C_GrowHologramZ__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.GrowHologramZ__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_LureTarget_C::GrowHologramZ__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.GrowHologramZ__UpdateFunc");
		
		ABP_LureTarget_C_GrowHologramZ__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.Disappear__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_LureTarget_C::Disappear__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.Disappear__FinishedFunc");
		
		ABP_LureTarget_C_Disappear__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.Disappear__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_LureTarget_C::Disappear__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.Disappear__UpdateFunc");
		
		ABP_LureTarget_C_Disappear__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.Glitch__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_LureTarget_C::Glitch__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.Glitch__FinishedFunc");
		
		ABP_LureTarget_C_Glitch__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.Glitch__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_LureTarget_C::Glitch__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.Glitch__UpdateFunc");
		
		ABP_LureTarget_C_Glitch__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.Glitch2__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_LureTarget_C::Glitch2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.Glitch2__FinishedFunc");
		
		ABP_LureTarget_C_Glitch2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.Glitch2__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_LureTarget_C::Glitch2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.Glitch2__UpdateFunc");
		
		ABP_LureTarget_C_Glitch2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.GlitchAnimationRate__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_LureTarget_C::GlitchAnimationRate__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.GlitchAnimationRate__FinishedFunc");
		
		ABP_LureTarget_C_GlitchAnimationRate__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.GlitchAnimationRate__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_LureTarget_C::GlitchAnimationRate__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.GlitchAnimationRate__UpdateFunc");
		
		ABP_LureTarget_C_GlitchAnimationRate__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHealthComponentBase*                        HealthComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LureTarget_C::BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature");
		
		ABP_LureTarget_C_BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature_Params params {};
		params.HealthComponent = HealthComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LureTarget_C::BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature(float Health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature");
		
		ABP_LureTarget_C_BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature_Params params {};
		params.Health = Health;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_LureTarget_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.ReceiveBeginPlay");
		
		ABP_LureTarget_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.ShowDamageEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticleSystem*                             Particles                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Orientation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LureTarget_C::ShowDamageEffects(class UParticleSystem* Particles, const struct FVector& Location, const struct FRotator& Orientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.ShowDamageEffects");
		
		ABP_LureTarget_C_ShowDamageEffects_Params params {};
		params.Particles = Particles;
		params.Location = Location;
		params.Orientation = Orientation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LureTarget.BP_LureTarget_C.ExecuteUbergraph_BP_LureTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LureTarget_C::ExecuteUbergraph_BP_LureTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LureTarget.BP_LureTarget_C.ExecuteUbergraph_BP_LureTarget");
		
		ABP_LureTarget_C_ExecuteUbergraph_BP_LureTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LureTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LureTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LureTarget.BP_LureTarget_C");
		return ptr;
	}

}


