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
	 * 		Name   -> Function BP_Shotgun_A_ShellTP.BP_Shotgun_A_ShellTP_C.Attached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Shotgun_A_ShellTP_C::Attached(class AActor* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Shotgun_A_ShellTP.BP_Shotgun_A_ShellTP_C.Attached");
		
		ABP_Shotgun_A_ShellTP_C_Attached_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Shotgun_A_ShellTP.BP_Shotgun_A_ShellTP_C.OnItemSkinned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinEffect*                                 Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Shotgun_A_ShellTP_C::OnItemSkinned(class USkinEffect* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Shotgun_A_ShellTP.BP_Shotgun_A_ShellTP_C.OnItemSkinned");
		
		ABP_Shotgun_A_ShellTP_C_OnItemSkinned_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Shotgun_A_ShellTP.BP_Shotgun_A_ShellTP_C.ExecuteUbergraph_BP_Shotgun_A_ShellTP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Shotgun_A_ShellTP_C::ExecuteUbergraph_BP_Shotgun_A_ShellTP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Shotgun_A_ShellTP.BP_Shotgun_A_ShellTP_C.ExecuteUbergraph_BP_Shotgun_A_ShellTP");
		
		ABP_Shotgun_A_ShellTP_C_ExecuteUbergraph_BP_Shotgun_A_ShellTP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Shotgun_A_ShellTP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Shotgun_A_ShellTP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shotgun_A_ShellTP.BP_Shotgun_A_ShellTP_C");
		return ptr;
	}

}


