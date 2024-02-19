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
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C.PreConstruct");
		
		UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CharacterLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C::SetData(int32_t CharacterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C.SetData");
		
		UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C_SetData_Params params {};
		params.CharacterLevel = CharacterLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C::ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock");
		
		UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C_ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C");
		return ptr;
	}

}


