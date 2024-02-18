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
	 * 		Name   -> Function PRJ_GooProjectile_Fragment_Base.PRJ_GooProjectile_Fragment_Base_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void APRJ_GooProjectile_Fragment_Base_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_GooProjectile_Fragment_Base.PRJ_GooProjectile_Fragment_Base_C.OnInitialized");
		
		APRJ_GooProjectile_Fragment_Base_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_GooProjectile_Fragment_Base.PRJ_GooProjectile_Fragment_Base_C.ExecuteUbergraph_PRJ_GooProjectile_Fragment_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_GooProjectile_Fragment_Base_C::ExecuteUbergraph_PRJ_GooProjectile_Fragment_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_GooProjectile_Fragment_Base.PRJ_GooProjectile_Fragment_Base_C.ExecuteUbergraph_PRJ_GooProjectile_Fragment_Base");
		
		APRJ_GooProjectile_Fragment_Base_C_ExecuteUbergraph_PRJ_GooProjectile_Fragment_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRJ_GooProjectile_Fragment_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_GooProjectile_Fragment_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_GooProjectile_Fragment_Base.PRJ_GooProjectile_Fragment_Base_C");
		return ptr;
	}

}


