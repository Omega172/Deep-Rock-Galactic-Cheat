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
	 * 		Name   -> Function ITM_MatrixCore.ITM_MatrixCore_C.GetMatrixCoreToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_MatrixCore_C::GetMatrixCoreToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MatrixCore.ITM_MatrixCore_C.GetMatrixCoreToolTip");
		
		UITM_MatrixCore_C_GetMatrixCoreToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MatrixCore.ITM_MatrixCore_C.FromReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  InReward                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESchematicType                                     InRewardType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MatrixCore_C::FromReward(class USchematic* InReward, ESchematicType InRewardType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MatrixCore.ITM_MatrixCore_C.FromReward");
		
		UITM_MatrixCore_C_FromReward_Params params {};
		params.InReward = InReward;
		params.InRewardType = InRewardType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MatrixCore.ITM_MatrixCore_C.FromDeepDiveStage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            stageIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MatrixCore_C::FromDeepDiveStage(int32_t stageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MatrixCore.ITM_MatrixCore_C.FromDeepDiveStage");
		
		UITM_MatrixCore_C_FromDeepDiveStage_Params params {};
		params.stageIndex = stageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MatrixCore.ITM_MatrixCore_C.SetIconSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              IconSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MatrixCore_C::SetIconSize(float IconSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MatrixCore.ITM_MatrixCore_C.SetIconSize");
		
		UITM_MatrixCore_C_SetIconSize_Params params {};
		params.IconSize = IconSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MatrixCore.ITM_MatrixCore_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MatrixCore_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MatrixCore.ITM_MatrixCore_C.PreConstruct");
		
		UITM_MatrixCore_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MatrixCore.ITM_MatrixCore_C.ExecuteUbergraph_ITM_MatrixCore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MatrixCore_C::ExecuteUbergraph_ITM_MatrixCore(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MatrixCore.ITM_MatrixCore_C.ExecuteUbergraph_ITM_MatrixCore");
		
		UITM_MatrixCore_C_ExecuteUbergraph_ITM_MatrixCore_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MatrixCore_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MatrixCore_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MatrixCore.ITM_MatrixCore_C");
		return ptr;
	}

}


