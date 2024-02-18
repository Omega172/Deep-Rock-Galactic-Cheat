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
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.SetIconAndTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Tint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_LaserPointerDisplay_C::SetIconAndTint(class UTexture2D* Texture, const struct FLinearColor& Tint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.SetIconAndTint");
		
		UHUD_LaserPointerDisplay_C_SetIconAndTint_Params params {};
		params.Texture = Texture;
		params.Tint = Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.UpdateCommands
	 * 		Flags  -> ()
	 */
	void UHUD_LaserPointerDisplay_C::UpdateCommands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.UpdateCommands");
		
		UHUD_LaserPointerDisplay_C_UpdateCommands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Finished_2FB3B1024A257294FCE363AC76E7AAF6
	 * 		Flags  -> ()
	 */
	void UHUD_LaserPointerDisplay_C::Finished_2FB3B1024A257294FCE363AC76E7AAF6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Finished_2FB3B1024A257294FCE363AC76E7AAF6");
		
		UHUD_LaserPointerDisplay_C_Finished_2FB3B1024A257294FCE363AC76E7AAF6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Point Of Interest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Tint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_LaserPointerDisplay_C::PointOfInterest(class UTexture2D* Texture, const struct FLinearColor& Tint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Point Of Interest");
		
		UHUD_LaserPointerDisplay_C_PointOfInterest_Params params {};
		params.Texture = Texture;
		params.Tint = Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_LaserPointerDisplay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.PreConstruct");
		
		UHUD_LaserPointerDisplay_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnBoscoChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABosco*                                      Bosco                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_LaserPointerDisplay_C::OnBoscoChanged(class ABosco* Bosco)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnBoscoChanged");
		
		UHUD_LaserPointerDisplay_C_OnBoscoChanged_Params params {};
		params.Bosco = Bosco;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StartScan
	 * 		Flags  -> ()
	 */
	void UHUD_LaserPointerDisplay_C::StartScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StartScan");
		
		UHUD_LaserPointerDisplay_C_StartScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StopScan
	 * 		Flags  -> ()
	 */
	void UHUD_LaserPointerDisplay_C::StopScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StopScan");
		
		UHUD_LaserPointerDisplay_C_StopScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnUnequipped
	 * 		Flags  -> ()
	 */
	void UHUD_LaserPointerDisplay_C::OnUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnUnequipped");
		
		UHUD_LaserPointerDisplay_C_OnUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Update Display
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLaserPointerData                           Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_LaserPointerDisplay_C::UpdateDisplay(const struct FHitResult& Hit, float Distance, const struct FLaserPointerData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Update Display");
		
		UHUD_LaserPointerDisplay_C_UpdateDisplay_Params params {};
		params.Hit = Hit;
		params.Distance = Distance;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnEquipped
	 * 		Flags  -> ()
	 */
	void UHUD_LaserPointerDisplay_C::OnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnEquipped");
		
		UHUD_LaserPointerDisplay_C_OnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_LaserPointerDisplay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Construct");
		
		UHUD_LaserPointerDisplay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StartShow
	 * 		Flags  -> ()
	 */
	void UHUD_LaserPointerDisplay_C::StartShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StartShow");
		
		UHUD_LaserPointerDisplay_C_StartShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ExecuteUbergraph_HUD_LaserPointerDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_LaserPointerDisplay_C::ExecuteUbergraph_HUD_LaserPointerDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ExecuteUbergraph_HUD_LaserPointerDisplay");
		
		UHUD_LaserPointerDisplay_C_ExecuteUbergraph_HUD_LaserPointerDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ScanComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_LaserPointerDisplay_C::ScanComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ScanComplete__DelegateSignature");
		
		UHUD_LaserPointerDisplay_C_ScanComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_LaserPointerDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_LaserPointerDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C");
		return ptr;
	}

}


