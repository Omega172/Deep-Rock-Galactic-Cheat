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
	 * 		Name   -> Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PlasmaTrail_LineCutter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.ReceiveBeginPlay");
		
		ABP_PlasmaTrail_LineCutter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.SetLineWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlasmaTrail_LineCutter_C::SetLineWidth(float Width)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.SetLineWidth");
		
		ABP_PlasmaTrail_LineCutter_C_SetLineWidth_Params params {};
		params.Width = Width;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.ExecuteUbergraph_BP_PlasmaTrail_LineCutter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlasmaTrail_LineCutter_C::ExecuteUbergraph_BP_PlasmaTrail_LineCutter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.ExecuteUbergraph_BP_PlasmaTrail_LineCutter");
		
		ABP_PlasmaTrail_LineCutter_C_ExecuteUbergraph_BP_PlasmaTrail_LineCutter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlasmaTrail_LineCutter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlasmaTrail_LineCutter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C");
		return ptr;
	}

}


