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
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.CleanActors
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::CleanActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.CleanActors");
		
		ACharacterSelectionSwitcher_C_CleanActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetViewerActor
	 * 		Flags  -> ()
	 */
	class AActor* ACharacterSelectionSwitcher_C::GetViewerActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetViewerActor");
		
		ACharacterSelectionSwitcher_C_GetViewerActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RestartVanityIdleAnimMonatge
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::RestartVanityIdleAnimMonatge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RestartVanityIdleAnimMonatge");
		
		ACharacterSelectionSwitcher_C_RestartVanityIdleAnimMonatge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.CleanVictoryPoseStuff
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::CleanVictoryPoseStuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.CleanVictoryPoseStuff");
		
		ACharacterSelectionSwitcher_C_CleanVictoryPoseStuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.LoadVictoryPoseStuff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVictoryPose*                                VicPose                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::LoadVictoryPoseStuff(class UVictoryPose* VicPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.LoadVictoryPoseStuff");
		
		ACharacterSelectionSwitcher_C_LoadVictoryPoseStuff_Params params {};
		params.VicPose = VicPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.FindEndscreenActorPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            numplayers                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::FindEndscreenActorPos(int32_t numplayers, int32_t Index, class AActor** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.FindEndscreenActorPos");
		
		ACharacterSelectionSwitcher_C_FindEndscreenActorPos_Params params {};
		params.numplayers = numplayers;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DestroyPreviousSceneActors
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::DestroyPreviousSceneActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DestroyPreviousSceneActors");
		
		ACharacterSelectionSwitcher_C_DestroyPreviousSceneActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Add Yaw World Rotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Yaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::AddYawWorldRotation(float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Add Yaw World Rotation");
		
		ACharacterSelectionSwitcher_C_AddYawWorldRotation_Params params {};
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetPreviewItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemID*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::SetPreviewItem(class UItemID* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetPreviewItem");
		
		ACharacterSelectionSwitcher_C_SetPreviewItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SelectCameraLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharselectionCameraLocation                       Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::SelectCameraLocation(ECharselectionCameraLocation Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SelectCameraLocation");
		
		ACharacterSelectionSwitcher_C_SelectCameraLocation_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetActiveCharacter
	 * 		Flags  -> ()
	 */
	class APlayerCharacter* ACharacterSelectionSwitcher_C::GetActiveCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetActiveCharacter");
		
		ACharacterSelectionSwitcher_C_GetActiveCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RefreshCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharselectionCameraLocation                       SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::RefreshCharacter(ECharselectionCameraLocation SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RefreshCharacter");
		
		ACharacterSelectionSwitcher_C_RefreshCharacter_Params params {};
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnLoaded_516F3DE24C233C61C7A1519D88D99E0F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnLoaded_516F3DE24C233C61C7A1519D88D99E0F(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnLoaded_516F3DE24C233C61C7A1519D88D99E0F");
		
		ACharacterSelectionSwitcher_C_OnLoaded_516F3DE24C233C61C7A1519D88D99E0F_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnLoaded_516F3DE24C233C61C7A1519D1101C230
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnLoaded_516F3DE24C233C61C7A1519D1101C230(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnLoaded_516F3DE24C233C61C7A1519D1101C230");
		
		ACharacterSelectionSwitcher_C_OnLoaded_516F3DE24C233C61C7A1519D1101C230_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_B0CB40174FA1135597179392BE030FD1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnNotifyEnd_B0CB40174FA1135597179392BE030FD1(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_B0CB40174FA1135597179392BE030FD1");
		
		ACharacterSelectionSwitcher_C_OnNotifyEnd_B0CB40174FA1135597179392BE030FD1_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_B0CB40174FA1135597179392BE030FD1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnNotifyBegin_B0CB40174FA1135597179392BE030FD1(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_B0CB40174FA1135597179392BE030FD1");
		
		ACharacterSelectionSwitcher_C_OnNotifyBegin_B0CB40174FA1135597179392BE030FD1_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_B0CB40174FA1135597179392BE030FD1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnInterrupted_B0CB40174FA1135597179392BE030FD1(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_B0CB40174FA1135597179392BE030FD1");
		
		ACharacterSelectionSwitcher_C_OnInterrupted_B0CB40174FA1135597179392BE030FD1_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_B0CB40174FA1135597179392BE030FD1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnBlendOut_B0CB40174FA1135597179392BE030FD1(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_B0CB40174FA1135597179392BE030FD1");
		
		ACharacterSelectionSwitcher_C_OnBlendOut_B0CB40174FA1135597179392BE030FD1_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_B0CB40174FA1135597179392BE030FD1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnCompleted_B0CB40174FA1135597179392BE030FD1(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_B0CB40174FA1135597179392BE030FD1");
		
		ACharacterSelectionSwitcher_C_OnCompleted_B0CB40174FA1135597179392BE030FD1_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40");
		
		ACharacterSelectionSwitcher_C_OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40");
		
		ACharacterSelectionSwitcher_C_OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40");
		
		ACharacterSelectionSwitcher_C_OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40");
		
		ACharacterSelectionSwitcher_C_OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40");
		
		ACharacterSelectionSwitcher_C_OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943");
		
		ACharacterSelectionSwitcher_C_OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943");
		
		ACharacterSelectionSwitcher_C_OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943");
		
		ACharacterSelectionSwitcher_C_OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943");
		
		ACharacterSelectionSwitcher_C_OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943");
		
		ACharacterSelectionSwitcher_C_OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveBeginPlay");
		
		ACharacterSelectionSwitcher_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnShowCharacterSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		ECharselectionCameraLocation                       selectionLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnShowCharacterSelector(class UClass* NewCharacter, ECharselectionCameraLocation selectionLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnShowCharacterSelector");
		
		ACharacterSelectionSwitcher_C_OnShowCharacterSelector_Params params {};
		params.NewCharacter = NewCharacter;
		params.selectionLocation = selectionLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SwitchToWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WeaponIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::SwitchToWeapon(int32_t WeaponIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SwitchToWeapon");
		
		ACharacterSelectionSwitcher_C_SwitchToWeapon_Params params {};
		params.WeaponIndex = WeaponIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.EquipSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EquipSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::EquipSlot(int32_t EquipSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.EquipSlot");
		
		ACharacterSelectionSwitcher_C_EquipSlot_Params params {};
		params.EquipSlot = EquipSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartIdles
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::StartIdles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartIdles");
		
		ACharacterSelectionSwitcher_C_StartIdles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetIdleBreak
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::SetIdleBreak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetIdleBreak");
		
		ACharacterSelectionSwitcher_C_SetIdleBreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Hide
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Hide");
		
		ACharacterSelectionSwitcher_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Rotate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Pitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Yaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::Rotate(float Pitch, float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Rotate");
		
		ACharacterSelectionSwitcher_C_Rotate_Params params {};
		params.Pitch = Pitch;
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.VanityLoop
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::VanityLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.VanityLoop");
		
		ACharacterSelectionSwitcher_C_VanityLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DoStuff
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::DoStuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DoStuff");
		
		ACharacterSelectionSwitcher_C_DoStuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartVanityIdles
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::StartVanityIdles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartVanityIdles");
		
		ACharacterSelectionSwitcher_C_StartVanityIdles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVanityItemEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVanitySlot                                        Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnVanityItemEquipped(EVanitySlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVanityItemEquipped");
		
		ACharacterSelectionSwitcher_C_OnVanityItemEquipped_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowViewer3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		ECharselectionCameraLocation                       selectionLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::ShowViewer3D(class UClass* Actor, ECharselectionCameraLocation selectionLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowViewer3D");
		
		ACharacterSelectionSwitcher_C_ShowViewer3D_Params params {};
		params.Actor = Actor;
		params.selectionLocation = selectionLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Equip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      itemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		int32_t                                            EquipSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::Equip(class UClass* itemClass, int32_t EquipSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Equip");
		
		ACharacterSelectionSwitcher_C_Equip_Params params {};
		params.itemClass = itemClass;
		params.EquipSlot = EquipSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveTick");
		
		ACharacterSelectionSwitcher_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowEndScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterViewScene                         viewScene                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ACharacterSelectionSwitcher_C::ShowEndScreen(const struct FCharacterViewScene& viewScene)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowEndScreen");
		
		ACharacterSelectionSwitcher_C_ShowEndScreen_Params params {};
		params.viewScene = viewScene;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeLoop
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::ForgeLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeLoop");
		
		ACharacterSelectionSwitcher_C_ForgeLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeStart
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::ForgeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeStart");
		
		ACharacterSelectionSwitcher_C_ForgeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.BreakEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACharacterSelectionSwitcher_C::BreakEnd(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.BreakEnd");
		
		ACharacterSelectionSwitcher_C_BreakEnd_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeIdleLoop
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::ForgeIdleLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeIdleLoop");
		
		ACharacterSelectionSwitcher_C_ForgeIdleLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVictoryPoseChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVictoryPose*                                VictoryPose                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::OnVictoryPoseChanged(class UVictoryPose* VictoryPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVictoryPoseChanged");
		
		ACharacterSelectionSwitcher_C_OnVictoryPoseChanged_Params params {};
		params.VictoryPose = VictoryPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.PropPoseDone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACharacterSelectionSwitcher_C::PropPoseDone(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.PropPoseDone");
		
		ACharacterSelectionSwitcher_C_PropPoseDone_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.PoseDone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACharacterSelectionSwitcher_C::PoseDone(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.PoseDone");
		
		ACharacterSelectionSwitcher_C_PoseDone_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCharacterRefresh
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::OnCharacterRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCharacterRefresh");
		
		ACharacterSelectionSwitcher_C_OnCharacterRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SkipForging
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::SkipForging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SkipForging");
		
		ACharacterSelectionSwitcher_C_SkipForging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnForgingDone
	 * 		Flags  -> ()
	 */
	void ACharacterSelectionSwitcher_C::OnForgingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnForgingDone");
		
		ACharacterSelectionSwitcher_C_OnForgingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ExecuteUbergraph_CharacterSelectionSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterSelectionSwitcher_C::ExecuteUbergraph_CharacterSelectionSwitcher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ExecuteUbergraph_CharacterSelectionSwitcher");
		
		ACharacterSelectionSwitcher_C_ExecuteUbergraph_CharacterSelectionSwitcher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACharacterSelectionSwitcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACharacterSelectionSwitcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CharacterSelectionSwitcher.CharacterSelectionSwitcher_C");
		return ptr;
	}

}


