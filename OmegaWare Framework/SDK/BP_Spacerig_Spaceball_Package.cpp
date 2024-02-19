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
	 * 		Name   -> Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.UsedByClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            KickedBy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spacerig_Spaceball_C::UsedByClient(EInputKeys Key, class APlayerCharacter* KickedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.UsedByClient");
		
		ABP_Spacerig_Spaceball_C_UsedByClient_Params params {};
		params.Key = Key;
		params.KickedBy = KickedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.PlayKickAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Kicker                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spacerig_Spaceball_C::PlayKickAnim(class APlayerCharacter* Kicker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.PlayKickAnim");
		
		ABP_Spacerig_Spaceball_C_PlayKickAnim_Params params {};
		params.Kicker = Kicker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Spacerig_Spaceball_C::BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature");
		
		ABP_Spacerig_Spaceball_C_BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Spacerig_Spaceball_C::BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature");
		
		ABP_Spacerig_Spaceball_C_BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.Throw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spacerig_Spaceball_C::Throw(const struct FVector& force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.Throw");
		
		ABP_Spacerig_Spaceball_C_Throw_Params params {};
		params.force = force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__Collision_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Spacerig_Spaceball_C::BndEvt__Collision_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__Collision_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature");
		
		ABP_Spacerig_Spaceball_C_BndEvt__Collision_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__Collision_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Spacerig_Spaceball_C::BndEvt__Collision_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__Collision_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_Spacerig_Spaceball_C_BndEvt__Collision_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spacerig_Spaceball_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature");
		
		ABP_Spacerig_Spaceball_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spacerig_Spaceball_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature");
		
		ABP_Spacerig_Spaceball_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spacerig_Spaceball_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature");
		
		ABP_Spacerig_Spaceball_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_8_UsableChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Spacerig_Spaceball_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_8_UsableChangedSignature__DelegateSignature(bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_8_UsableChangedSignature__DelegateSignature");
		
		ABP_Spacerig_Spaceball_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_8_UsableChangedSignature__DelegateSignature_Params params {};
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.ShootBall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ChipValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spacerig_Spaceball_C::ShootBall(float ChipValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.ShootBall");
		
		ABP_Spacerig_Spaceball_C_ShootBall_Params params {};
		params.ChipValue = ChipValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.ExecuteUbergraph_BP_Spacerig_Spaceball
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spacerig_Spaceball_C::ExecuteUbergraph_BP_Spacerig_Spaceball(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C.ExecuteUbergraph_BP_Spacerig_Spaceball");
		
		ABP_Spacerig_Spaceball_C_ExecuteUbergraph_BP_Spacerig_Spaceball_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Spacerig_Spaceball_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Spacerig_Spaceball_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C");
		return ptr;
	}

}


