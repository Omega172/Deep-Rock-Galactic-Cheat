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
	 * 		Name   -> Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTOOLTIP_Overclock_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.PreConstruct");
		
		UTOOLTIP_Overclock_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.SetOverclock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                Overclock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_Overclock_Item_C::SetOverclock(class UItemUpgrade* Overclock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.SetOverclock");
		
		UTOOLTIP_Overclock_Item_C_SetOverclock_Params params {};
		params.Overclock = Overclock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.ExecuteUbergraph_TOOLTIP_Overclock_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_Overclock_Item_C::ExecuteUbergraph_TOOLTIP_Overclock_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.ExecuteUbergraph_TOOLTIP_Overclock_Item");
		
		UTOOLTIP_Overclock_Item_C_ExecuteUbergraph_TOOLTIP_Overclock_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTOOLTIP_Overclock_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTOOLTIP_Overclock_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C");
		return ptr;
	}

}


