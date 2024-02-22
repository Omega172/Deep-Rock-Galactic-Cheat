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
	 * 		Name   -> Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveCycledItem
	 * 		Flags  -> ()
	 */
	void AITM_SupplyDrop_C::RecieveCycledItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveCycledItem");
		
		AITM_SupplyDrop_C_RecieveCycledItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveEquipped
	 * 		Flags  -> ()
	 */
	void AITM_SupplyDrop_C::RecieveEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveEquipped");
		
		AITM_SupplyDrop_C_RecieveEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SupplyDrop.ITM_SupplyDrop_C.OnMarkerSpawned_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItemMarker*                                 Marker                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_SupplyDrop_C::OnMarkerSpawned_Event(class AItemMarker* Marker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SupplyDrop.ITM_SupplyDrop_C.OnMarkerSpawned_Event");
		
		AITM_SupplyDrop_C_OnMarkerSpawned_Event_Params params {};
		params.Marker = Marker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SupplyDrop.ITM_SupplyDrop_C.Update Widget
	 * 		Flags  -> ()
	 */
	void AITM_SupplyDrop_C::UpdateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SupplyDrop.ITM_SupplyDrop_C.Update Widget");
		
		AITM_SupplyDrop_C_UpdateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SupplyDrop.ITM_SupplyDrop_C.ReceiveItemPlacerSpawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemPlacerAggregator*                       InItemPlacer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_SupplyDrop_C::ReceiveItemPlacerSpawned(class UItemPlacerAggregator* InItemPlacer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SupplyDrop.ITM_SupplyDrop_C.ReceiveItemPlacerSpawned");
		
		AITM_SupplyDrop_C_ReceiveItemPlacerSpawned_Params params {};
		params.InItemPlacer = InItemPlacer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SupplyDrop.ITM_SupplyDrop_C.ExecuteUbergraph_ITM_SupplyDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_SupplyDrop_C::ExecuteUbergraph_ITM_SupplyDrop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SupplyDrop.ITM_SupplyDrop_C.ExecuteUbergraph_ITM_SupplyDrop");
		
		AITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AITM_SupplyDrop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AITM_SupplyDrop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ITM_SupplyDrop.ITM_SupplyDrop_C");
		return ptr;
	}

}


