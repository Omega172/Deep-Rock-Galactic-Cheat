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
	 * 		Name   -> Function LoreScreen_Template.LoreScreen_Template_C.SetHeadline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        SetHeadline                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FObjectiveMissionIcon                       MissionIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ULoreScreen_Template_C::SetHeadline(const class FText& SetHeadline, class UTexture2D* Icon, const struct FObjectiveMissionIcon& MissionIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.SetHeadline");
		
		ULoreScreen_Template_C_SetHeadline_Params params {};
		params.SetHeadline = SetHeadline;
		params.Icon = Icon;
		params.MissionIcon = MissionIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Template.LoreScreen_Template_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoreScreen_Template_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.PreConstruct");
		
		ULoreScreen_Template_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMovie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoreScreen_Template_C::SetHeaderMovie(class UMediaSource* MediaSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMovie");
		
		ULoreScreen_Template_C_SetHeaderMovie_Params params {};
		params.MediaSource = MediaSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  HeaderImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Strech                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              VerticalFillPercent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseGradient                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoreScreen_Template_C::SetHeaderImage(class UTexture2D* HeaderImage, bool Strech, float VerticalFillPercent, bool UseGradient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderImage");
		
		ULoreScreen_Template_C_SetHeaderImage_Params params {};
		params.HeaderImage = HeaderImage;
		params.Strech = Strech;
		params.VerticalFillPercent = VerticalFillPercent;
		params.UseGradient = UseGradient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoreScreen_Template_C::SetHeaderMaterial(class UMaterialInterface* Material, const struct FVector2D& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMaterial");
		
		ULoreScreen_Template_C_SetHeaderMaterial_Params params {};
		params.Material = Material;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Template.LoreScreen_Template_C.OnOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULoreScreen_Template_C::OnOpened(const class FString& OpenedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.OnOpened");
		
		ULoreScreen_Template_C_OnOpened_Params params {};
		params.OpenedUrl = OpenedUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Template.LoreScreen_Template_C.ExecuteUbergraph_LoreScreen_Template
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoreScreen_Template_C::ExecuteUbergraph_LoreScreen_Template(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.ExecuteUbergraph_LoreScreen_Template");
		
		ULoreScreen_Template_C_ExecuteUbergraph_LoreScreen_Template_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Template.LoreScreen_Template_C.OnShown__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoreScreen_Template_C::OnShown__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.OnShown__DelegateSignature");
		
		ULoreScreen_Template_C_OnShown__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoreScreen_Template_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoreScreen_Template_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoreScreen_Template.LoreScreen_Template_C");
		return ptr;
	}

}


