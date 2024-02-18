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
	 * 		Name   -> Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateLocked
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_ServerList_C::UpdateLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateLocked");
		
		UITM_DeepDives_ServerList_C_UpdateLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.JoinServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     InSession                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_DeepDives_ServerList_C::JoinServer(const struct FBlueprintSessionResult& InSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.JoinServer");
		
		UITM_DeepDives_ServerList_C_JoinServer_Params params {};
		params.InSession = InSession;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.FinishUpdate
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_ServerList_C::FinishUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.FinishUpdate");
		
		UITM_DeepDives_ServerList_C_FinishUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     ServerInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_DeepDives_ServerList_C::UpdateServer(const struct FBlueprintSessionResult& ServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateServer");
		
		UITM_DeepDives_ServerList_C_UpdateServer_Params params {};
		params.ServerInfo = ServerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.BeginUpdate
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_ServerList_C::BeginUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.BeginUpdate");
		
		UITM_DeepDives_ServerList_C_BeginUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDives_ServerList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.PreConstruct");
		
		UITM_DeepDives_ServerList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_DeepDives_ServerList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.Construct");
		
		UITM_DeepDives_ServerList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.OnIsUGCAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                CheckedPlayerState                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBlueprintableUserPrivileges                       CheckedPrivilege                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBlueprintablePrivilegeResults                     PrivilegeResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_ServerList_C::OnIsUGCAllowed(class APlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.OnIsUGCAllowed");
		
		UITM_DeepDives_ServerList_C_OnIsUGCAllowed_Params params {};
		params.CheckedPlayerState = CheckedPlayerState;
		params.CheckedPrivilege = CheckedPrivilege;
		params.PrivilegeResult = PrivilegeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.ExecuteUbergraph_ITM_DeepDives_ServerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDives_ServerList_C::ExecuteUbergraph_ITM_DeepDives_ServerList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.ExecuteUbergraph_ITM_DeepDives_ServerList");
		
		UITM_DeepDives_ServerList_C_ExecuteUbergraph_ITM_DeepDives_ServerList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.OnJoinServer__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_DeepDives_ServerList_C::OnJoinServer__DelegateSignature(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.OnJoinServer__DelegateSignature");
		
		UITM_DeepDives_ServerList_C_OnJoinServer__DelegateSignature_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_DeepDives_ServerList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_DeepDives_ServerList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C");
		return ptr;
	}

}


