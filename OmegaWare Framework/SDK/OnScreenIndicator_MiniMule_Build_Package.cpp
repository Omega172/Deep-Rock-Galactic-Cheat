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
	 * 		Name   -> Function OnScreenIndicator_MiniMule_Build.OnScreenIndicator_MiniMule_Build_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOnScreenIndicator_MiniMule_Build_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_MiniMule_Build.OnScreenIndicator_MiniMule_Build_C.PreConstruct");
		
		UOnScreenIndicator_MiniMule_Build_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreenIndicator_MiniMule_Build.OnScreenIndicator_MiniMule_Build_C.ExecuteUbergraph_OnScreenIndicator_MiniMule_Build
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOnScreenIndicator_MiniMule_Build_C::ExecuteUbergraph_OnScreenIndicator_MiniMule_Build(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_MiniMule_Build.OnScreenIndicator_MiniMule_Build_C.ExecuteUbergraph_OnScreenIndicator_MiniMule_Build");
		
		UOnScreenIndicator_MiniMule_Build_C_ExecuteUbergraph_OnScreenIndicator_MiniMule_Build_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnScreenIndicator_MiniMule_Build_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnScreenIndicator_MiniMule_Build_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OnScreenIndicator_MiniMule_Build.OnScreenIndicator_MiniMule_Build_C");
		return ptr;
	}

}


