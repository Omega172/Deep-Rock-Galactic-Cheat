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
	 * 		Name   -> Function GatlingGun_Overheat.GatlingGun_Overheat_C.SetPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGatlingGun_Overheat_C::SetPercent(float InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatlingGun_Overheat.GatlingGun_Overheat_C.SetPercent");
		
		UGatlingGun_Overheat_C_SetPercent_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatlingGun_Overheat.GatlingGun_Overheat_C.SetHeatValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HeatPercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               overHeated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGatlingGun_Overheat_C::SetHeatValue(float HeatPercentage, bool overHeated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatlingGun_Overheat.GatlingGun_Overheat_C.SetHeatValue");
		
		UGatlingGun_Overheat_C_SetHeatValue_Params params {};
		params.HeatPercentage = HeatPercentage;
		params.overHeated = overHeated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatlingGun_Overheat.GatlingGun_Overheat_C.Construct
	 * 		Flags  -> ()
	 */
	void UGatlingGun_Overheat_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatlingGun_Overheat.GatlingGun_Overheat_C.Construct");
		
		UGatlingGun_Overheat_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatlingGun_Overheat.GatlingGun_Overheat_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGatlingGun_Overheat_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatlingGun_Overheat.GatlingGun_Overheat_C.PreConstruct");
		
		UGatlingGun_Overheat_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatlingGun_Overheat.GatlingGun_Overheat_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGatlingGun_Overheat_C::Init(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatlingGun_Overheat.GatlingGun_Overheat_C.Init");
		
		UGatlingGun_Overheat_C_Init_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatlingGun_Overheat.GatlingGun_Overheat_C.OnEquipped
	 * 		Flags  -> ()
	 */
	void UGatlingGun_Overheat_C::OnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatlingGun_Overheat.GatlingGun_Overheat_C.OnEquipped");
		
		UGatlingGun_Overheat_C_OnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatlingGun_Overheat.GatlingGun_Overheat_C.OnUnequipped
	 * 		Flags  -> ()
	 */
	void UGatlingGun_Overheat_C::OnUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatlingGun_Overheat.GatlingGun_Overheat_C.OnUnequipped");
		
		UGatlingGun_Overheat_C_OnUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatlingGun_Overheat.GatlingGun_Overheat_C.ExecuteUbergraph_GatlingGun_Overheat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGatlingGun_Overheat_C::ExecuteUbergraph_GatlingGun_Overheat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatlingGun_Overheat.GatlingGun_Overheat_C.ExecuteUbergraph_GatlingGun_Overheat");
		
		UGatlingGun_Overheat_C_ExecuteUbergraph_GatlingGun_Overheat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGatlingGun_Overheat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGatlingGun_Overheat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GatlingGun_Overheat.GatlingGun_Overheat_C");
		return ptr;
	}

}


