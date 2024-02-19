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
	 * 		Name   -> Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_MinersManualNotification_Manager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.Construct");
		
		UHUD_MinersManualNotification_Manager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.OnMinersManualNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMinersManualSection                               Section                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       ObjectID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_MinersManualNotification_Manager_C::OnMinersManualNotification(EMinersManualSection Section, const struct FGuid& ObjectID, const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.OnMinersManualNotification");
		
		UHUD_MinersManualNotification_Manager_C_OnMinersManualNotification_Params params {};
		params.Section = Section;
		params.ObjectID = ObjectID;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.ExecuteUbergraph_HUD_MinersManualNotification_Manager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_MinersManualNotification_Manager_C::ExecuteUbergraph_HUD_MinersManualNotification_Manager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.ExecuteUbergraph_HUD_MinersManualNotification_Manager");
		
		UHUD_MinersManualNotification_Manager_C_ExecuteUbergraph_HUD_MinersManualNotification_Manager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_MinersManualNotification_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_MinersManualNotification_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C");
		return ptr;
	}

}


