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
	 * 		Name   -> Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.OnPlayerEnterLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WormholeLocation_OutsideBase_C::OnPlayerEnterLocation(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.OnPlayerEnterLocation");
		
		ABP_WormholeLocation_OutsideBase_C_OnPlayerEnterLocation_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.OnPlayerLeaveLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WormholeLocation_OutsideBase_C::OnPlayerLeaveLocation(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.OnPlayerLeaveLocation");
		
		ABP_WormholeLocation_OutsideBase_C_OnPlayerLeaveLocation_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.ExecuteUbergraph_BP_WormholeLocation_OutsideBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WormholeLocation_OutsideBase_C::ExecuteUbergraph_BP_WormholeLocation_OutsideBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.ExecuteUbergraph_BP_WormholeLocation_OutsideBase");
		
		ABP_WormholeLocation_OutsideBase_C_ExecuteUbergraph_BP_WormholeLocation_OutsideBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WormholeLocation_OutsideBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WormholeLocation_OutsideBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C");
		return ptr;
	}

}


