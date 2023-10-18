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
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.HandleKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               OutHandled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FEventReply                                 OutReply                                                   (Parm, OutParm)
	 */
	void UITM_DeepDives_Join_C::HandleKeyDown(const struct FKeyEvent& KeyEvent, bool* OutHandled, struct FEventReply* OutReply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.HandleKeyDown");
		
		UITM_DeepDives_Join_C_HandleKeyDown_Params params {};
		params.KeyEvent = KeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHandled != nullptr)
			*OutHandled = params.OutHandled;
		if (OutReply != nullptr)
			*OutReply = params.OutReply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UITM_DeepDives_Join_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnKeyDown");
		
		UITM_DeepDives_Join_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.DisableProgressionModsandJoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_DeepDives_Join_C::DisableProgressionModsandJoin(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.DisableProgressionModsandJoin");
		
		UITM_DeepDives_Join_C_DisableProgressionModsandJoin_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.UpdateTextSearchAndGametypeFilter
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::UpdateTextSearchAndGametypeFilter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.UpdateTextSearchAndGametypeFilter");
		
		UITM_DeepDives_Join_C_UpdateTextSearchAndGametypeFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateServerViewsIfVisible
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::PopulateServerViewsIfVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateServerViewsIfVisible");
		
		UITM_DeepDives_Join_C_PopulateServerViewsIfVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateNext
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::PopulateNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateNext");
		
		UITM_DeepDives_Join_C_PopulateNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.ClearServerViews
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::ClearServerViews()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.ClearServerViews");
		
		UITM_DeepDives_Join_C_ClearServerViews_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateServerViews
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::PopulateServerViews()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateServerViews");
		
		UITM_DeepDives_Join_C_PopulateServerViews_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnFailure_1FB10C08435EA9BCE39BD9ABFF154396
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::OnFailure_1FB10C08435EA9BCE39BD9ABFF154396()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnFailure_1FB10C08435EA9BCE39BD9ABFF154396");
		
		UITM_DeepDives_Join_C_OnFailure_1FB10C08435EA9BCE39BD9ABFF154396_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnSuccess_1FB10C08435EA9BCE39BD9ABFF154396
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::OnSuccess_1FB10C08435EA9BCE39BD9ABFF154396()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnSuccess_1FB10C08435EA9BCE39BD9ABFF154396");
		
		UITM_DeepDives_Join_C_OnSuccess_1FB10C08435EA9BCE39BD9ABFF154396_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnFailure_0B5BC1CF422A3FBD05716A89A13443B1
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::OnFailure_0B5BC1CF422A3FBD05716A89A13443B1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnFailure_0B5BC1CF422A3FBD05716A89A13443B1");
		
		UITM_DeepDives_Join_C_OnFailure_0B5BC1CF422A3FBD05716A89A13443B1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnSuccess_0B5BC1CF422A3FBD05716A89A13443B1
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::OnSuccess_0B5BC1CF422A3FBD05716A89A13443B1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnSuccess_0B5BC1CF422A3FBD05716A89A13443B1");
		
		UITM_DeepDives_Join_C_OnSuccess_0B5BC1CF422A3FBD05716A89A13443B1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Construct");
		
		UITM_DeepDives_Join_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Open
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Open");
		
		UITM_DeepDives_Join_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ServerList_Regular_K2Node_ComponentBoundEvent_0_OnJoinServer__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_DeepDives_Join_C::BndEvt__ServerList_Regular_K2Node_ComponentBoundEvent_0_OnJoinServer__DelegateSignature(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ServerList_Regular_K2Node_ComponentBoundEvent_0_OnJoinServer__DelegateSignature");
		
		UITM_DeepDives_Join_C_BndEvt__ServerList_Regular_K2Node_ComponentBoundEvent_0_OnJoinServer__DelegateSignature_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ServerList_Hard_K2Node_ComponentBoundEvent_1_OnJoinServer__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_DeepDives_Join_C::BndEvt__ServerList_Hard_K2Node_ComponentBoundEvent_1_OnJoinServer__DelegateSignature(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ServerList_Hard_K2Node_ComponentBoundEvent_1_OnJoinServer__DelegateSignature");
		
		UITM_DeepDives_Join_C_BndEvt__ServerList_Hard_K2Node_ComponentBoundEvent_1_OnJoinServer__DelegateSignature_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnJoinServerClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     InSession                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_DeepDives_Join_C::OnJoinServerClicked(const struct FBlueprintSessionResult& InSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnJoinServerClicked");
		
		UITM_DeepDives_Join_C_OnJoinServerClicked_Params params {};
		params.InSession = InSession;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ITM_DeepDives_ServerFilters_K2Node_ComponentBoundEvent_2_OnSearchFiltersChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::BndEvt__ITM_DeepDives_ServerFilters_K2Node_ComponentBoundEvent_2_OnSearchFiltersChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ITM_DeepDives_ServerFilters_K2Node_ComponentBoundEvent_2_OnSearchFiltersChanged__DelegateSignature");
		
		UITM_DeepDives_Join_C_BndEvt__ITM_DeepDives_ServerFilters_K2Node_ComponentBoundEvent_2_OnSearchFiltersChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__WND_JoiningPassword_K2Node_ComponentBoundEvent_3_JoinWithPassword__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      Password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Join_C::BndEvt__WND_JoiningPassword_K2Node_ComponentBoundEvent_3_JoinWithPassword__DelegateSignature(const struct FBlueprintSessionResult& Session, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__WND_JoiningPassword_K2Node_ComponentBoundEvent_3_JoinWithPassword__DelegateSignature");
		
		UITM_DeepDives_Join_C_BndEvt__WND_JoiningPassword_K2Node_ComponentBoundEvent_3_JoinWithPassword__DelegateSignature_Params params {};
		params.Session = Session;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Close Waiting Window
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::CloseWaitingWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Close Waiting Window");
		
		UITM_DeepDives_Join_C_CloseWaitingWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Join Server
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      Password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Join_C::JoinServer(const struct FBlueprintSessionResult& Session, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Join Server");
		
		UITM_DeepDives_Join_C_JoinServer_Params params {};
		params.Session = Session;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UITM_DeepDives_Join_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__WND_JoiningModded_K2Node_ComponentBoundEvent_5_JoinModdedServer__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      Password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Join_C::BndEvt__WND_JoiningModded_K2Node_ComponentBoundEvent_5_JoinModdedServer__DelegateSignature(const struct FBlueprintSessionResult& Session, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__WND_JoiningModded_K2Node_ComponentBoundEvent_5_JoinModdedServer__DelegateSignature");
		
		UITM_DeepDives_Join_C_BndEvt__WND_JoiningModded_K2Node_ComponentBoundEvent_5_JoinModdedServer__DelegateSignature_Params params {};
		params.Session = Session;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.ModdedSaveLoaded
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::ModdedSaveLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.ModdedSaveLoaded");
		
		UITM_DeepDives_Join_C_ModdedSaveLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnBlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_Join_C::OnBlocked(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnBlocked");
		
		UITM_DeepDives_Join_C_OnBlocked_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Refresh
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Refresh");
		
		UITM_DeepDives_Join_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.ExecuteUbergraph_ITM_DeepDives_Join
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_Join_C::ExecuteUbergraph_ITM_DeepDives_Join(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.ExecuteUbergraph_ITM_DeepDives_Join");
		
		UITM_DeepDives_Join_C_ExecuteUbergraph_ITM_DeepDives_Join_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnJoining__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_Join_C::OnJoining__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnJoining__DelegateSignature");
		
		UITM_DeepDives_Join_C_OnJoining__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_DeepDives_Join_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_DeepDives_Join_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_DeepDives_Join.ITM_DeepDives_Join_C");
		return ptr;
	}

}


