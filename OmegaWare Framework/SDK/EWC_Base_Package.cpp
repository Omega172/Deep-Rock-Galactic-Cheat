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
	 * 		Name   -> Function EWC_Base.EWC_Base_C.OnLoaded_8674B549482B9237DC5FDA941DC11E00
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEWC_Base_C::OnLoaded_8674B549482B9237DC5FDA941DC11E00(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EWC_Base.EWC_Base_C.OnLoaded_8674B549482B9237DC5FDA941DC11E00");
		
		UEWC_Base_C_OnLoaded_8674B549482B9237DC5FDA941DC11E00_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EWC_Base.EWC_Base_C.OnLoaded_8674B549482B9237DC5FDA94C82046A5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEWC_Base_C::OnLoaded_8674B549482B9237DC5FDA94C82046A5(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EWC_Base.EWC_Base_C.OnLoaded_8674B549482B9237DC5FDA94C82046A5");
		
		UEWC_Base_C_OnLoaded_8674B549482B9237DC5FDA94C82046A5_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EWC_Base.EWC_Base_C.PlayWaveMusac
	 * 		Flags  -> ()
	 */
	void UEWC_Base_C::PlayWaveMusac()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EWC_Base.EWC_Base_C.PlayWaveMusac");
		
		UEWC_Base_C_PlayWaveMusac_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EWC_Base.EWC_Base_C.PlayEndWaveMusic
	 * 		Flags  -> ()
	 */
	void UEWC_Base_C::PlayEndWaveMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EWC_Base.EWC_Base_C.PlayEndWaveMusic");
		
		UEWC_Base_C_PlayEndWaveMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EWC_Base.EWC_Base_C.StopWaveMusac
	 * 		Flags  -> ()
	 */
	void UEWC_Base_C::StopWaveMusac()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EWC_Base.EWC_Base_C.StopWaveMusac");
		
		UEWC_Base_C_StopWaveMusac_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EWC_Base.EWC_Base_C.ExecuteUbergraph_EWC_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEWC_Base_C::ExecuteUbergraph_EWC_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EWC_Base.EWC_Base_C.ExecuteUbergraph_EWC_Base");
		
		UEWC_Base_C_ExecuteUbergraph_EWC_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEWC_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEWC_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EWC_Base.EWC_Base_C");
		return ptr;
	}

}


