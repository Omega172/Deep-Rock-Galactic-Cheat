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
	 * 		Name   -> Function LIB_ToolTips.LIB_ToolTips_C.CreateToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ToolTipTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ToolTipClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 OutToolTip                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_ToolTips_C::CreateToolTip(class UWidget* ToolTipTarget, class UClass* ToolTipClass, const struct FVector2D& Offset, class UObject* __WorldContext, class UUserWidget** OutToolTip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_ToolTips.LIB_ToolTips_C.CreateToolTip");
		
		ULIB_ToolTips_C_CreateToolTip_Params params {};
		params.ToolTipTarget = ToolTipTarget;
		params.ToolTipClass = ToolTipClass;
		params.Offset = Offset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutToolTip != nullptr)
			*OutToolTip = params.OutToolTip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_ToolTips.LIB_ToolTips_C.CreateBiomeToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Alignment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UResourceData*                               ResourceA                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UResourceData*                               ResourceB                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBiome_ToolTip_C*                            ToolTipWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_ToolTips_C::CreateBiomeToolTip(class UWidget* Target, const struct FVector2D& Position, const struct FVector2D& Alignment, class UResourceData* ResourceA, class UResourceData* ResourceB, class UObject* __WorldContext, class UBiome_ToolTip_C** ToolTipWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_ToolTips.LIB_ToolTips_C.CreateBiomeToolTip");
		
		ULIB_ToolTips_C_CreateBiomeToolTip_Params params {};
		params.Target = Target;
		params.Position = Position;
		params.Alignment = Alignment;
		params.ResourceA = ResourceA;
		params.ResourceB = ResourceB;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToolTipWidget != nullptr)
			*ToolTipWidget = params.ToolTipWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_ToolTips.LIB_ToolTips_C.CreateBasicToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FVector2D                                   Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Alignment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBasic_ToolTip_C*                            ToolTipWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_ToolTips_C::CreateBasicToolTip(class UWidget* Target, const class FText& Text, const struct FVector2D& Position, const struct FVector2D& Alignment, class UObject* __WorldContext, class UBasic_ToolTip_C** ToolTipWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_ToolTips.LIB_ToolTips_C.CreateBasicToolTip");
		
		ULIB_ToolTips_C_CreateBasicToolTip_Params params {};
		params.Target = Target;
		params.Text = Text;
		params.Position = Position;
		params.Alignment = Alignment;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToolTipWidget != nullptr)
			*ToolTipWidget = params.ToolTipWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULIB_ToolTips_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULIB_ToolTips_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LIB_ToolTips.LIB_ToolTips_C");
		return ptr;
	}

}


