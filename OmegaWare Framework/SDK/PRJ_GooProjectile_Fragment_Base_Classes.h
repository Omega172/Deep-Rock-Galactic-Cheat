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
	 * BlueprintGeneratedClass PRJ_GooProjectile_Fragment_Base.PRJ_GooProjectile_Fragment_Base_C
	 * Size -> 0x0008 (FullSize[0x03C0] - InheritedSize[0x03B8])
	 */
	class APRJ_GooProjectile_Fragment_Base_C : public APRJ_BaseNormalGooProjectile_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnInitialized();
		void ExecuteUbergraph_PRJ_GooProjectile_Fragment_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
