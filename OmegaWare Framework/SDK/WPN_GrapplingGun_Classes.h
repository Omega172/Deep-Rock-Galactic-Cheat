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
	 * BlueprintGeneratedClass WPN_GrapplingGun.WPN_GrapplingGun_C
	 * Size -> 0x0074 (FullSize[0x04B4] - InheritedSize[0x0440])
	 */
	class AWPN_GrapplingGun_C : public AGrapplingHookGun
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFSDAudioComponent*                                  AudioMoving;                                             // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonStaticMeshComponent*                     FirstPersonStaticMesh;                                   // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonWidgetComponent*                         CoolDownWidgetFirstPerson;                               // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCrosshairAggregator*                                CrosshairAggregator;                                     // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Projectile;                                              // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     TP_Muzzle;                                               // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FP_Muzzle;                                               // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCableComponent*                                     Cable;                                                   // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectileMovement_Lerp_t_87ACE2EC4276B8AA3B88169B28949E3A; // 0x0488(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         ProjectileMovement__Direction_87ACE2EC4276B8AA3B88169B28949E3A; // 0x048C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FYV2[0x3];                                   // 0x048D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ProjectileMovement;                                      // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            PullRotation;                                            // 0x0498(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R3DE[0x4];                                   // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHUD_CroNew_GrapplingGun_C*                          Crosshair;                                               // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastFailMessageTime;                                     // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
		struct FTransform GetCableTransform();
		void SetCableEndPoint(const struct FVector& Location);
		void GetCableParent(class USceneComponent** Muzzle);
		void ToggleCable(bool bNewVisibility);
		void GetAimView(struct FVector* Location, struct FVector* Forward);
		void UserConstructionScript();
		void ProjectileMovement__FinishedFunc();
		void ProjectileMovement__UpdateFunc();
		void AddedToInventory(class APlayerCharacter* ItemOwner);
		void ReceiveBeginPlay();
		void RecieveCycledItem();
		void Gunsling();
		void OnGrappleUpdate(float DeltaSeconds);
		void OnGrappleStart();
		void OnGrappleEnd();
		void OnGrappleFailed(bool TooFar);
		void ExecuteUbergraph_WPN_GrapplingGun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
