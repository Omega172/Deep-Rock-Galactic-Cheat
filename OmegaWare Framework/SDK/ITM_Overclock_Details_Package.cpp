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
	 * 		Name   -> Function ITM_Overclock_Details.ITM_Overclock_Details_C.Clear
	 * 		Flags  -> ()
	 */
	void UITM_Overclock_Details_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclock_Details.ITM_Overclock_Details_C.Clear");
		
		UITM_Overclock_Details_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclock_Details.ITM_Overclock_Details_C.AddStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemUpgradeStatText                        InStat                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_Overclock_Details_C::AddStat(const struct FItemUpgradeStatText& InStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclock_Details.ITM_Overclock_Details_C.AddStat");
		
		UITM_Overclock_Details_C_AddStat_Params params {};
		params.InStat = InStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclock_Details.ITM_Overclock_Details_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                InUpgrade                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclock_Details_C::SetData(class UItemUpgrade* InUpgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclock_Details.ITM_Overclock_Details_C.SetData");
		
		UITM_Overclock_Details_C_SetData_Params params {};
		params.InUpgrade = InUpgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclock_Details.ITM_Overclock_Details_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Overclock_Details_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclock_Details.ITM_Overclock_Details_C.PreConstruct");
		
		UITM_Overclock_Details_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclock_Details.ITM_Overclock_Details_C.ExecuteUbergraph_ITM_Overclock_Details
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclock_Details_C::ExecuteUbergraph_ITM_Overclock_Details(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclock_Details.ITM_Overclock_Details_C.ExecuteUbergraph_ITM_Overclock_Details");
		
		UITM_Overclock_Details_C_ExecuteUbergraph_ITM_Overclock_Details_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Overclock_Details_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Overclock_Details_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Overclock_Details.ITM_Overclock_Details_C");
		return ptr;
	}

}


