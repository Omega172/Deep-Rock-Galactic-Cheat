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
	 * 		Name   -> Function ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C.SetPlayerData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InIcon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InIconTint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SaveSlot_Entry_ClassIcon_C::SetPlayerData(class UTexture2D* InIcon, const struct FLinearColor& InIconTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C.SetPlayerData");
		
		UITM_SaveSlot_Entry_ClassIcon_C_SetPlayerData_Params params {};
		params.InIcon = InIcon;
		params.InIconTint = InIconTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_SaveSlot_Entry_ClassIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C.PreConstruct");
		
		UITM_SaveSlot_Entry_ClassIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C.ExecuteUbergraph_ITM_SaveSlot_Entry_ClassIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SaveSlot_Entry_ClassIcon_C::ExecuteUbergraph_ITM_SaveSlot_Entry_ClassIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C.ExecuteUbergraph_ITM_SaveSlot_Entry_ClassIcon");
		
		UITM_SaveSlot_Entry_ClassIcon_C_ExecuteUbergraph_ITM_SaveSlot_Entry_ClassIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_SaveSlot_Entry_ClassIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_SaveSlot_Entry_ClassIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C");
		return ptr;
	}

}


