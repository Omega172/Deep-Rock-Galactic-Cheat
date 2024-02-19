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
	 * 		Name   -> Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.SetPlayerData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InIcon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InIconTint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_ServerEntry_TeamLine_C::SetPlayerData(class UTexture2D* InIcon, const struct FLinearColor& InIconTint, const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.SetPlayerData");
		
		UITM_ServerEntry_TeamLine_C_SetPlayerData_Params params {};
		params.InIcon = InIcon;
		params.InIconTint = InIconTint;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_ServerEntry_TeamLine_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.PreConstruct");
		
		UITM_ServerEntry_TeamLine_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.ExecuteUbergraph_ITM_ServerEntry_TeamLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_ServerEntry_TeamLine_C::ExecuteUbergraph_ITM_ServerEntry_TeamLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.ExecuteUbergraph_ITM_ServerEntry_TeamLine");
		
		UITM_ServerEntry_TeamLine_C_ExecuteUbergraph_ITM_ServerEntry_TeamLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_ServerEntry_TeamLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_ServerEntry_TeamLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C");
		return ptr;
	}

}


