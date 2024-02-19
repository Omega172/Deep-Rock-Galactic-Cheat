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
	 * 		Name   -> Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.SetMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAnnouncement_CollectedEverything_C::SetMessage(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.SetMessage");
		
		UAnnouncement_CollectedEverything_C_SetMessage_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnnouncement_CollectedEverything_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.PreConstruct");
		
		UAnnouncement_CollectedEverything_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.Construct
	 * 		Flags  -> ()
	 */
	void UAnnouncement_CollectedEverything_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.Construct");
		
		UAnnouncement_CollectedEverything_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.OnAnnounceAnimFinished
	 * 		Flags  -> ()
	 */
	void UAnnouncement_CollectedEverything_C::OnAnnounceAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.OnAnnounceAnimFinished");
		
		UAnnouncement_CollectedEverything_C_OnAnnounceAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.ExecuteUbergraph_Announcement_CollectedEverything
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_CollectedEverything_C::ExecuteUbergraph_Announcement_CollectedEverything(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.ExecuteUbergraph_Announcement_CollectedEverything");
		
		UAnnouncement_CollectedEverything_C_ExecuteUbergraph_Announcement_CollectedEverything_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnnouncement_CollectedEverything_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnnouncement_CollectedEverything_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Announcement_CollectedEverything.Announcement_CollectedEverything_C");
		return ptr;
	}

}


