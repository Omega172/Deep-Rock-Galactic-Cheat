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
	 * 		Name   -> Function DSTelemetry.DJSONArray.CreateJSONArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDJSONArray* UDJSONArray::CreateJSONArray(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.CreateJSONArray");
		
		UDJSONArray_CreateJSONArray_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.Clear
	 * 		Flags  -> ()
	 */
	bool UDJSONArray::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.Clear");
		
		UDJSONArray_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.AsString
	 * 		Flags  -> ()
	 */
	class FString UDJSONArray::AsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AsString");
		
		UDJSONArray_AsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddStringItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Item                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddStringItem(const class FString& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddStringItem");
		
		UDJSONArray_AddStringItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddStringArrayItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Item                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddStringArrayItem(TArray<class FString> Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddStringArrayItem");
		
		UDJSONArray_AddStringArrayItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddJSONObjectItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDJSONObject*                                Item                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddJSONObjectItem(class UDJSONObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddJSONObjectItem");
		
		UDJSONArray_AddJSONObjectItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddJSONObjectArrayItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UDJSONObject*>                        Item                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddJSONObjectArrayItem(TArray<class UDJSONObject*> Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddJSONObjectArrayItem");
		
		UDJSONArray_AddJSONObjectArrayItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddJSONArrayItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDJSONArray*                                 Item                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddJSONArrayItem(class UDJSONArray* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddJSONArrayItem");
		
		UDJSONArray_AddJSONArrayItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddJSONArrayArrayItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UDJSONArray*>                         Item                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddJSONArrayArrayItem(TArray<class UDJSONArray*> Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddJSONArrayArrayItem");
		
		UDJSONArray_AddJSONArrayArrayItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddIntegerItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Item                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddIntegerItem(int32_t Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddIntegerItem");
		
		UDJSONArray_AddIntegerItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddIntegerArrayItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    Item                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddIntegerArrayItem(TArray<int32_t> Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddIntegerArrayItem");
		
		UDJSONArray_AddIntegerArrayItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddFloatItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Item                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddFloatItem(float Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddFloatItem");
		
		UDJSONArray_AddFloatItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddFloatArrayItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      Item                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddFloatArrayItem(TArray<float> Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddFloatArrayItem");
		
		UDJSONArray_AddFloatArrayItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddEmptyItem
	 * 		Flags  -> ()
	 */
	bool UDJSONArray::AddEmptyItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddEmptyItem");
		
		UDJSONArray_AddEmptyItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddBooleanItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Item                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddBooleanItem(bool Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddBooleanItem");
		
		UDJSONArray_AddBooleanItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddBooleanArrayItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       Item                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddBooleanArrayItem(TArray<bool> Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddBooleanArrayItem");
		
		UDJSONArray_AddBooleanArrayItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDJSONArray.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDJSONArray::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSTelemetry.DJSONArray");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.CreateJSONObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDJSONObject* UDJSONObject::CreateJSONObject(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.CreateJSONObject");
		
		UDJSONObject_CreateJSONObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.Clear
	 * 		Flags  -> ()
	 */
	bool UDJSONObject::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.Clear");
		
		UDJSONObject_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.AsString
	 * 		Flags  -> ()
	 */
	class FString UDJSONObject::AsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AsString");
		
		UDJSONObject_AsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddStringField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddStringField(const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddStringField");
		
		UDJSONObject_AddStringField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddStringArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddStringArrayField(const class FString& Key, TArray<class FString> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddStringArrayField");
		
		UDJSONObject_AddStringArrayField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddJSONObjectField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDJSONObject*                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddJSONObjectField(const class FString& Key, class UDJSONObject* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddJSONObjectField");
		
		UDJSONObject_AddJSONObjectField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddJSONObjectArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UDJSONObject*>                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddJSONObjectArrayField(const class FString& Key, TArray<class UDJSONObject*> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddJSONObjectArrayField");
		
		UDJSONObject_AddJSONObjectArrayField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddJSONArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDJSONArray*                                 Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddJSONArrayField(const class FString& Key, class UDJSONArray* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddJSONArrayField");
		
		UDJSONObject_AddJSONArrayField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddJSONArrayArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UDJSONArray*>                         Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddJSONArrayArrayField(const class FString& Key, TArray<class UDJSONArray*> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddJSONArrayArrayField");
		
		UDJSONObject_AddJSONArrayArrayField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddIntegerField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddIntegerField(const class FString& Key, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddIntegerField");
		
		UDJSONObject_AddIntegerField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddIntegerArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddIntegerArrayField(const class FString& Key, TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddIntegerArrayField");
		
		UDJSONObject_AddIntegerArrayField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddFloatField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddFloatField(const class FString& Key, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddFloatField");
		
		UDJSONObject_AddFloatField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddFloatArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddFloatArrayField(const class FString& Key, TArray<float> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddFloatArrayField");
		
		UDJSONObject_AddFloatArrayField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddEmptyField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddEmptyField(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddEmptyField");
		
		UDJSONObject_AddEmptyField_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddBooleanField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddBooleanField(const class FString& Key, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddBooleanField");
		
		UDJSONObject_AddBooleanField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddBooleanArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddBooleanArrayField(const class FString& Key, TArray<bool> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddBooleanArrayField");
		
		UDJSONObject_AddBooleanArrayField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDJSONObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDJSONObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSTelemetry.DJSONObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.Terminate
	 * 		Flags  -> ()
	 */
	void UDSTelemetry::Terminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.Terminate");
		
		UDSTelemetry_Terminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventData                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitString(const class FString& EventKey, const class FString& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitString");
		
		UDSTelemetry_SubmitString_Params params {};
		params.EventKey = EventKey;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitSerialized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventData                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitSerialized(const class FString& EventKey, const class FString& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitSerialized");
		
		UDSTelemetry_SubmitSerialized_Params params {};
		params.EventKey = EventKey;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitJSONObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDJSONObject*                                EventData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitJSONObject(const class FString& EventKey, class UDJSONObject* EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitJSONObject");
		
		UDSTelemetry_SubmitJSONObject_Params params {};
		params.EventKey = EventKey;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitJSONArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDJSONArray*                                 EventData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitJSONArray(const class FString& EventKey, class UDJSONArray* EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitJSONArray");
		
		UDSTelemetry_SubmitJSONArray_Params params {};
		params.EventKey = EventKey;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EventData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitInteger(const class FString& EventKey, int32_t EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitInteger");
		
		UDSTelemetry_SubmitInteger_Params params {};
		params.EventKey = EventKey;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EventData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitFloat(const class FString& EventKey, float EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitFloat");
		
		UDSTelemetry_SubmitFloat_Params params {};
		params.EventKey = EventKey;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitEmpty(const class FString& EventKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitEmpty");
		
		UDSTelemetry_SubmitEmpty_Params params {};
		params.EventKey = EventKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitBoolean
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               EventData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitBoolean(const class FString& EventKey, bool EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitBoolean");
		
		UDSTelemetry_SubmitBoolean_Params params {};
		params.EventKey = EventKey;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameId                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      BuildID                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::Start(const class FString& GameId, const class FString& BuildID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.Start");
		
		UDSTelemetry_Start_Params params {};
		params.GameId = GameId;
		params.BuildID = BuildID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StateData                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateString(const class FString& StateKey, const class FString& StateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateString");
		
		UDSTelemetry_SetStateString_Params params {};
		params.StateKey = StateKey;
		params.StateData = StateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateSerialized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StateData                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateSerialized(const class FString& StateKey, const class FString& StateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateSerialized");
		
		UDSTelemetry_SetStateSerialized_Params params {};
		params.StateKey = StateKey;
		params.StateData = StateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateJSONObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDJSONObject*                                StateData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateJSONObject(const class FString& StateKey, class UDJSONObject* StateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateJSONObject");
		
		UDSTelemetry_SetStateJSONObject_Params params {};
		params.StateKey = StateKey;
		params.StateData = StateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateJSONArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDJSONArray*                                 StateData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateJSONArray(const class FString& StateKey, class UDJSONArray* StateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateJSONArray");
		
		UDSTelemetry_SetStateJSONArray_Params params {};
		params.StateKey = StateKey;
		params.StateData = StateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StateData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateInteger(const class FString& StateKey, int32_t StateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateInteger");
		
		UDSTelemetry_SetStateInteger_Params params {};
		params.StateKey = StateKey;
		params.StateData = StateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StateData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateFloat(const class FString& StateKey, float StateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateFloat");
		
		UDSTelemetry_SetStateFloat_Params params {};
		params.StateKey = StateKey;
		params.StateData = StateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateEmpty(const class FString& StateKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateEmpty");
		
		UDSTelemetry_SetStateEmpty_Params params {};
		params.StateKey = StateKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateBoolean
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               StateData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateBoolean(const class FString& StateKey, bool StateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateBoolean");
		
		UDSTelemetry_SetStateBoolean_Params params {};
		params.StateKey = StateKey;
		params.StateData = StateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetOnlinePlatformUserID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OnlinePlatformUserID                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetOnlinePlatformUserID(const class FString& OnlinePlatformUserID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetOnlinePlatformUserID");
		
		UDSTelemetry_SetOnlinePlatformUserID_Params params {};
		params.OnlinePlatformUserID = OnlinePlatformUserID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetOnlinePlatformIdentifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OnlinePlatformIdentifier                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetOnlinePlatformIdentifier(const class FString& OnlinePlatformIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetOnlinePlatformIdentifier");
		
		UDSTelemetry_SetOnlinePlatformIdentifier_Params params {};
		params.OnlinePlatformIdentifier = OnlinePlatformIdentifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.Resume
	 * 		Flags  -> ()
	 */
	void UDSTelemetry::Resume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.Resume");
		
		UDSTelemetry_Resume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.Pause
	 * 		Flags  -> ()
	 */
	void UDSTelemetry::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.Pause");
		
		UDSTelemetry_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.IsTerminated
	 * 		Flags  -> ()
	 */
	bool UDSTelemetry::IsTerminated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.IsTerminated");
		
		UDSTelemetry_IsTerminated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.IsPaused
	 * 		Flags  -> ()
	 */
	bool UDSTelemetry::IsPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.IsPaused");
		
		UDSTelemetry_IsPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.GetTelemetryInstanceID
	 * 		Flags  -> ()
	 */
	int64_t UDSTelemetry::GetTelemetryInstanceID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.GetTelemetryInstanceID");
		
		UDSTelemetry_GetTelemetryInstanceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSTelemetry.DSTelemetry.CreateTelemetry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDSTelemetry* UDSTelemetry::CreateTelemetry(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.CreateTelemetry");
		
		UDSTelemetry_CreateTelemetry_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSTelemetry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSTelemetry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSTelemetry.DSTelemetry");
		return ptr;
	}

}


