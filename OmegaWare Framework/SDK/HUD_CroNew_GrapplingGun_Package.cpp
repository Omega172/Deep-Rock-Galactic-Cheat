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
	 * 		Name   -> Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.Recharging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CroNew_GrapplingGun_C::Recharging(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.Recharging");
		
		UHUD_CroNew_GrapplingGun_C_Recharging_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.ClearMessages
	 * 		Flags  -> ()
	 */
	void UHUD_CroNew_GrapplingGun_C::ClearMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.ClearMessages");
		
		UHUD_CroNew_GrapplingGun_C_ClearMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.DistanceMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Dist                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TooFar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_CroNew_GrapplingGun_C::DistanceMessage(float Dist, bool TooFar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.DistanceMessage");
		
		UHUD_CroNew_GrapplingGun_C_DistanceMessage_Params params {};
		params.Dist = Dist;
		params.TooFar = TooFar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.FailMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_CroNew_GrapplingGun_C::FailMessage(class FText* Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.FailMessage");
		
		UHUD_CroNew_GrapplingGun_C_FailMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Msg != nullptr)
			*Msg = params.Msg;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_CroNew_GrapplingGun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_CroNew_GrapplingGun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C");
		return ptr;
	}

}


