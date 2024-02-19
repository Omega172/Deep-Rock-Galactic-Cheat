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
	 * BlueprintGeneratedClass BP_Crossbow_Projectile_Stuck_Electric.BP_Crossbow_Projectile_Stuck_Electric_C
	 * Size -> 0x006A (FullSize[0x036A] - InheritedSize[0x0300])
	 */
	class ABP_Crossbow_Projectile_Stuck_Electric_C : public ABP_Crossbow_Projectile_Stuck_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                ArcAreaDisplay;                                          // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCrossbowStuckProjectileEffectElectric*              EffectElectric;                                          // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      FadeIn_Scale_643276574A22DD1BAF32FA8777128C4F;           // 0x0318(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         FadeIn__Direction_643276574A22DD1BAF32FA8777128C4F;      // 0x031C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C5XG[0x3];                                   // 0x031D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeIn;                                                  // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeOut_Scale_0B2089634E6A5E37A98116BA23E26A4F;          // 0x0328(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         FadeOut__Direction_0B2089634E6A5E37A98116BA23E26A4F;     // 0x032C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_41ZB[0x3];                                   // 0x032D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeOut;                                                 // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RingPulse_Scale_60E9F5BE447AB5F280A154BA86AB1702;        // 0x0338(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         RingPulse__Direction_60E9F5BE447AB5F280A154BA86AB1702;   // 0x033C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BR2N[0x3];                                   // 0x033D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  RingPulse;                                               // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DebugTimer;                                              // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2Y0N[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            ArcAreaDynamicMaterial;                                  // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        IndicatorAreaColor;                                      // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsActive;                                                // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FirstTimeFadeOut;                                        // 0x0369(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void RingPulse__FinishedFunc();
		void RingPulse__UpdateFunc();
		void FadeOut__FinishedFunc();
		void FadeOut__UpdateFunc();
		void FadeIn__FinishedFunc();
		void FadeIn__UpdateFunc();
		void DoIndicatorPulse();
		void FadeInAndOut();
		void CancelEffect();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Crossbow_Projectile_Stuck_Electric(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
