#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * BlueprintGeneratedClass WPN_ZipLineGun.WPN_ZipLineGun_C
	 * Size -> 0x0060 (FullSize[0x0808] - InheritedSize[0x07A8])
	 */
	class AWPN_ZipLineGun_C : public AZipLineItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPointLightComponent*                                PointLight;                                              // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight;                                               // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonWidgetComponent*                         FirstPersonWidget;                                       // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonStaticMeshComponent*                     FirstPersonStaticMesh;                                   // 0x07C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                MuzzleLight;                                             // 0x07D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UZiplineLauncherComponent*                           ZiplineLauncher;                                         // 0x07D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Beam;                                                    // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCrosshairAggregator*                                CrosshairAggregator;                                     // 0x07E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      debug_t;                                                 // 0x07F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EB4U[0x4];                                   // 0x07F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHUD_Crosshair_ZiplineGun_C*                         Crosshair;                                               // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BeamDelay;                                               // 0x0800(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InRange;                                                 // 0x0804(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TooFar;                                                  // 0x0805(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TooClose;                                                // 0x0806(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WeaponFired;                                             // 0x0807(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetGrounded(bool* OutGrounded);
		struct FVector CalcFirstPersonMuzzleLocation();
		bool CanFireWeapon(class FText* FailMsg, class UDialogDataAsset** FailShout);
		void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
		void GetCrosshair(class UHUD_Crosshair_ZiplineGun_C** Result);
		void UpdateLineOfSight(const struct FVector& Direction, const struct FVector& End, bool DidHit);
		void Negate(float Value, float* Result);
		void Between(float Value, float Min, float Max, bool* IsBetween);
		void CanFire(class FText* FailMsg, class UDialogDataAsset** FailShout, bool* CanShoot);
		struct FVector GetStartLocation();
		void LineTrace(struct FHitResult* OutHit, struct FVector* Direction, float* Distance, bool* HitAny);
		void ReceiveTick(float DeltaSeconds);
		void RecieveStopUsing();
		void RecieveEquipped();
		void AddedToInventory(class APlayerCharacter* ItemOwner);
		void ReceiveBeginPlay();
		void BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(class UUserWidget* Crosshair);
		void RecieveUnequipped();
		void BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature(const struct FVector& Location);
		void ExecuteUbergraph_WPN_ZipLineGun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
