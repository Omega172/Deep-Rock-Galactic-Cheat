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
	 * 		Name   -> Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOVERLAY_RetirementGranted_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PreConstruct");
		
		UOVERLAY_RetirementGranted_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Play
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          CharacterClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RetirementCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOVERLAY_RetirementGranted_C::Play(class UPlayerCharacterID* CharacterClass, int32_t RetirementCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Play");
		
		UOVERLAY_RetirementGranted_C_Play_Params params {};
		params.CharacterClass = CharacterClass;
		params.RetirementCount = RetirementCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Construct
	 * 		Flags  -> ()
	 */
	void UOVERLAY_RetirementGranted_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Construct");
		
		UOVERLAY_RetirementGranted_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnEnterFinished
	 * 		Flags  -> ()
	 */
	void UOVERLAY_RetirementGranted_C::OnEnterFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnEnterFinished");
		
		UOVERLAY_RetirementGranted_C_OnEnterFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnIntroFinished
	 * 		Flags  -> ()
	 */
	void UOVERLAY_RetirementGranted_C::OnIntroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnIntroFinished");
		
		UOVERLAY_RetirementGranted_C_OnIntroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PlayOutro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOVERLAY_RetirementGranted_C::PlayOutro(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PlayOutro");
		
		UOVERLAY_RetirementGranted_C_PlayOutro_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.ExecuteUbergraph_OVERLAY_RetirementGranted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOVERLAY_RetirementGranted_C::ExecuteUbergraph_OVERLAY_RetirementGranted(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.ExecuteUbergraph_OVERLAY_RetirementGranted");
		
		UOVERLAY_RetirementGranted_C_ExecuteUbergraph_OVERLAY_RetirementGranted_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOVERLAY_RetirementGranted_C::OnFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnFinished__DelegateSignature");
		
		UOVERLAY_RetirementGranted_C_OnFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOVERLAY_RetirementGranted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOVERLAY_RetirementGranted_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C");
		return ptr;
	}

}


