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
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_GetTPAnimationEventMesh
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* AWPN_SMG_OneHand_C::Receive_GetTPAnimationEventMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_GetTPAnimationEventMesh");
		
		AWPN_SMG_OneHand_C_Receive_GetTPAnimationEventMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_GetFPAnimationEventMesh
	 * 		Flags  -> ()
	 */
	class UFirstPersonStaticMeshComponent* AWPN_SMG_OneHand_C::Receive_GetFPAnimationEventMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_GetFPAnimationEventMesh");
		
		AWPN_SMG_OneHand_C_Receive_GetFPAnimationEventMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.GetElectrutionChance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Chance                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_SMG_OneHand_C::GetElectrutionChance(float* Chance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.GetElectrutionChance");
		
		AWPN_SMG_OneHand_C_GetElectrutionChance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Chance != nullptr)
			*Chance = params.Chance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_SMG_OneHand_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.GetGearStatEntry");
		
		AWPN_SMG_OneHand_C_GetGearStatEntry_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_SMG_OneHand_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.UserConstructionScript");
		
		AWPN_SMG_OneHand_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Recieve_UpdateMeshses
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFirstPerson                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_SMG_OneHand_C::Recieve_UpdateMeshses(bool IsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Recieve_UpdateMeshses");
		
		AWPN_SMG_OneHand_C_Recieve_UpdateMeshses_Params params {};
		params.IsFirstPerson = IsFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_SMG_OneHand_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ReceiveBeginPlay");
		
		AWPN_SMG_OneHand_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadBegin
	 * 		Flags  -> ()
	 */
	void AWPN_SMG_OneHand_C::Receive_ReloadBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadBegin");
		
		AWPN_SMG_OneHand_C_Receive_ReloadBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadEnd
	 * 		Flags  -> ()
	 */
	void AWPN_SMG_OneHand_C::Receive_ReloadEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadEnd");
		
		AWPN_SMG_OneHand_C_Receive_ReloadEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.CustomEvent1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_SMG_OneHand_C::CustomEvent1(class UItemUpgrade* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.CustomEvent1");
		
		AWPN_SMG_OneHand_C_CustomEvent1_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ElectriyPlatform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               alwaysPenetrate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_SMG_OneHand_C::ElectriyPlatform(const struct FHitResult& Hit, bool alwaysPenetrate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ElectriyPlatform");
		
		AWPN_SMG_OneHand_C_ElectriyPlatform_Params params {};
		params.Hit = Hit;
		params.alwaysPenetrate = alwaysPenetrate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Server_OnHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_SMG_OneHand_C::Server_OnHit(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Server_OnHit");
		
		AWPN_SMG_OneHand_C_Server_OnHit_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.OnSkinChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinEffect*                                 Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_SMG_OneHand_C::OnSkinChanged(class USkinEffect* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.OnSkinChanged");
		
		AWPN_SMG_OneHand_C_OnSkinChanged_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.RecieveUnequipped
	 * 		Flags  -> ()
	 */
	void AWPN_SMG_OneHand_C::RecieveUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.RecieveUnequipped");
		
		AWPN_SMG_OneHand_C_RecieveUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.StopEMDischargeCheck
	 * 		Flags  -> ()
	 */
	void AWPN_SMG_OneHand_C::StopEMDischargeCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.StopEMDischargeCheck");
		
		AWPN_SMG_OneHand_C_StopEMDischargeCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ExecuteUbergraph_WPN_SMG_OneHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_SMG_OneHand_C::ExecuteUbergraph_WPN_SMG_OneHand(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ExecuteUbergraph_WPN_SMG_OneHand");
		
		AWPN_SMG_OneHand_C_ExecuteUbergraph_WPN_SMG_OneHand_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_SMG_OneHand_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_SMG_OneHand_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_SMG_OneHand.WPN_SMG_OneHand_C");
		return ptr;
	}

}


