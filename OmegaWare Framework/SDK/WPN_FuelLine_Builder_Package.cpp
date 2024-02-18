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
	 * 		Name   -> Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.GetMonitorWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_FuelLine_Builder_C*                      MonitorUI                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_FuelLine_Builder_C::GetMonitorWidget(class UUI_FuelLine_Builder_C** MonitorUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.GetMonitorWidget");
		
		AWPN_FuelLine_Builder_C_GetMonitorWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MonitorUI != nullptr)
			*MonitorUI = params.MonitorUI;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.ReceiveBeginPlaceSegment
	 * 		Flags  -> ()
	 */
	void AWPN_FuelLine_Builder_C::ReceiveBeginPlaceSegment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.ReceiveBeginPlaceSegment");
		
		AWPN_FuelLine_Builder_C_ReceiveBeginPlaceSegment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.ReceivePlacementUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InCanPlace                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InConnecting                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InDistanceProgress                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_FuelLine_Builder_C::ReceivePlacementUpdated(bool InCanPlace, bool InConnecting, float InDistanceProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.ReceivePlacementUpdated");
		
		AWPN_FuelLine_Builder_C_ReceivePlacementUpdated_Params params {};
		params.InCanPlace = InCanPlace;
		params.InConnecting = InConnecting;
		params.InDistanceProgress = InDistanceProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.ExecuteUbergraph_WPN_FuelLine_Builder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_FuelLine_Builder_C::ExecuteUbergraph_WPN_FuelLine_Builder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.ExecuteUbergraph_WPN_FuelLine_Builder");
		
		AWPN_FuelLine_Builder_C_ExecuteUbergraph_WPN_FuelLine_Builder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_FuelLine_Builder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_FuelLine_Builder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_FuelLine_Builder.WPN_FuelLine_Builder_C");
		return ptr;
	}

}


