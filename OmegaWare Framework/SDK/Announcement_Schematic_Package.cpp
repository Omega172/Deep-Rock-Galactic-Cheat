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
	 * 		Name   -> Function Announcement_Schematic.Announcement_Schematic_C.SetTitleProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Schematic_C::SetTitleProgress(float InProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Schematic.Announcement_Schematic_C.SetTitleProgress");
		
		UAnnouncement_Schematic_C_SetTitleProgress_Params params {};
		params.InProgress = InProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Schematic.Announcement_Schematic_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnnouncement_Schematic_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Schematic.Announcement_Schematic_C.PreConstruct");
		
		UAnnouncement_Schematic_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Schematic.Announcement_Schematic_C.Construct
	 * 		Flags  -> ()
	 */
	void UAnnouncement_Schematic_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Schematic.Announcement_Schematic_C.Construct");
		
		UAnnouncement_Schematic_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Schematic.Announcement_Schematic_C.OnAnnounceAnimFinished
	 * 		Flags  -> ()
	 */
	void UAnnouncement_Schematic_C::OnAnnounceAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Schematic.Announcement_Schematic_C.OnAnnounceAnimFinished");
		
		UAnnouncement_Schematic_C_OnAnnounceAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Schematic.Announcement_Schematic_C.ExecuteUbergraph_Announcement_Schematic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Schematic_C::ExecuteUbergraph_Announcement_Schematic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Schematic.Announcement_Schematic_C.ExecuteUbergraph_Announcement_Schematic");
		
		UAnnouncement_Schematic_C_ExecuteUbergraph_Announcement_Schematic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnnouncement_Schematic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnnouncement_Schematic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Announcement_Schematic.Announcement_Schematic_C");
		return ptr;
	}

}


