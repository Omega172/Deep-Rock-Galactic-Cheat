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
	 * 		Name   -> Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APRJ_PlatformMaker_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__FinishedFunc");
		
		APRJ_PlatformMaker_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APRJ_PlatformMaker_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__UpdateFunc");
		
		APRJ_PlatformMaker_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.OnImpacted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PredictedImpact                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APRJ_PlatformMaker_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.OnImpacted");
		
		APRJ_PlatformMaker_C_OnImpacted_Params params {};
		params.PredictedImpact = PredictedImpact;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APRJ_PlatformMaker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ReceiveBeginPlay");
		
		APRJ_PlatformMaker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Set Carver mesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMesh*                                 Meshtouse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_PlatformMaker_C::SetCarvermesh(class UStaticMesh* Meshtouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Set Carver mesh");
		
		APRJ_PlatformMaker_C_SetCarvermesh_Params params {};
		params.Meshtouse = Meshtouse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.SetCarverMeshScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_PlatformMaker_C::SetCarverMeshScale(const struct FVector& Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.SetCarverMeshScale");
		
		APRJ_PlatformMaker_C_SetCarverMeshScale_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseLessFallDamageMaterial
	 * 		Flags  -> ()
	 */
	void APRJ_PlatformMaker_C::UseLessFallDamageMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseLessFallDamageMaterial");
		
		APRJ_PlatformMaker_C_UseLessFallDamageMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseBugRepellantMaterial
	 * 		Flags  -> ()
	 */
	void APRJ_PlatformMaker_C::UseBugRepellantMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseBugRepellantMaterial");
		
		APRJ_PlatformMaker_C_UseBugRepellantMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseFallDmgAndBugRepellant
	 * 		Flags  -> ()
	 */
	void APRJ_PlatformMaker_C::UseFallDmgAndBugRepellant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseFallDmgAndBugRepellant");
		
		APRJ_PlatformMaker_C_UseFallDmgAndBugRepellant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ExecuteUbergraph_PRJ_PlatformMaker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_PlatformMaker_C::ExecuteUbergraph_PRJ_PlatformMaker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ExecuteUbergraph_PRJ_PlatformMaker");
		
		APRJ_PlatformMaker_C_ExecuteUbergraph_PRJ_PlatformMaker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRJ_PlatformMaker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_PlatformMaker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_PlatformMaker.PRJ_PlatformMaker_C");
		return ptr;
	}

}


