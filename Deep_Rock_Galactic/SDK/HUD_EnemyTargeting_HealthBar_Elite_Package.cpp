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
	 * 		Name   -> Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.GetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_EnemyTargeting_HealthBar_Elite_C::GetCharacter(class APlayerCharacter** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.GetCharacter");
		
		UHUD_EnemyTargeting_HealthBar_Elite_C_GetCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.Refresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_EnemyTargeting_HealthBar_Elite_C::Refresh(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.Refresh");
		
		UHUD_EnemyTargeting_HealthBar_Elite_C_Refresh_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_EnemyTargeting_HealthBar_Elite_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.PreConstruct");
		
		UHUD_EnemyTargeting_HealthBar_Elite_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.ReceiveNewTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InCurrentTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_EnemyTargeting_HealthBar_Elite_C::ReceiveNewTarget(class AActor* InCurrentTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.ReceiveNewTarget");
		
		UHUD_EnemyTargeting_HealthBar_Elite_C_ReceiveNewTarget_Params params {};
		params.InCurrentTarget = InCurrentTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.ReceiveUpdateTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InCurrentTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_EnemyTargeting_HealthBar_Elite_C::ReceiveUpdateTarget(class AActor* InCurrentTarget, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.ReceiveUpdateTarget");
		
		UHUD_EnemyTargeting_HealthBar_Elite_C_ReceiveUpdateTarget_Params params {};
		params.InCurrentTarget = InCurrentTarget;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_EnemyTargeting_HealthBar_Elite_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.Construct");
		
		UHUD_EnemyTargeting_HealthBar_Elite_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.ExecuteUbergraph_HUD_EnemyTargeting_HealthBar_Elite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_EnemyTargeting_HealthBar_Elite_C::ExecuteUbergraph_HUD_EnemyTargeting_HealthBar_Elite(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.ExecuteUbergraph_HUD_EnemyTargeting_HealthBar_Elite");
		
		UHUD_EnemyTargeting_HealthBar_Elite_C_ExecuteUbergraph_HUD_EnemyTargeting_HealthBar_Elite_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_EnemyTargeting_HealthBar_Elite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_EnemyTargeting_HealthBar_Elite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C");
		return ptr;
	}

}


