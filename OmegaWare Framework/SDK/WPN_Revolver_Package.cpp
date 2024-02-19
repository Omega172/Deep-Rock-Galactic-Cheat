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
	 * 		Name   -> Function WPN_Revolver.WPN_Revolver_C.Receive_GetTPAnimationEventMesh
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* AWPN_Revolver_C::Receive_GetTPAnimationEventMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.Receive_GetTPAnimationEventMesh");
		
		AWPN_Revolver_C_Receive_GetTPAnimationEventMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Revolver.WPN_Revolver_C.Receive_GetFPAnimationEventMesh
	 * 		Flags  -> ()
	 */
	class UFirstPersonStaticMeshComponent* AWPN_Revolver_C::Receive_GetFPAnimationEventMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.Receive_GetFPAnimationEventMesh");
		
		AWPN_Revolver_C_Receive_GetFPAnimationEventMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Revolver.WPN_Revolver_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_Revolver_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.GetGearStatEntry");
		
		AWPN_Revolver_C_GetGearStatEntry_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Revolver.WPN_Revolver_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_Revolver_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.UserConstructionScript");
		
		AWPN_Revolver_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Revolver.WPN_Revolver_C.Receive_ReloadBegin
	 * 		Flags  -> ()
	 */
	void AWPN_Revolver_C::Receive_ReloadBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.Receive_ReloadBegin");
		
		AWPN_Revolver_C_Receive_ReloadBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Revolver.WPN_Revolver_C.Receive_ReloadEnd
	 * 		Flags  -> ()
	 */
	void AWPN_Revolver_C::Receive_ReloadEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.Receive_ReloadEnd");
		
		AWPN_Revolver_C_Receive_ReloadEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Revolver.WPN_Revolver_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_Revolver_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.ReceiveBeginPlay");
		
		AWPN_Revolver_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Revolver.WPN_Revolver_C.OnSpreadChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HorizontalSpread                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              VerticalSpread                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isAtRest                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_Revolver_C::OnSpreadChanged_Event_1(float HorizontalSpread, float VerticalSpread, bool isAtRest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.OnSpreadChanged_Event_1");
		
		AWPN_Revolver_C_OnSpreadChanged_Event_1_Params params {};
		params.HorizontalSpread = HorizontalSpread;
		params.VerticalSpread = VerticalSpread;
		params.isAtRest = isAtRest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Revolver.WPN_Revolver_C.OnSkinChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinEffect*                                 Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_Revolver_C::OnSkinChanged(class USkinEffect* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.OnSkinChanged");
		
		AWPN_Revolver_C_OnSkinChanged_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Revolver.WPN_Revolver_C.ExecuteUbergraph_WPN_Revolver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_Revolver_C::ExecuteUbergraph_WPN_Revolver(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.ExecuteUbergraph_WPN_Revolver");
		
		AWPN_Revolver_C_ExecuteUbergraph_WPN_Revolver_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_Revolver_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_Revolver_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_Revolver.WPN_Revolver_C");
		return ptr;
	}

}


