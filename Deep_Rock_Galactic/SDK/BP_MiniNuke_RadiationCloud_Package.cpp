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
	 * 		Name   -> Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_MiniNuke_RadiationCloud_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.Timeline_0__FinishedFunc");
		
		ABP_MiniNuke_RadiationCloud_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_MiniNuke_RadiationCloud_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.Timeline_0__UpdateFunc");
		
		ABP_MiniNuke_RadiationCloud_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MiniNuke_RadiationCloud_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.ReceiveBeginPlay");
		
		ABP_MiniNuke_RadiationCloud_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.ExecuteUbergraph_BP_MiniNuke_RadiationCloud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiniNuke_RadiationCloud_C::ExecuteUbergraph_BP_MiniNuke_RadiationCloud(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C.ExecuteUbergraph_BP_MiniNuke_RadiationCloud");
		
		ABP_MiniNuke_RadiationCloud_C_ExecuteUbergraph_BP_MiniNuke_RadiationCloud_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MiniNuke_RadiationCloud_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MiniNuke_RadiationCloud_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniNuke_RadiationCloud.BP_MiniNuke_RadiationCloud_C");
		return ptr;
	}

}


