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
	 * 		Name   -> Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.GetSeasonBarrelSpawnChance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Plague_BioTank_Big_C::GetSeasonBarrelSpawnChance(float* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.GetSeasonBarrelSpawnChance");
		
		ABP_Plague_BioTank_Big_C_GetSeasonBarrelSpawnChance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.UpdateMeshesForHolidays
	 * 		Flags  -> ()
	 */
	void ABP_Plague_BioTank_Big_C::UpdateMeshesForHolidays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.UpdateMeshesForHolidays");
		
		ABP_Plague_BioTank_Big_C_UpdateMeshesForHolidays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Plague_BioTank_Big_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.ReceiveBeginPlay");
		
		ABP_Plague_BioTank_Big_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Plague_BioTank_Big_C::BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");
		
		ABP_Plague_BioTank_Big_C_BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.OnKnock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Plague_BioTank_Big_C::OnKnock(class APlayerCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.OnKnock");
		
		ABP_Plague_BioTank_Big_C_OnKnock_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.All_BindGenericDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldReact                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldStartMC                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Plague_BioTank_Big_C::All_BindGenericDelegate(class APlayerCharacter* Player, bool ShouldReact, bool ShouldStartMC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.All_BindGenericDelegate");
		
		ABP_Plague_BioTank_Big_C_All_BindGenericDelegate_Params params {};
		params.Player = Player;
		params.ShouldReact = ShouldReact;
		params.ShouldStartMC = ShouldStartMC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.ExecuteUbergraph_BP_Plague_BioTank_Big
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Plague_BioTank_Big_C::ExecuteUbergraph_BP_Plague_BioTank_Big(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C.ExecuteUbergraph_BP_Plague_BioTank_Big");
		
		ABP_Plague_BioTank_Big_C_ExecuteUbergraph_BP_Plague_BioTank_Big_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Plague_BioTank_Big_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Plague_BioTank_Big_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Plague_BioTank_Big.BP_Plague_BioTank_Big_C");
		return ptr;
	}

}


