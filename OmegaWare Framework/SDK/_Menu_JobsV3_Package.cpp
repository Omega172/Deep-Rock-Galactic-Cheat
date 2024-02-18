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
	 * 		Name   -> Function _Menu_JobsV3._Menu_JobsV3_C.HasCompletedIntro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutCompleted                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_Menu_JobsV3_C::HasCompletedIntro(bool* OutCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _Menu_JobsV3._Menu_JobsV3_C.HasCompletedIntro");
		
		U_Menu_JobsV3_C_HasCompletedIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCompleted != nullptr)
			*OutCompleted = params.OutCompleted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _Menu_JobsV3._Menu_JobsV3_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply U_Menu_JobsV3_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _Menu_JobsV3._Menu_JobsV3_C.OnKeyUp");
		
		U_Menu_JobsV3_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _Menu_JobsV3._Menu_JobsV3_C.RefreshJobs
	 * 		Flags  -> ()
	 */
	void U_Menu_JobsV3_C::RefreshJobs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _Menu_JobsV3._Menu_JobsV3_C.RefreshJobs");
		
		U_Menu_JobsV3_C_RefreshJobs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _Menu_JobsV3._Menu_JobsV3_C.AddJobEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaign*                                   Campaign                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_Menu_JobsV3_C::AddJobEntry(class UCampaign* Campaign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _Menu_JobsV3._Menu_JobsV3_C.AddJobEntry");
		
		U_Menu_JobsV3_C_AddJobEntry_Params params {};
		params.Campaign = Campaign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _Menu_JobsV3._Menu_JobsV3_C.GetFSDPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerController*                        AsFSDPlayerController                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_Menu_JobsV3_C::GetFSDPlayer(class AFSDPlayerController** AsFSDPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _Menu_JobsV3._Menu_JobsV3_C.GetFSDPlayer");
		
		U_Menu_JobsV3_C_GetFSDPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsFSDPlayerController != nullptr)
			*AsFSDPlayerController = params.AsFSDPlayerController;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _Menu_JobsV3._Menu_JobsV3_C.OnShown
	 * 		Flags  -> ()
	 */
	void U_Menu_JobsV3_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _Menu_JobsV3._Menu_JobsV3_C.OnShown");
		
		U_Menu_JobsV3_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _Menu_JobsV3._Menu_JobsV3_C.Back
	 * 		Flags  -> ()
	 */
	void U_Menu_JobsV3_C::Back()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _Menu_JobsV3._Menu_JobsV3_C.Back");
		
		U_Menu_JobsV3_C_Back_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _Menu_JobsV3._Menu_JobsV3_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_Menu_JobsV3_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _Menu_JobsV3._Menu_JobsV3_C.PreConstruct");
		
		U_Menu_JobsV3_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _Menu_JobsV3._Menu_JobsV3_C.Construct
	 * 		Flags  -> ()
	 */
	void U_Menu_JobsV3_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _Menu_JobsV3._Menu_JobsV3_C.Construct");
		
		U_Menu_JobsV3_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _Menu_JobsV3._Menu_JobsV3_C.OnCampaignCompleted_Event
	 * 		Flags  -> ()
	 */
	void U_Menu_JobsV3_C::OnCampaignCompleted_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _Menu_JobsV3._Menu_JobsV3_C.OnCampaignCompleted_Event");
		
		U_Menu_JobsV3_C_OnCampaignCompleted_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _Menu_JobsV3._Menu_JobsV3_C.BuildList
	 * 		Flags  -> ()
	 */
	void U_Menu_JobsV3_C::BuildList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _Menu_JobsV3._Menu_JobsV3_C.BuildList");
		
		U_Menu_JobsV3_C_BuildList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _Menu_JobsV3._Menu_JobsV3_C.ExecuteUbergraph__Menu_JobsV3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_Menu_JobsV3_C::ExecuteUbergraph__Menu_JobsV3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _Menu_JobsV3._Menu_JobsV3_C.ExecuteUbergraph__Menu_JobsV3");
		
		U_Menu_JobsV3_C_ExecuteUbergraph__Menu_JobsV3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction U_Menu_JobsV3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* U_Menu_JobsV3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass _Menu_JobsV3._Menu_JobsV3_C");
		return ptr;
	}

}


