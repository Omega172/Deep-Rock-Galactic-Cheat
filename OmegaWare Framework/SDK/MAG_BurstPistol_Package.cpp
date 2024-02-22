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
	 * 		Name   -> Function MAG_BurstPistol.MAG_BurstPistol_C.OnSpawnRelease_Attached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AMAG_BurstPistol_C::OnSpawnRelease_Attached(class AActor* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MAG_BurstPistol.MAG_BurstPistol_C.OnSpawnRelease_Attached");
		
		AMAG_BurstPistol_C_OnSpawnRelease_Attached_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MAG_BurstPistol.MAG_BurstPistol_C.OnSpawnRelease_Released
	 * 		Flags  -> ()
	 */
	bool AMAG_BurstPistol_C::OnSpawnRelease_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MAG_BurstPistol.MAG_BurstPistol_C.OnSpawnRelease_Released");
		
		AMAG_BurstPistol_C_OnSpawnRelease_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MAG_BurstPistol.MAG_BurstPistol_C.DoRelease
	 * 		Flags  -> ()
	 */
	void AMAG_BurstPistol_C::DoRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MAG_BurstPistol.MAG_BurstPistol_C.DoRelease");
		
		AMAG_BurstPistol_C_DoRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MAG_BurstPistol.MAG_BurstPistol_C.ExecuteUbergraph_MAG_BurstPistol
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMAG_BurstPistol_C::ExecuteUbergraph_MAG_BurstPistol(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MAG_BurstPistol.MAG_BurstPistol_C.ExecuteUbergraph_MAG_BurstPistol");
		
		AMAG_BurstPistol_C_ExecuteUbergraph_MAG_BurstPistol_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMAG_BurstPistol_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMAG_BurstPistol_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MAG_BurstPistol.MAG_BurstPistol_C");
		return ptr;
	}

}


