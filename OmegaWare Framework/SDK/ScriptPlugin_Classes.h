#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ScriptPlugin.ScriptBlueprint
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UScriptBlueprint : public UBlueprint
	{
	public:
		TArray<unsigned char>                                      ByteCode;                                                // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              SourceCode;                                              // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptPlugin.ScriptBlueprintGeneratedClass
	 * Size -> 0x0040 (FullSize[0x0368] - InheritedSize[0x0328])
	 */
	class UScriptBlueprintGeneratedClass : public UBlueprintGeneratedClass
	{
	public:
		TArray<unsigned char>                                      ByteCode;                                                // 0x0328(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              SourceCode;                                              // 0x0338(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UProperty*>                                   ScriptProperties;                                        // 0x0348(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8WSC[0x10];                                  // 0x0358(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptPlugin.ScriptContext
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UScriptContext : public UObject
	{
	public:
		unsigned char                                              UnknownData_JOPC[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void CallScriptFunction(const class FString& FunctionName);
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptPlugin.ScriptContextComponent
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UScriptContextComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_YMS5[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (PADDING)

	public:
		void CallScriptFunction(const class FString& FunctionName);
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptPlugin.ScriptPluginComponent
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UScriptPluginComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_776X[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (PADDING)

	public:
		bool CallScriptFunction(const class FString& FunctionName);
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptPlugin.ScriptTestActor
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class AScriptTestActor : public AActor
	{
	public:
		class FString                                              TestString;                                              // 0x0220(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TestValue;                                               // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TestBool;                                                // 0x0234(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4FN5[0x3];                                   // 0x0235(0x0003) MISSED OFFSET (PADDING)

	public:
		float TestFunction(float InValue, float InFactor, bool bMultiply);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
