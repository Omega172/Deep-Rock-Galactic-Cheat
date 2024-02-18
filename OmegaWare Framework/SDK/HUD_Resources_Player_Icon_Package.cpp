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
	 * 		Name   -> Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.UpdateIfChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Changed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Resources_Player_Icon_C::UpdateIfChanged(bool Changed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.UpdateIfChanged");
		
		UHUD_Resources_Player_Icon_C_UpdateIfChanged_Params params {};
		params.Changed = Changed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.SetAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ValueChanged                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Resources_Player_Icon_C::SetAmount(float Amount, bool* ValueChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.SetAmount");
		
		UHUD_Resources_Player_Icon_C_SetAmount_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValueChanged != nullptr)
			*ValueChanged = params.ValueChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Refresh
	 * 		Flags  -> ()
	 */
	void UHUD_Resources_Player_Icon_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Refresh");
		
		UHUD_Resources_Player_Icon_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.SetResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCappedResource*                             InResource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HideIfEmpty                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Resources_Player_Icon_C::SetResource(class UCappedResource* InResource, bool HideIfEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.SetResource");
		
		UHUD_Resources_Player_Icon_C_SetResource_Params params {};
		params.InResource = InResource;
		params.HideIfEmpty = HideIfEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCappedResource*                             Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Player_Icon_C::OnChanged(class UCappedResource* Resource, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnChanged");
		
		UHUD_Resources_Player_Icon_C_OnChanged_Params params {};
		params.Resource = Resource;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Resources_Player_Icon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.PreConstruct");
		
		UHUD_Resources_Player_Icon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Resources_Player_Icon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Construct");
		
		UHUD_Resources_Player_Icon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnOutroFinished
	 * 		Flags  -> ()
	 */
	void UHUD_Resources_Player_Icon_C::OnOutroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnOutroFinished");
		
		UHUD_Resources_Player_Icon_C_OnOutroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Player_Icon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Tick");
		
		UHUD_Resources_Player_Icon_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnIncreased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCappedResource*                             Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Player_Icon_C::OnIncreased(class UCappedResource* Resource, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnIncreased");
		
		UHUD_Resources_Player_Icon_C_OnIncreased_Params params {};
		params.Resource = Resource;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Init Resource
	 * 		Flags  -> ()
	 */
	void UHUD_Resources_Player_Icon_C::InitResource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Init Resource");
		
		UHUD_Resources_Player_Icon_C_InitResource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.ExecuteUbergraph_HUD_Resources_Player_Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Player_Icon_C::ExecuteUbergraph_HUD_Resources_Player_Icon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.ExecuteUbergraph_HUD_Resources_Player_Icon");
		
		UHUD_Resources_Player_Icon_C_ExecuteUbergraph_HUD_Resources_Player_Icon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnResourceChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUD_Resources_Player_Icon_C*                ResourceIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Resources_Player_Icon_C::OnResourceChanged__DelegateSignature(class UHUD_Resources_Player_Icon_C* ResourceIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnResourceChanged__DelegateSignature");
		
		UHUD_Resources_Player_Icon_C_OnResourceChanged__DelegateSignature_Params params {};
		params.ResourceIcon = ResourceIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Resources_Player_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Resources_Player_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C");
		return ptr;
	}

}


