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
	 * 		Name   -> Function MAG_BaseClass.MAG_BaseClass_C.OnSpawnRelease_Attached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AMAG_BaseClass_C::OnSpawnRelease_Attached(class AActor* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MAG_BaseClass.MAG_BaseClass_C.OnSpawnRelease_Attached");
		
		AMAG_BaseClass_C_OnSpawnRelease_Attached_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MAG_BaseClass.MAG_BaseClass_C.OnSpawnRelease_Released
	 * 		Flags  -> ()
	 */
	bool AMAG_BaseClass_C::OnSpawnRelease_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MAG_BaseClass.MAG_BaseClass_C.OnSpawnRelease_Released");
		
		AMAG_BaseClass_C_OnSpawnRelease_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MAG_BaseClass.MAG_BaseClass_C.DoRelease
	 * 		Flags  -> ()
	 */
	void AMAG_BaseClass_C::DoRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MAG_BaseClass.MAG_BaseClass_C.DoRelease");
		
		AMAG_BaseClass_C_DoRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MAG_BaseClass.MAG_BaseClass_C.OnItemSkinned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinEffect*                                 Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMAG_BaseClass_C::OnItemSkinned(class USkinEffect* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MAG_BaseClass.MAG_BaseClass_C.OnItemSkinned");
		
		AMAG_BaseClass_C_OnItemSkinned_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MAG_BaseClass.MAG_BaseClass_C.ExecuteUbergraph_MAG_BaseClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMAG_BaseClass_C::ExecuteUbergraph_MAG_BaseClass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MAG_BaseClass.MAG_BaseClass_C.ExecuteUbergraph_MAG_BaseClass");
		
		AMAG_BaseClass_C_ExecuteUbergraph_MAG_BaseClass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMAG_BaseClass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMAG_BaseClass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MAG_BaseClass.MAG_BaseClass_C");
		return ptr;
	}

}


