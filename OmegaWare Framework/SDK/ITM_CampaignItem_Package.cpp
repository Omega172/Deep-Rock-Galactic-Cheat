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
	 * 		Name   -> Function ITM_CampaignItem.ITM_CampaignItem_C.GetMissionIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  MissionIcon                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CampaignItem_C::GetMissionIcon(class UTexture2D** MissionIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem.ITM_CampaignItem_C.GetMissionIcon");
		
		UITM_CampaignItem_C_GetMissionIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissionIcon != nullptr)
			*MissionIcon = params.MissionIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CampaignItem.ITM_CampaignItem_C.Ping
	 * 		Flags  -> ()
	 */
	void UITM_CampaignItem_C::Ping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem.ITM_CampaignItem_C.Ping");
		
		UITM_CampaignItem_C_Ping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CampaignItem.ITM_CampaignItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CampaignItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem.ITM_CampaignItem_C.PreConstruct");
		
		UITM_CampaignItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CampaignItem.ITM_CampaignItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_CampaignItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem.ITM_CampaignItem_C.Construct");
		
		UITM_CampaignItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CampaignItem.ITM_CampaignItem_C.OnPingStarted
	 * 		Flags  -> ()
	 */
	void UITM_CampaignItem_C::OnPingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem.ITM_CampaignItem_C.OnPingStarted");
		
		UITM_CampaignItem_C_OnPingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CampaignItem.ITM_CampaignItem_C.OnPingFinished
	 * 		Flags  -> ()
	 */
	void UITM_CampaignItem_C::OnPingFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem.ITM_CampaignItem_C.OnPingFinished");
		
		UITM_CampaignItem_C_OnPingFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CampaignItem.ITM_CampaignItem_C.SetScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   CompletedScale                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ActiveScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CampaignItem_C::SetScale(const struct FVector2D& CompletedScale, const struct FVector2D& ActiveScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem.ITM_CampaignItem_C.SetScale");
		
		UITM_CampaignItem_C_SetScale_Params params {};
		params.CompletedScale = CompletedScale;
		params.ActiveScale = ActiveScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CampaignItem.ITM_CampaignItem_C.ExecuteUbergraph_ITM_CampaignItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CampaignItem_C::ExecuteUbergraph_ITM_CampaignItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem.ITM_CampaignItem_C.ExecuteUbergraph_ITM_CampaignItem");
		
		UITM_CampaignItem_C_ExecuteUbergraph_ITM_CampaignItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CampaignItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CampaignItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CampaignItem.ITM_CampaignItem_C");
		return ptr;
	}

}


