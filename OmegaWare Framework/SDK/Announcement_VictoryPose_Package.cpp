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
	 * 		Name   -> Function Announcement_VictoryPose.Announcement_VictoryPose_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnnouncement_VictoryPose_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_VictoryPose.Announcement_VictoryPose_C.PreConstruct");
		
		UAnnouncement_VictoryPose_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_VictoryPose.Announcement_VictoryPose_C.Construct
	 * 		Flags  -> ()
	 */
	void UAnnouncement_VictoryPose_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_VictoryPose.Announcement_VictoryPose_C.Construct");
		
		UAnnouncement_VictoryPose_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_VictoryPose.Announcement_VictoryPose_C.OnAnnounceAnimFinished
	 * 		Flags  -> ()
	 */
	void UAnnouncement_VictoryPose_C::OnAnnounceAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_VictoryPose.Announcement_VictoryPose_C.OnAnnounceAnimFinished");
		
		UAnnouncement_VictoryPose_C_OnAnnounceAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_VictoryPose.Announcement_VictoryPose_C.ExecuteUbergraph_Announcement_VictoryPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_VictoryPose_C::ExecuteUbergraph_Announcement_VictoryPose(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_VictoryPose.Announcement_VictoryPose_C.ExecuteUbergraph_Announcement_VictoryPose");
		
		UAnnouncement_VictoryPose_C_ExecuteUbergraph_Announcement_VictoryPose_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnnouncement_VictoryPose_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnnouncement_VictoryPose_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Announcement_VictoryPose.Announcement_VictoryPose_C");
		return ptr;
	}

}


