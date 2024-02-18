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
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.IsCreatureUnlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnemyMinersManualData*                      enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsUnlocked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_MinersManual_C::IsCreatureUnlocked(class UEnemyMinersManualData* enemy, bool* IsUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.IsCreatureUnlocked");
		
		U_MENU_MinersManual_C_IsCreatureUnlocked_Params params {};
		params.enemy = enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUnlocked != nullptr)
			*IsUnlocked = params.IsUnlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply U_MENU_MinersManual_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnKeyDown");
		
		U_MENU_MinersManual_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OpenPageInternal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMinersManualSection                               Section                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OpenPageInternal(EMinersManualSection Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OpenPageInternal");
		
		U_MENU_MinersManual_C_OpenPageInternal_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.GetButtonInfoFromSoftPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMM_ButtonInfo                              OutButton                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::GetButtonInfoFromSoftPage(struct FMM_ButtonInfo* OutButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.GetButtonInfoFromSoftPage");
		
		U_MENU_MinersManual_C_GetButtonInfoFromSoftPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutButton != nullptr)
			*OutButton = params.OutButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply U_MENU_MinersManual_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnMouseButtonUp");
		
		U_MENU_MinersManual_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply U_MENU_MinersManual_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnKeyUp");
		
		U_MENU_MinersManual_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.SelectOverview
	 * 		Flags  -> ()
	 */
	void U_MENU_MinersManual_C::SelectOverview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectOverview");
		
		U_MENU_MinersManual_C_SelectOverview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.LoadSinglePage
	 * 		Flags  -> ()
	 */
	void U_MENU_MinersManual_C::LoadSinglePage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.LoadSinglePage");
		
		U_MENU_MinersManual_C_LoadSinglePage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.SelectResourcesPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::SelectResourcesPage(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectResourcesPage");
		
		U_MENU_MinersManual_C_SelectResourcesPage_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.SelectBiome
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::SelectBiome(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectBiome");
		
		U_MENU_MinersManual_C_SelectBiome_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.SelectCreature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::SelectCreature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectCreature");
		
		U_MENU_MinersManual_C_SelectCreature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.SelectCombat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::SelectCombat(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectCombat");
		
		U_MENU_MinersManual_C_SelectCombat_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.SelectBasics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::SelectBasics(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectBasics");
		
		U_MENU_MinersManual_C_SelectBasics_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.SelectMissionType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::SelectMissionType(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectMissionType");
		
		U_MENU_MinersManual_C_SelectMissionType_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B51F0A3566
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OnLoaded_2761E01142014CAB4B0485B51F0A3566(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B51F0A3566");
		
		U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B51F0A3566_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8");
		
		U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BDAF081D51
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OnLoaded_E250F66347FD856DD4BCA4BDAF081D51(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BDAF081D51");
		
		U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BDAF081D51_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B52E4010C5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OnLoaded_2761E01142014CAB4B0485B52E4010C5(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B52E4010C5");
		
		U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B52E4010C5_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BD7D04604B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OnLoaded_E250F66347FD856DD4BCA4BD7D04604B(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BD7D04604B");
		
		U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BD7D04604B_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF");
		
		U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C56F864BC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OnLoaded_268D15ED4E2079C066017E9C56F864BC(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C56F864BC");
		
		U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9C56F864BC_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CF15F73D6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OnLoaded_268D15ED4E2079C066017E9CF15F73D6(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CF15F73D6");
		
		U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9CF15F73D6_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6");
		
		U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B59B3DD428
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OnLoaded_2761E01142014CAB4B0485B59B3DD428(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B59B3DD428");
		
		U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B59B3DD428_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CDF02186B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OnLoaded_268D15ED4E2079C066017E9CDF02186B(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CDF02186B");
		
		U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9CDF02186B_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CF666E15C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OnLoaded_268D15ED4E2079C066017E9CF666E15C(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CF666E15C");
		
		U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9CF666E15C_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C821EC396
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OnLoaded_268D15ED4E2079C066017E9C821EC396(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C821EC396");
		
		U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9C821EC396_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C0BF30CCE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OnLoaded_268D15ED4E2079C066017E9C0BF30CCE(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C0BF30CCE");
		
		U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9C0BF30CCE_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.SetLoreScreenContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULoreScreen_Master_C*                        InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::SetLoreScreenContent(class ULoreScreen_Master_C* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SetLoreScreenContent");
		
		U_MENU_MinersManual_C_SetLoreScreenContent_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.Construct
	 * 		Flags  -> ()
	 */
	void U_MENU_MinersManual_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.Construct");
		
		U_MENU_MinersManual_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_MinersManual_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.PreConstruct");
		
		U_MENU_MinersManual_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.ButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::ButtonClicked(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.ButtonClicked");
		
		U_MENU_MinersManual_C_ButtonClicked_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.SelectSection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMinersManualSection                               Section                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SelectFirst                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_MinersManual_C::SelectSection(EMinersManualSection Section, bool SelectFirst)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectSection");
		
		U_MENU_MinersManual_C_SelectSection_Params params {};
		params.Section = Section;
		params.SelectFirst = SelectFirst;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.SelectPageFromObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     IdentifyingObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::SelectPageFromObject(class UObject* IdentifyingObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectPageFromObject");
		
		U_MENU_MinersManual_C_SelectPageFromObject_Params params {};
		params.IdentifyingObject = IdentifyingObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.SelectSinglePage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMinersManualSinglePage                            page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::SelectSinglePage(EMinersManualSinglePage page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectSinglePage");
		
		U_MENU_MinersManual_C_SelectSinglePage_Params params {};
		params.page = page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.StepBack
	 * 		Flags  -> ()
	 */
	void U_MENU_MinersManual_C::StepBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.StepBack");
		
		U_MENU_MinersManual_C_StepBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.OpenFromSavegameID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMinersManualSection                               Section                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::OpenFromSavegameID(EMinersManualSection Section, const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OpenFromSavegameID");
		
		U_MENU_MinersManual_C_OpenFromSavegameID_Params params {};
		params.Section = Section;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_MinersManual._MENU_MinersManual_C.ExecuteUbergraph__MENU_MinersManual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_MinersManual_C::ExecuteUbergraph__MENU_MinersManual(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.ExecuteUbergraph__MENU_MinersManual");
		
		U_MENU_MinersManual_C_ExecuteUbergraph__MENU_MinersManual_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction U_MENU_MinersManual_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* U_MENU_MinersManual_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass _MENU_MinersManual._MENU_MinersManual_C");
		return ptr;
	}

}


