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
	 * 		Name   -> Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_CrossHair_PickAxe_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.PreConstruct");
		
		UHUD_CrossHair_PickAxe_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APickaxeItem*                                PickAxe                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CrossHair_PickAxe_C::SetData(class APickaxeItem* PickAxe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.SetData");
		
		UHUD_CrossHair_PickAxe_C_SetData_Params params {};
		params.PickAxe = PickAxe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.ExecuteUbergraph_HUD_CrossHair_PickAxe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CrossHair_PickAxe_C::ExecuteUbergraph_HUD_CrossHair_PickAxe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.ExecuteUbergraph_HUD_CrossHair_PickAxe");
		
		UHUD_CrossHair_PickAxe_C_ExecuteUbergraph_HUD_CrossHair_PickAxe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_CrossHair_PickAxe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_CrossHair_PickAxe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C");
		return ptr;
	}

}


