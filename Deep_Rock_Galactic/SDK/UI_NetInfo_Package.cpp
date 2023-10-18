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
	 * 		Name   -> Function UI_NetInfo.UI_NetInfo_C.GetPktLossString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Names                                                      (Parm, OutParm)
	 * 		class FText                                        PktLossIn                                                  (Parm, OutParm)
	 * 		class FText                                        PktLossOut                                                 (Parm, OutParm)
	 * 		class FText                                        Ping                                                       (Parm, OutParm)
	 * 		class FText                                        Jitter                                                     (Parm, OutParm)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_NetInfo_C::GetPktLossString(class FText* Names, class FText* PktLossIn, class FText* PktLossOut, class FText* Ping, class FText* Jitter, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.GetPktLossString");
		
		UUI_NetInfo_C_GetPktLossString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Names != nullptr)
			*Names = params.Names;
		if (PktLossIn != nullptr)
			*PktLossIn = params.PktLossIn;
		if (PktLossOut != nullptr)
			*PktLossOut = params.PktLossOut;
		if (Ping != nullptr)
			*Ping = params.Ping;
		if (Jitter != nullptr)
			*Jitter = params.Jitter;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NetInfo.UI_NetInfo_C.GetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerController*                        PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_NetInfo_C::GetPlayerName(class AFSDPlayerController* PlayerController, class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.GetPlayerName");
		
		UUI_NetInfo_C_GetPlayerName_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NetInfo.UI_NetInfo_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_NetInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.PreConstruct");
		
		UUI_NetInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NetInfo.UI_NetInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_NetInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.Construct");
		
		UUI_NetInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NetInfo.UI_NetInfo_C.SlowTick
	 * 		Flags  -> ()
	 */
	void UUI_NetInfo_C::SlowTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.SlowTick");
		
		UUI_NetInfo_C_SlowTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NetInfo.UI_NetInfo_C.OnNetInfoLevelChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NetInfo_C::OnNetInfoLevelChanged(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.OnNetInfoLevelChanged");
		
		UUI_NetInfo_C_OnNetInfoLevelChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NetInfo.UI_NetInfo_C.ExecuteUbergraph_UI_NetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NetInfo_C::ExecuteUbergraph_UI_NetInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.ExecuteUbergraph_UI_NetInfo");
		
		UUI_NetInfo_C_ExecuteUbergraph_UI_NetInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_NetInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_NetInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_NetInfo.UI_NetInfo_C");
		return ptr;
	}

}


