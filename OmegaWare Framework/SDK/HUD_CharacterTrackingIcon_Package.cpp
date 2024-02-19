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
	 * 		Name   -> Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_CharacterTrackingIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.PreConstruct");
		
		UHUD_CharacterTrackingIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.UpdateArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inView                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CharacterTrackingIcon_C::UpdateArrow(bool inView, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.UpdateArrow");
		
		UHUD_CharacterTrackingIcon_C_UpdateArrow_Params params {};
		params.inView = inView;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnShow
	 * 		Flags  -> ()
	 */
	void UHUD_CharacterTrackingIcon_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnShow");
		
		UHUD_CharacterTrackingIcon_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnInViewChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inView                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CharacterTrackingIcon_C::OnInViewChanged(bool inView, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnInViewChanged");
		
		UHUD_CharacterTrackingIcon_C_OnInViewChanged_Params params {};
		params.inView = inView;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnTargetSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CharacterTrackingIcon_C::OnTargetSet(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnTargetSet");
		
		UHUD_CharacterTrackingIcon_C_OnTargetSet_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnTargetDistanceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CharacterTrackingIcon_C::OnTargetDistanceChanged(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnTargetDistanceChanged");
		
		UHUD_CharacterTrackingIcon_C_OnTargetDistanceChanged_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnUpdateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_CharacterTrackingIcon_C::OnUpdateName(const class FString& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnUpdateName");
		
		UHUD_CharacterTrackingIcon_C_OnUpdateName_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnCharacterChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CharacterTrackingIcon_C::OnCharacterChanged(class APlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnCharacterChanged");
		
		UHUD_CharacterTrackingIcon_C_OnCharacterChanged_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnCharacterStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterState                                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CharacterTrackingIcon_C::OnCharacterStateChanged(ECharacterState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnCharacterStateChanged");
		
		UHUD_CharacterTrackingIcon_C_OnCharacterStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_CharacterTrackingIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.Construct");
		
		UHUD_CharacterTrackingIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.UpdateClassIcon
	 * 		Flags  -> ()
	 */
	void UHUD_CharacterTrackingIcon_C::UpdateClassIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.UpdateClassIcon");
		
		UHUD_CharacterTrackingIcon_C_UpdateClassIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.ExecuteUbergraph_HUD_CharacterTrackingIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CharacterTrackingIcon_C::ExecuteUbergraph_HUD_CharacterTrackingIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.ExecuteUbergraph_HUD_CharacterTrackingIcon");
		
		UHUD_CharacterTrackingIcon_C_ExecuteUbergraph_HUD_CharacterTrackingIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_CharacterTrackingIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_CharacterTrackingIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C");
		return ptr;
	}

}


