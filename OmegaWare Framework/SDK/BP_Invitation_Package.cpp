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
	 * 		Name   -> Function BP_Invitation.BP_Invitation_C.ReplyInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Reply                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Invitation_C::ReplyInvite(int32_t Reply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.ReplyInvite");
		
		UBP_Invitation_C_ReplyInvite_Params params {};
		params.Reply = Reply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Invitation.BP_Invitation_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDiscordUserDataSDK                         UserData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              TimeElapsed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Invitation_C::Initialize(const struct FDiscordUserDataSDK& UserData, float TimeElapsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.Initialize");
		
		UBP_Invitation_C_Initialize_Params params {};
		params.UserData = UserData;
		params.TimeElapsed = TimeElapsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Invitation.BP_Invitation_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_Invitation_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnKeyUp");
		
		UBP_Invitation_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function BP_Invitation.BP_Invitation_C.OnFail_1E7B4EA94EB1E25E604B80A4114A24A4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Invitation_C::OnFail_1E7B4EA94EB1E25E604B80A4114A24A4(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnFail_1E7B4EA94EB1E25E604B80A4114A24A4");
		
		UBP_Invitation_C_OnFail_1E7B4EA94EB1E25E604B80A4114A24A4_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Invitation.BP_Invitation_C.OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Invitation_C::OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4");
		
		UBP_Invitation_C_OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Invitation.BP_Invitation_C.Construct
	 * 		Flags  -> ()
	 */
	void UBP_Invitation_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.Construct");
		
		UBP_Invitation_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Invitation.BP_Invitation_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Invitation_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.Tick");
		
		UBP_Invitation_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Invitation.BP_Invitation_C.OnReadyImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Invitation_C::OnReadyImage(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnReadyImage");
		
		UBP_Invitation_C_OnReadyImage_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_Invitation_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBP_Invitation_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_Invitation_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UBP_Invitation_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Invitation.BP_Invitation_C.BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_Invitation_C::BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UBP_Invitation_C_BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Invitation.BP_Invitation_C.HideUIDelayed
	 * 		Flags  -> ()
	 */
	void UBP_Invitation_C::HideUIDelayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.HideUIDelayed");
		
		UBP_Invitation_C_HideUIDelayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Invitation.BP_Invitation_C.ExecuteUbergraph_BP_Invitation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Invitation_C::ExecuteUbergraph_BP_Invitation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.ExecuteUbergraph_BP_Invitation");
		
		UBP_Invitation_C_ExecuteUbergraph_BP_Invitation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Invitation.BP_Invitation_C.ImageReady__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Invitation_C::ImageReady__DelegateSignature(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.ImageReady__DelegateSignature");
		
		UBP_Invitation_C_ImageReady__DelegateSignature_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Invitation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Invitation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Invitation.BP_Invitation_C");
		return ptr;
	}

}


