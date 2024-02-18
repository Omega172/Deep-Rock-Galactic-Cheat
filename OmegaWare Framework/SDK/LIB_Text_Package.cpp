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
	 * 		Name   -> Function LIB_Text.LIB_Text_C.Select CharacterText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DrillerText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        GunnerText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ScoutText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        EngineerText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        BoscoText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        NoneText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void ULIB_Text_C::SelectCharacterText(class APlayerCharacter* Character, const class FText& DrillerText, const class FText& GunnerText, const class FText& ScoutText, const class FText& EngineerText, const class FText& BoscoText, const class FText& NoneText, class UObject* __WorldContext, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.Select CharacterText");
		
		ULIB_Text_C_SelectCharacterText_Params params {};
		params.Character = Character;
		params.DrillerText = DrillerText;
		params.GunnerText = GunnerText;
		params.ScoutText = ScoutText;
		params.EngineerText = EngineerText;
		params.BoscoText = BoscoText;
		params.NoneText = NoneText;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Text.LIB_Text_C.Select Character Class Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          CharacterClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DrillerText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        GunnerText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ScoutText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        EngineerText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        BoscoText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        NoneText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void ULIB_Text_C::SelectCharacterClassText(class UPlayerCharacterID* CharacterClass, const class FText& DrillerText, const class FText& GunnerText, const class FText& ScoutText, const class FText& EngineerText, const class FText& BoscoText, const class FText& NoneText, class UObject* __WorldContext, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.Select Character Class Text");
		
		ULIB_Text_C_SelectCharacterClassText_Params params {};
		params.CharacterClass = CharacterClass;
		params.DrillerText = DrillerText;
		params.GunnerText = GunnerText;
		params.ScoutText = ScoutText;
		params.EngineerText = EngineerText;
		params.BoscoText = BoscoText;
		params.NoneText = NoneText;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Text.LIB_Text_C.Select Character ID Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          characterID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DrillerText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        GunnerText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ScoutText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        EngineerText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        BoscoText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        NoneText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void ULIB_Text_C::SelectCharacterIDText(class UPlayerCharacterID* characterID, const class FText& DrillerText, const class FText& GunnerText, const class FText& ScoutText, const class FText& EngineerText, const class FText& BoscoText, const class FText& NoneText, class UObject* __WorldContext, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.Select Character ID Text");
		
		ULIB_Text_C_SelectCharacterIDText_Params params {};
		params.characterID = characterID;
		params.DrillerText = DrillerText;
		params.GunnerText = GunnerText;
		params.ScoutText = ScoutText;
		params.EngineerText = EngineerText;
		params.BoscoText = BoscoText;
		params.NoneText = NoneText;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Text.LIB_Text_C.GetTimeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Dividend                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void ULIB_Text_C::GetTimeText(float Dividend, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.GetTimeText");
		
		ULIB_Text_C_GetTimeText_Params params {};
		params.Dividend = Dividend;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Text.LIB_Text_C.SetTextCased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ENU_TextCase                                       TextCase                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Text_C::SetTextCased(class UTextBlock** Target, const class FText& InText, ENU_TextCase TextCase, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.SetTextCased");
		
		ULIB_Text_C_SetTextCased_Params params {};
		params.InText = InText;
		params.TextCase = TextCase;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Text.LIB_Text_C.GetFontSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  Label                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Size                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Text_C::GetFontSize(class UTextBlock** Label, class UObject* __WorldContext, int32_t* Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.GetFontSize");
		
		ULIB_Text_C_GetFontSize_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Label != nullptr)
			*Label = params.Label;
		if (Size != nullptr)
			*Size = params.Size;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Text.LIB_Text_C.SetFontSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  Label                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Text_C::SetFontSize(class UTextBlock** Label, int32_t NewSize, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.SetFontSize");
		
		ULIB_Text_C_SetFontSize_Params params {};
		params.NewSize = NewSize;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Label != nullptr)
			*Label = params.Label;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Text.LIB_Text_C.SetTextUpperCased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Text_C::SetTextUpperCased(class UTextBlock* Target, const class FText& InText, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.SetTextUpperCased");
		
		ULIB_Text_C_SetTextUpperCased_Params params {};
		params.Target = Target;
		params.InText = InText;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Text.LIB_Text_C.GetDisconnectReasonCaption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDisconnectReason                                  DisconnectReason                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void ULIB_Text_C::GetDisconnectReasonCaption(EDisconnectReason DisconnectReason, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.GetDisconnectReasonCaption");
		
		ULIB_Text_C_GetDisconnectReasonCaption_Params params {};
		params.DisconnectReason = DisconnectReason;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Text.LIB_Text_C.GetDisconnectReasonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDisconnectReason                                  DisconnectReason                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void ULIB_Text_C::GetDisconnectReasonText(EDisconnectReason DisconnectReason, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.GetDisconnectReasonText");
		
		ULIB_Text_C_GetDisconnectReasonText_Params params {};
		params.DisconnectReason = DisconnectReason;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULIB_Text_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULIB_Text_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LIB_Text.LIB_Text_C");
		return ptr;
	}

}


