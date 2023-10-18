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
	 * 		Name   -> Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Trading_BasketItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.PreConstruct");
		
		UITM_Trading_BasketItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.SetResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Trading_BasketItem_C::SetResource(class UResourceData* Resource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.SetResource");
		
		UITM_Trading_BasketItem_C_SetResource_Params params {};
		params.Resource = Resource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.UpdateNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChangeAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DoAnim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoTadeAnim                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Trading_BasketItem_C::UpdateNumber(int32_t ChangeAmount, bool DoAnim, bool DoTadeAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.UpdateNumber");
		
		UITM_Trading_BasketItem_C_UpdateNumber_Params params {};
		params.ChangeAmount = ChangeAmount;
		params.DoAnim = DoAnim;
		params.DoTadeAnim = DoTadeAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Trading_BasketItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.Construct");
		
		UITM_Trading_BasketItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.OnIntroFinished
	 * 		Flags  -> ()
	 */
	void UITM_Trading_BasketItem_C::OnIntroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.OnIntroFinished");
		
		UITM_Trading_BasketItem_C_OnIntroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.ExecuteUbergraph_ITM_Trading_BasketItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Trading_BasketItem_C::ExecuteUbergraph_ITM_Trading_BasketItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.ExecuteUbergraph_ITM_Trading_BasketItem");
		
		UITM_Trading_BasketItem_C_ExecuteUbergraph_ITM_Trading_BasketItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Trading_BasketItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Trading_BasketItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Trading_BasketItem.ITM_Trading_BasketItem_C");
		return ptr;
	}

}


