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
	 * 		Name   -> Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  PingSound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWarning_DefaultEntry_C::SetData(class UTexture2D* Texture, class USoundBase* PingSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.SetData");
		
		UHUDWarning_DefaultEntry_C_SetData_Params params {};
		params.Texture = Texture;
		params.PingSound = PingSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDWarning_DefaultEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.PreConstruct");
		
		UHUDWarning_DefaultEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.Ping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DestroyAfterPing                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDWarning_DefaultEntry_C::Ping(bool DestroyAfterPing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.Ping");
		
		UHUDWarning_DefaultEntry_C_Ping_Params params {};
		params.DestroyAfterPing = DestroyAfterPing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.PingFinished
	 * 		Flags  -> ()
	 */
	void UHUDWarning_DefaultEntry_C::PingFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.PingFinished");
		
		UHUDWarning_DefaultEntry_C_PingFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUDWarning_DefaultEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.Construct");
		
		UHUDWarning_DefaultEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.ExecuteUbergraph_HUDWarning_DefaultEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWarning_DefaultEntry_C::ExecuteUbergraph_HUDWarning_DefaultEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.ExecuteUbergraph_HUDWarning_DefaultEntry");
		
		UHUDWarning_DefaultEntry_C_ExecuteUbergraph_HUDWarning_DefaultEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDWarning_DefaultEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDWarning_DefaultEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C");
		return ptr;
	}

}


