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
	 * 		Name   -> Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CollapseAndRemoveFromParent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkPlayerController_C::CollapseAndRemoveFromParent(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CollapseAndRemoveFromParent");
		
		ABP_NetworkPlayerController_C_CollapseAndRemoveFromParent_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetLoaderScreenUIClass
	 * 		Flags  -> ()
	 */
	class UClass* ABP_NetworkPlayerController_C::GetLoaderScreenUIClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetLoaderScreenUIClass");
		
		ABP_NetworkPlayerController_C_GetLoaderScreenUIClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CleanupUI
	 * 		Flags  -> ()
	 */
	void ABP_NetworkPlayerController_C::CleanupUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CleanupUI");
		
		ABP_NetworkPlayerController_C_CleanupUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetNonTakenHero
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          SelectedClass                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkPlayerController_C::GetNonTakenHero(class UPlayerCharacterID** SelectedClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetNonTakenHero");
		
		ABP_NetworkPlayerController_C_GetNonTakenHero_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedClass != nullptr)
			*SelectedClass = params.SelectedClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NetworkPlayerController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveBeginPlay");
		
		ABP_NetworkPlayerController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnBack
	 * 		Flags  -> ()
	 */
	void ABP_NetworkPlayerController_C::OnBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnBack");
		
		ABP_NetworkPlayerController_C_OnBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnPlayerCharacterPossesed_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkPlayerController_C::OnPlayerCharacterPossesed_Event(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnPlayerCharacterPossesed_Event");
		
		ABP_NetworkPlayerController_C_OnPlayerCharacterPossesed_Event_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_RequestNonTakenHero
	 * 		Flags  -> ()
	 */
	void ABP_NetworkPlayerController_C::Server_RequestNonTakenHero()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_RequestNonTakenHero");
		
		ABP_NetworkPlayerController_C_Server_RequestNonTakenHero_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Client_RecieveNonTakenHero
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          NewCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkPlayerController_C::Client_RecieveNonTakenHero(class UPlayerCharacterID* NewCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Client_RecieveNonTakenHero");
		
		ABP_NetworkPlayerController_C_Client_RecieveNonTakenHero_Params params {};
		params.NewCharacter = NewCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_SetCharacterSelected
	 * 		Flags  -> ()
	 */
	void ABP_NetworkPlayerController_C::Server_SetCharacterSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_SetCharacterSelected");
		
		ABP_NetworkPlayerController_C_Server_SetCharacterSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.RecievePreClientTravel
	 * 		Flags  -> ()
	 */
	void ABP_NetworkPlayerController_C::RecievePreClientTravel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.RecievePreClientTravel");
		
		ABP_NetworkPlayerController_C_RecievePreClientTravel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_NetworkPlayerController_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveDestroyed");
		
		ABP_NetworkPlayerController_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ShowReconnect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NetworkPlayerController_C::ShowReconnect(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ShowReconnect");
		
		ABP_NetworkPlayerController_C_ShowReconnect_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ExecuteUbergraph_BP_NetworkPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkPlayerController_C::ExecuteUbergraph_BP_NetworkPlayerController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ExecuteUbergraph_BP_NetworkPlayerController");
		
		ABP_NetworkPlayerController_C_ExecuteUbergraph_BP_NetworkPlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NetworkPlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NetworkPlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NetworkPlayerController.BP_NetworkPlayerController_C");
		return ptr;
	}

}


