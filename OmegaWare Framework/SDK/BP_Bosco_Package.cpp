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
	 * 		Name   -> Function BP_Bosco.BP_Bosco_C.Handle Projectile diffs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGearStatEntry                              Gearstat                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EItemPreviewStatus                                 Cryoupgradepreviewstatus                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDamageUpgrade                                     damageupgradetype                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             FSDplayerstate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              gearstatout                                                (Parm, OutParm)
	 */
	void ABP_Bosco_C::HandleProjectilediffs(const struct FGearStatEntry& Gearstat, EItemPreviewStatus Cryoupgradepreviewstatus, EDamageUpgrade damageupgradetype, class AFSDPlayerState* FSDplayerstate, struct FGearStatEntry* gearstatout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.Handle Projectile diffs");
		
		ABP_Bosco_C_HandleProjectilediffs_Params params {};
		params.Gearstat = Gearstat;
		params.Cryoupgradepreviewstatus = Cryoupgradepreviewstatus;
		params.damageupgradetype = damageupgradetype;
		params.FSDplayerstate = FSDplayerstate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (gearstatout != nullptr)
			*gearstatout = params.gearstatout;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bosco.BP_Bosco_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Bosco_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.GetGearStatEntry");
		
		ABP_Bosco_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function BP_Bosco.BP_Bosco_C.ScareEffect
	 * 		Flags  -> ()
	 */
	void ABP_Bosco_C::ScareEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.ScareEffect");
		
		ABP_Bosco_C_ScareEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bosco.BP_Bosco_C.OnTriggerAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TriggerName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Bosco_C::OnTriggerAI(const class FName& TriggerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.OnTriggerAI");
		
		ABP_Bosco_C_OnTriggerAI_Params params {};
		params.TriggerName = TriggerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bosco.BP_Bosco_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Bosco_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.ReceiveBeginPlay");
		
		ABP_Bosco_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bosco.BP_Bosco_C.OnMessageAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TriggerName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Bosco_C::OnMessageAI(const class FName& TriggerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.OnMessageAI");
		
		ABP_Bosco_C_OnMessageAI_Params params {};
		params.TriggerName = TriggerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bosco.BP_Bosco_C.SelfDestruct
	 * 		Flags  -> ()
	 */
	void ABP_Bosco_C::SelfDestruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.SelfDestruct");
		
		ABP_Bosco_C_SelfDestruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bosco.BP_Bosco_C.StateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDroneAIState                                      aCurrentState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Bosco_C::StateChanged(EDroneAIState aCurrentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.StateChanged");
		
		ABP_Bosco_C_StateChanged_Params params {};
		params.aCurrentState = aCurrentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bosco.BP_Bosco_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Bosco_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.ReceivePossessed");
		
		ABP_Bosco_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bosco.BP_Bosco_C.ExecuteUbergraph_BP_Bosco
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Bosco_C::ExecuteUbergraph_BP_Bosco(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.ExecuteUbergraph_BP_Bosco");
		
		ABP_Bosco_C_ExecuteUbergraph_BP_Bosco_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Bosco_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Bosco_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Bosco.BP_Bosco_C");
		return ptr;
	}

}


