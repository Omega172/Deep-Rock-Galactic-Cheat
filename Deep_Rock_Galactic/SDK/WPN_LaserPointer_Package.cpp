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
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.SetLaserBeamMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            InCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LaserPointer_C::SetLaserBeamMaterial(class APlayerCharacter* InCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.SetLaserBeamMaterial");
		
		AWPN_LaserPointer_C_SetLaserBeamMaterial_Params params {};
		params.InCharacter = InCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.SetBeamVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_LaserPointer_C::SetBeamVisibility(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.SetBeamVisibility");
		
		AWPN_LaserPointer_C_SetBeamVisibility_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.CanPlacePOI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture*                                    Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanPlace                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_LaserPointer_C::CanPlacePOI(const struct FVector& Location, class UTexture* Icon, bool* CanPlace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.CanPlacePOI");
		
		AWPN_LaserPointer_C_CanPlacePOI_Params params {};
		params.Location = Location;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPlace != nullptr)
			*CanPlace = params.CanPlace;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.UpdateBackgroundColor
	 * 		Flags  -> ()
	 */
	void AWPN_LaserPointer_C::UpdateBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.UpdateBackgroundColor");
		
		AWPN_LaserPointer_C_UpdateBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.SetBackgroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LaserPointer_C::SetBackgroundColor(const struct FLinearColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.SetBackgroundColor");
		
		AWPN_LaserPointer_C_SetBackgroundColor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.Adjust Beam
	 * 		Flags  -> ()
	 */
	void AWPN_LaserPointer_C::AdjustBeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.Adjust Beam");
		
		AWPN_LaserPointer_C_AdjustBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.GetPointTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  PointTransform                                             (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void AWPN_LaserPointer_C::GetPointTransform(struct FTransform* PointTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.GetPointTransform");
		
		AWPN_LaserPointer_C_GetPointTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PointTransform != nullptr)
			*PointTransform = params.PointTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_LaserPointer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.UserConstructionScript");
		
		AWPN_LaserPointer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveUnequipped
	 * 		Flags  -> ()
	 */
	void AWPN_LaserPointer_C::RecieveUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveUnequipped");
		
		AWPN_LaserPointer_C_RecieveUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.OnPointOfInterest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  TargetIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LaserPointer_C::OnPointOfInterest(class AActor* TargetActor, const struct FVector& TargetLocation, class UTexture2D* TargetIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.OnPointOfInterest");
		
		AWPN_LaserPointer_C_OnPointOfInterest_Params params {};
		params.TargetActor = TargetActor;
		params.TargetLocation = TargetLocation;
		params.TargetIcon = TargetIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_LaserPointer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveBeginPlay");
		
		AWPN_LaserPointer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.AddedToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            ItemOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LaserPointer_C::AddedToInventory(class APlayerCharacter* ItemOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.AddedToInventory");
		
		AWPN_LaserPointer_C_AddedToInventory_Params params {};
		params.ItemOwner = ItemOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.OnScanComplete
	 * 		Flags  -> ()
	 */
	void AWPN_LaserPointer_C::OnScanComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.OnScanComplete");
		
		AWPN_LaserPointer_C_OnScanComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.OnMarkerPlaced_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ELaserPointerTargetType                            TypeOfTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LaserPointer_C::OnMarkerPlaced_Event(const struct FVector& Location, const class FText& Name, const struct FLinearColor& Color, class AActor* Target, ELaserPointerTargetType TypeOfTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.OnMarkerPlaced_Event");
		
		AWPN_LaserPointer_C_OnMarkerPlaced_Event_Params params {};
		params.Location = Location;
		params.Name = Name;
		params.Color = Color;
		params.Target = Target;
		params.TypeOfTarget = TypeOfTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.ToggleLaserVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               aVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_LaserPointer_C::ToggleLaserVisible(bool aVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.ToggleLaserVisible");
		
		AWPN_LaserPointer_C_ToggleLaserVisible_Params params {};
		params.aVisible = aVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveEquipped
	 * 		Flags  -> ()
	 */
	void AWPN_LaserPointer_C::RecieveEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveEquipped");
		
		AWPN_LaserPointer_C_RecieveEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.OnPOIDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LaserPointer_C::OnPOIDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.OnPOIDestroyed");
		
		AWPN_LaserPointer_C_OnPOIDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LaserPointer_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveTick");
		
		AWPN_LaserPointer_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LaserPointer.WPN_LaserPointer_C.ExecuteUbergraph_WPN_LaserPointer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LaserPointer_C::ExecuteUbergraph_WPN_LaserPointer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.ExecuteUbergraph_WPN_LaserPointer");
		
		AWPN_LaserPointer_C_ExecuteUbergraph_WPN_LaserPointer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_LaserPointer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_LaserPointer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_LaserPointer.WPN_LaserPointer_C");
		return ptr;
	}

}


