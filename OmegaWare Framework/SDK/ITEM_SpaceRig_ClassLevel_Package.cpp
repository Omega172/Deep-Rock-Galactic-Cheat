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
	 * 		Name   -> Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.Construct
	 * 		Flags  -> ()
	 */
	void UITEM_SpaceRig_ClassLevel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.Construct");
		
		UITEM_SpaceRig_ClassLevel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITEM_SpaceRig_ClassLevel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.PreConstruct");
		
		UITEM_SpaceRig_ClassLevel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.SetLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITEM_SpaceRig_ClassLevel_C::SetLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.SetLevel");
		
		UITEM_SpaceRig_ClassLevel_C_SetLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.ExecuteUbergraph_ITEM_SpaceRig_ClassLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITEM_SpaceRig_ClassLevel_C::ExecuteUbergraph_ITEM_SpaceRig_ClassLevel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.ExecuteUbergraph_ITEM_SpaceRig_ClassLevel");
		
		UITEM_SpaceRig_ClassLevel_C_ExecuteUbergraph_ITEM_SpaceRig_ClassLevel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITEM_SpaceRig_ClassLevel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITEM_SpaceRig_ClassLevel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C");
		return ptr;
	}

}


