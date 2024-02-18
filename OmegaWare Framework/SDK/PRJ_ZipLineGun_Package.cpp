/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * 		Name   -> Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.GetNearestPointOnLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LineStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LineEnd                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NearestLinePosition                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_ZipLineGun_C::GetNearestPointOnLine(const struct FVector& WorldPosition, const struct FVector& LineStart, const struct FVector& LineEnd, struct FVector* NearestLinePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.GetNearestPointOnLine");
		
		APRJ_ZipLineGun_C_GetNearestPointOnLine_Params params {};
		params.WorldPosition = WorldPosition;
		params.LineStart = LineStart;
		params.LineEnd = LineEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NearestLinePosition != nullptr)
			*NearestLinePosition = params.NearestLinePosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.Finish Zip Line
	 * 		Flags  -> ()
	 */
	void APRJ_ZipLineGun_C::FinishZipLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.Finish Zip Line");
		
		APRJ_ZipLineGun_C_FinishZipLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APRJ_ZipLineGun_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.UserConstructionScript");
		
		APRJ_ZipLineGun_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.On Hit
	 * 		Flags  -> ()
	 */
	void APRJ_ZipLineGun_C::OnHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.On Hit");
		
		APRJ_ZipLineGun_C_OnHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.OnShoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_ZipLineGun_C::OnShoot(const struct FVector& Origin, const struct FVector& EndLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.OnShoot");
		
		APRJ_ZipLineGun_C_OnShoot_Params params {};
		params.Origin = Origin;
		params.EndLocation = EndLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.SetCollider
	 * 		Flags  -> ()
	 */
	void APRJ_ZipLineGun_C::SetCollider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.SetCollider");
		
		APRJ_ZipLineGun_C_SetCollider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_ZipLineGun_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveTick");
		
		APRJ_ZipLineGun_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APRJ_ZipLineGun_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveBeginPlay");
		
		APRJ_ZipLineGun_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.All_ConnectWithZipLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              VerticalSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_ZipLineGun_C::All_ConnectWithZipLine(const struct FVector& Location, float VerticalSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.All_ConnectWithZipLine");
		
		APRJ_ZipLineGun_C_All_ConnectWithZipLine_Params params {};
		params.Location = Location;
		params.VerticalSpeed = VerticalSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.BndEvt__PRJ_ZipLineGun_ZipLineUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_ZipLineGun_C::BndEvt__PRJ_ZipLineGun_ZipLineUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.BndEvt__PRJ_ZipLineGun_ZipLineUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");
		
		APRJ_ZipLineGun_C_BndEvt__PRJ_ZipLineGun_ZipLineUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ExecuteUbergraph_PRJ_ZipLineGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_ZipLineGun_C::ExecuteUbergraph_PRJ_ZipLineGun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ExecuteUbergraph_PRJ_ZipLineGun");
		
		APRJ_ZipLineGun_C_ExecuteUbergraph_PRJ_ZipLineGun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRJ_ZipLineGun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_ZipLineGun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_ZipLineGun.PRJ_ZipLineGun_C");
		return ptr;
	}

}


