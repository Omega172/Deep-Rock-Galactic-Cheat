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
	 * 		Name   -> Function ITM_RetirementBadge.ITM_RetirementBadge_C.GetTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  AsTexture2D                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_RetirementBadge_C::GetTexture(int32_t Index, class UTexture2D** AsTexture2D)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.GetTexture");
		
		UITM_RetirementBadge_C_GetTexture_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsTexture2D != nullptr)
			*AsTexture2D = params.AsTexture2D;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetTimesRetired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TimesRetired                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_RetirementBadge_C::SetTimesRetired(int32_t TimesRetired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetTimesRetired");
		
		UITM_RetirementBadge_C_SetTimesRetired_Params params {};
		params.TimesRetired = TimesRetired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetCharacterClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_RetirementBadge_C::SetCharacterClass(class AFSDPlayerState* PlayerState, class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetCharacterClass");
		
		UITM_RetirementBadge_C_SetCharacterClass_Params params {};
		params.PlayerState = PlayerState;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RetirementBadge.ITM_RetirementBadge_C.SelectIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetirementLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_RetirementBadge_C::SelectIcon(int32_t RetirementLevel, class UTexture2D** Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.SelectIcon");
		
		UITM_RetirementBadge_C_SelectIcon_Params params {};
		params.RetirementLevel = RetirementLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_RetirementBadge_C::SetData(class AFSDPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetData");
		
		UITM_RetirementBadge_C_SetData_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RetirementBadge.ITM_RetirementBadge_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_RetirementBadge_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.PreConstruct");
		
		UITM_RetirementBadge_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RetirementBadge.ITM_RetirementBadge_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_RetirementBadge_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.Construct");
		
		UITM_RetirementBadge_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RetirementBadge.ITM_RetirementBadge_C.ExecuteUbergraph_ITM_RetirementBadge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_RetirementBadge_C::ExecuteUbergraph_ITM_RetirementBadge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.ExecuteUbergraph_ITM_RetirementBadge");
		
		UITM_RetirementBadge_C_ExecuteUbergraph_ITM_RetirementBadge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_RetirementBadge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_RetirementBadge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_RetirementBadge.ITM_RetirementBadge_C");
		return ptr;
	}

}


