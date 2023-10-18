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
	 * 		Name   -> Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.PointsGathered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSpriteRect                                 InRect                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               OutGatheredPoints                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutPoints                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Obstacle_C::PointsGathered(const struct FSpriteRect& InRect, bool* OutGatheredPoints, int32_t* OutPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.PointsGathered");
		
		UUI_JettyBoots_Obstacle_C_PointsGathered_Params params {};
		params.InRect = InRect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGatheredPoints != nullptr)
			*OutGatheredPoints = params.OutGatheredPoints;
		if (OutPoints != nullptr)
			*OutPoints = params.OutPoints;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.CalculateColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_JettyBoots_Column_C*                     InColumn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStartX                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InGateWidth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InTop                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InBottom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSpriteRect                                 OutRect                                                    (Parm, OutParm, NoDestructor)
	 */
	void UUI_JettyBoots_Obstacle_C::CalculateColumn(class UUI_JettyBoots_Column_C* InColumn, int32_t InStartX, int32_t InGateWidth, float InTop, float InBottom, struct FSpriteRect* OutRect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.CalculateColumn");
		
		UUI_JettyBoots_Obstacle_C_CalculateColumn_Params params {};
		params.InColumn = InColumn;
		params.InStartX = InStartX;
		params.InGateWidth = InGateWidth;
		params.InTop = InTop;
		params.InBottom = InBottom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRect != nullptr)
			*OutRect = params.OutRect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.SetColumnRect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_JettyBoots_Column_C*                     Column                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSpriteRect                                 Rect                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              StartX                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Obstacle_C::SetColumnRect(class UUI_JettyBoots_Column_C* Column, const struct FSpriteRect& Rect, float StartX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.SetColumnRect");
		
		UUI_JettyBoots_Obstacle_C_SetColumnRect_Params params {};
		params.Column = Column;
		params.Rect = Rect;
		params.StartX = StartX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.OnInitialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRandomStream                               InRandom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		struct FJettyBootSetting                           InLevelSettings                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            InCanvasHeight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStartX                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsFirstGate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutStartX                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutEndX                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Obstacle_C::OnInitialize(struct FRandomStream* InRandom, const struct FJettyBootSetting& InLevelSettings, int32_t InCanvasHeight, int32_t InStartX, bool InIsFirstGate, int32_t* OutStartX, int32_t* OutEndX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.OnInitialize");
		
		UUI_JettyBoots_Obstacle_C_OnInitialize_Params params {};
		params.InLevelSettings = InLevelSettings;
		params.InCanvasHeight = InCanvasHeight;
		params.InStartX = InStartX;
		params.InIsFirstGate = InIsFirstGate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRandom != nullptr)
			*InRandom = params.InRandom;
		if (OutStartX != nullptr)
			*OutStartX = params.OutStartX;
		if (OutEndX != nullptr)
			*OutEndX = params.OutEndX;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRandomStream                               InRandom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		struct FJettyBootSetting                           InLevelSettings                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            InCanvasHeight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStartX                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsFirstGate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutEndX                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Obstacle_C::Init(struct FRandomStream* InRandom, const struct FJettyBootSetting& InLevelSettings, int32_t InCanvasHeight, int32_t InStartX, bool InIsFirstGate, int32_t* OutEndX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.Init");
		
		UUI_JettyBoots_Obstacle_C_Init_Params params {};
		params.InLevelSettings = InLevelSettings;
		params.InCanvasHeight = InCanvasHeight;
		params.InStartX = InStartX;
		params.InIsFirstGate = InIsFirstGate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRandom != nullptr)
			*InRandom = params.InRandom;
		if (OutEndX != nullptr)
			*OutEndX = params.OutEndX;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.Intersects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSpriteRect                                 InRect                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               OutIntersects                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Obstacle_C::Intersects(const struct FSpriteRect& InRect, bool* OutIntersects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.Intersects");
		
		UUI_JettyBoots_Obstacle_C_Intersects_Params params {};
		params.InRect = InRect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIntersects != nullptr)
			*OutIntersects = params.OutIntersects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Obstacle_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.PreConstruct");
		
		UUI_JettyBoots_Obstacle_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.ExecuteUbergraph_UI_JettyBoots_Obstacle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Obstacle_C::ExecuteUbergraph_UI_JettyBoots_Obstacle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.ExecuteUbergraph_UI_JettyBoots_Obstacle");
		
		UUI_JettyBoots_Obstacle_C_ExecuteUbergraph_UI_JettyBoots_Obstacle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_JettyBoots_Obstacle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_JettyBoots_Obstacle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C");
		return ptr;
	}

}


