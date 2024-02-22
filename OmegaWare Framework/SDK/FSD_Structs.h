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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum FSD.EDrinkableAlcoholStrength
	 */
	enum class EDrinkableAlcoholStrength : uint8_t
	{
		NonAlcoholic   = 0,
		Light          = 1,
		Regular        = 2,
		Strong         = 3,
		VeryStrong     = 4,
		InstantPassout = 5,
		MAX            = 6
	};

	/**
	 * Enum FSD.EIntoxicationState
	 */
	enum class EIntoxicationState : uint8_t
	{
		NotIntoxicated = 0,
		Intoxicated    = 1,
		PassOut        = 2,
		MAX            = 3
	};

	/**
	 * Enum FSD.EOutline
	 */
	enum class EOutline : uint8_t
	{
		OL_NONE     = 0,
		OL_FRIENDLY = 1,
		OL_NEUTRAL  = 2,
		OL_ENEMY    = 3,
		OL_ITEM     = 4,
		MAX         = 5
	};

	/**
	 * Enum FSD.ELaserPointerTargetType
	 */
	enum class ELaserPointerTargetType : uint8_t
	{
		Chunkable   = 0,
		Dirt        = 1,
		Player      = 2,
		Enemy       = 3,
		EmbeddedGem = 4,
		Other       = 5,
		MAX         = 6
	};

	/**
	 * Enum FSD.ECharacterState
	 */
	enum class ECharacterState : uint8_t
	{
		Walking       = 0,
		Downed        = 1,
		Dead          = 2,
		Falling       = 3,
		Paralyzed     = 4,
		Using         = 5,
		ZipLine       = 6,
		NoMovement    = 7,
		Grabbed       = 8,
		Flying        = 9,
		Frozen        = 10,
		PassedOut     = 11,
		Photography   = 12,
		Piloting      = 13,
		Attached      = 14,
		Pushing       = 15,
		TrackMovement = 16,
		EnemyControl  = 17,
		Infected      = 18,
		Invalid       = 19,
		MAX           = 20
	};

	/**
	 * Enum FSD.ECharacterCameraMode
	 */
	enum class ECharacterCameraMode : uint8_t
	{
		FirstPerson         = 0,
		ThirdPerson         = 1,
		Follow              = 2,
		DownCamera          = 3,
		TerrainScanner      = 4,
		PhotographyMode     = 5,
		FirstPersonHeadOnly = 6,
		MAX                 = 7
	};

	/**
	 * Enum FSD.EInputKeys
	 */
	enum class EInputKeys : uint8_t
	{
		Use  = 0,
		Fire = 1,
		Mine = 2,
		MAX  = 3
	};

	/**
	 * Enum FSD.EPlatformComponentCriteria
	 */
	enum class EPlatformComponentCriteria : uint8_t
	{
		All              = 0,
		ServerOnly       = 1,
		ClientOnly       = 2,
		OwningClientOnly = 3,
		MAX              = 4
	};

	/**
	 * Enum FSD.EPlayerTemperatureState
	 */
	enum class EPlayerTemperatureState : uint8_t
	{
		Normal     = 0,
		Frozen     = 1,
		Overheated = 2,
		MAX        = 3
	};

	/**
	 * Enum FSD.EThawInputDirection
	 */
	enum class EThawInputDirection : uint8_t
	{
		EForward = 0,
		ERight   = 1,
		EBack    = 2,
		ELeft    = 3,
		ENA      = 4,
		MAX      = 5
	};

	/**
	 * Enum FSD.EDeepMovementState
	 */
	enum class EDeepMovementState : uint8_t
	{
		Stationary     = 0,
		Controlled     = 1,
		Moving         = 2,
		WaitingForPath = 3,
		AttackStance   = 4,
		FakePhysics    = 5,
		MAX            = 6
	};

	/**
	 * Enum FSD.ECharselectionCameraLocation
	 */
	enum class ECharselectionCameraLocation : uint8_t
	{
		Selection     = 0,
		Customization = 1,
		Crafting      = 2,
		ViewWeapon    = 3,
		EndScreen     = 4,
		Forge         = 5,
		Pickaxe       = 6,
		MAX           = 7
	};

	/**
	 * Enum FSD.EMinersManualSection
	 */
	enum class EMinersManualSection : uint8_t
	{
		FrontPage = 0,
		Hints     = 1,
		Combat    = 2,
		Creatures = 3,
		Biomes    = 4,
		Missions  = 5,
		Resources = 6,
		MAX       = 7
	};

	/**
	 * Enum FSD.ECharacterSelectorItemStatus
	 */
	enum class ECharacterSelectorItemStatus : uint8_t
	{
		LeaveAsIs       = 0,
		SwitchToDefault = 1,
		NoItemEquipped  = 2,
		MAX             = 3
	};

	/**
	 * Enum FSD.EGameType
	 */
	enum class EGameType : uint8_t
	{
		Fully       = 0,
		Progression = 1,
		Sandbox     = 2,
		Vanilla     = 3,
		MAX         = 4
	};

	/**
	 * Enum FSD.ESteamSearchRegion
	 */
	enum class ESteamSearchRegion : uint8_t
	{
		Close  = 0,
		Medium = 1,
		Far    = 2,
		World  = 3,
		MAX    = 4
	};

	/**
	 * Enum FSD.ESteamServerJoinStatus
	 */
	enum class ESteamServerJoinStatus : uint8_t
	{
		Open             = 0,
		PasswordRequired = 1,
		MAX              = 2
	};

	/**
	 * Enum FSD.EAlwaysLoadedWorlds
	 */
	enum class EAlwaysLoadedWorlds : uint8_t
	{
		CharacterViewer = 0,
		LoaderNormal    = 1,
		LoaderDeepDive  = 2,
		MAX             = 3
	};

	/**
	 * Enum FSD.EDisconnectReason
	 */
	enum class EDisconnectReason : uint8_t
	{
		None                                = 0,
		Kicked_HaveMyReasons                = 1,
		Kicked_ShouldBePrivate              = 2,
		Kicked_AFK                          = 3,
		Banned                              = 4,
		ServerQuit                          = 5,
		Disconnected                        = 6,
		SignInChange                        = 7,
		JoinSessionFail_SessionIsFull       = 8,
		JoinSessionFail_SessionDoesNotExist = 9,
		JoinSessionFail_Other               = 10,
		JoinSessionFail_Privilege           = 11,
		NetworkError                        = 12,
		SignOutComplete                     = 13,
		WrongPassword                       = 14,
		DeepDiveLateJoin                    = 15,
		MissionStarting                     = 16,
		LatejoinNotAllowed                  = 17,
		OutdatedClient                      = 18,
		MAX                                 = 19
	};

	/**
	 * Enum FSD.EChatSenderType
	 */
	enum class EChatSenderType : uint8_t
	{
		NormalUser = 0,
		DeluxUser  = 1,
		Developer  = 2,
		Streamer   = 3,
		Modder     = 4,
		MAX        = 5
	};

	/**
	 * Enum FSD.EChatMessageType
	 */
	enum class EChatMessageType : uint8_t
	{
		ES_Chat = 0,
		ES_Game = 1,
		ES_MAX  = 2
	};

	/**
	 * Enum FSD.EFSDInputSource
	 */
	enum class EFSDInputSource : uint8_t
	{
		None             = 0,
		MouseAndKeyboard = 1,
		Controller       = 2,
		MAX              = 3
	};

	/**
	 * Enum FSD.EKeyboardLayout
	 */
	enum class EKeyboardLayout : uint8_t
	{
		QWERTY = 0,
		AZERTY = 1,
		QWERTZ = 2,
		MAX    = 3
	};

	/**
	 * Enum FSD.EHUDVisibilityReason
	 */
	enum class EHUDVisibilityReason : uint8_t
	{
		Invalid     = 0,
		UserChoice  = 1,
		StandDown   = 2,
		MenuActive  = 3,
		Photography = 4,
		MAX         = 5
	};

	/**
	 * Enum FSD.EMinersManualSinglePage
	 */
	enum class EMinersManualSinglePage : uint8_t
	{
		Mutators    = 0,
		Warnings    = 1,
		DamageTypes = 2,
		Weakpoints  = 3,
		Armor       = 4,
		Light       = 5,
		Ammo        = 6,
		Traversal   = 7,
		Spacerig    = 8,
		Upgrades    = 9,
		Perks       = 10,
		Bosco       = 11,
		Assignments = 12,
		Navigation  = 13,
		MAX         = 14
	};

	/**
	 * Enum FSD.EArmorDamageType
	 */
	enum class EArmorDamageType : uint8_t
	{
		Normal   = 0,
		Dissolve = 1,
		Beam     = 2,
		MAX      = 3
	};

	/**
	 * Enum FSD.ESpacerigStartType
	 */
	enum class ESpacerigStartType : uint8_t
	{
		PlayerHub = 0,
		Medbay    = 1,
		MAX       = 2
	};

	/**
	 * Enum FSD.EItemCategory
	 */
	enum class EItemCategory : uint8_t
	{
		PrimaryWeapon   = 0,
		SecondaryWeapon = 1,
		TraversalTool   = 2,
		ClassTool       = 3,
		Grenade         = 4,
		Flare           = 5,
		MiningTool      = 6,
		Armor           = 7,
		MAX             = 8
	};

	/**
	 * Enum FSD.EFSDFaction
	 */
	enum class EFSDFaction : uint8_t
	{
		NoFaction    = 0,
		CaveCrawlers = 1,
		MightyMiners = 2,
		DirtDiggers  = 3,
		MAX          = 4
	};

	/**
	 * Enum FSD.ESonyInputSettingsBools
	 */
	enum class ESonyInputSettingsBools : uint8_t
	{
		MotionControlEnabled               = 0,
		MotionControlFlight                = 1,
		MotionControlSalute                = 2,
		MotionControlPrecisionMode         = 3,
		AdaptiveTriggersEnabled            = 4,
		TouchPadTerrainScannerEnabled      = 5,
		TouchPadGesturesEnabled            = 6,
		ControllerSpeakerMissionControl    = 7,
		ControllerSpeakerSalute            = 8,
		ControllerSpeakerFlare             = 9,
		ControllerSpeakerMineralCollection = 10,
		MAX                                = 11
	};

	/**
	 * Enum FSD.ESonyInputSettingsFloats
	 */
	enum class ESonyInputSettingsFloats : uint8_t
	{
		MotionControlXSensitivity             = 0,
		MotionControlYSensitivity             = 1,
		ControllerSpeakerVolume               = 2,
		TouchPadTerrainScannerXSensitivity    = 3,
		TouchPadTerrainScannerYSensitivity    = 4,
		TouchPadTerrainScannerZoomSensitivity = 5,
		MAX                                   = 6
	};

	/**
	 * Enum FSD.ESonyControllerLightMode
	 */
	enum class ESonyControllerLightMode : uint8_t
	{
		Disabled = 0,
		Simple   = 1,
		Default  = 2,
		MAX      = 3
	};

	/**
	 * Enum FSD.ESonyControllerMotionMapping
	 */
	enum class ESonyControllerMotionMapping : uint8_t
	{
		Yaw  = 0,
		Roll = 1,
		MAX  = 2
	};

	/**
	 * Enum FSD.EConsoleGraphicsMode
	 */
	enum class EConsoleGraphicsMode : uint8_t
	{
		Fidelity       = 0,
		Performance    = 1,
		Performance120 = 2,
		MAX            = 3
	};

	/**
	 * Enum FSD.EHUDVisibilityMode
	 */
	enum class EHUDVisibilityMode : uint8_t
	{
		Visible = 0,
		Dynamic = 1,
		Hidden  = 2,
		MAX     = 3
	};

	/**
	 * Enum FSD.ETurn180Mode
	 */
	enum class ETurn180Mode : uint8_t
	{
		PressRun   = 0,
		PressFlare = 1,
		Off        = 2,
		MAX        = 3
	};

	/**
	 * Enum FSD.EVanitySlot
	 */
	enum class EVanitySlot : uint8_t
	{
		Head          = 0,
		Beard         = 1,
		Armor         = 2,
		BeardColor    = 3,
		SkinColor     = 4,
		Moustache     = 5,
		Eyebrows      = 6,
		Sideburns     = 7,
		ArmorMaterial = 8,
		Count         = 9,
		MAX           = 10
	};

	/**
	 * Enum FSD.EVacuumState
	 */
	enum class EVacuumState : uint8_t
	{
		EPuddle    = 0,
		EVacuuming = 1,
		EFalling   = 2,
		EDead      = 3,
		MAX        = 4
	};

	/**
	 * Enum FSD.EHolidayType
	 */
	enum class EHolidayType : uint8_t
	{
		None          = 0,
		LunarFestival = 1,
		Anniversary   = 2,
		Easter        = 3,
		BeachParty    = 4,
		Oktoberfest   = 5,
		Halloween     = 6,
		Xmas          = 7,
		OneOffEvent   = 8,
		MAX           = 9
	};

	/**
	 * Enum FSD.ECampaignType
	 */
	enum class ECampaignType : uint8_t
	{
		Normal         = 0,
		Weekly         = 1,
		MatrixCoreHunt = 2,
		SeededRandom   = 3,
		MAX            = 4
	};

	/**
	 * Enum FSD.EItemPreviewStatus
	 */
	enum class EItemPreviewStatus : uint8_t
	{
		Normal                    = 0,
		Upgraded                  = 1,
		Previewed                 = 2,
		PreviewReduced            = 3,
		UpgradedAndPreviewReduced = 4,
		MAX                       = 5
	};

	/**
	 * Enum FSD.EUpgradeCalucationType
	 */
	enum class EUpgradeCalucationType : uint8_t
	{
		Additive       = 0,
		Multiplicative = 1,
		MAX            = 2
	};

	/**
	 * Enum FSD.EUpgradeClass
	 */
	enum class EUpgradeClass : uint8_t
	{
		Class_A     = 0,
		Class_B     = 1,
		Gear_A      = 2,
		Gear_B      = 3,
		Armor       = 4,
		Pickaxe     = 5,
		Class_Bosco = 6,
		MAX         = 7
	};

	/**
	 * Enum FSD.EUpgradeTiers
	 */
	enum class EUpgradeTiers : uint8_t
	{
		Tier     = 0,
		Tier01   = 1,
		Tier02   = 2,
		Tier03   = 3,
		Tier04   = 4,
		Tier_MAX = 5
	};

	/**
	 * Enum FSD.EDroneAIState
	 */
	enum class EDroneAIState : uint8_t
	{
		Follow      = 0,
		Mine        = 1,
		Fight       = 2,
		Revive      = 3,
		Light       = 4,
		GoToPlayer  = 5,
		Salute      = 6,
		CarryGem    = 7,
		UseAbillity = 8,
		Repairing   = 9,
		Cleaning    = 10,
		MAX         = 11
	};

	/**
	 * Enum FSD.EDroneState
	 */
	enum class EDroneState : uint8_t
	{
		EFollow = 0,
		EMining = 1,
		ELight  = 2,
		EMax    = 3,
		MAX     = 4
	};

	/**
	 * Enum FSD.ERessuplyPodState
	 */
	enum class ERessuplyPodState : uint8_t
	{
		ReadyToDrop = 0,
		Dropping    = 1,
		Landed      = 2,
		Idle        = 3,
		MAX         = 4
	};

	/**
	 * Enum FSD.EHackingPodState
	 */
	enum class EHackingPodState : uint8_t
	{
		EClosed        = 0,
		EShowDispenser = 1,
		EShowButton    = 2,
		EHacking       = 3,
		EDestroyed     = 4,
		EDone          = 5,
		MAX            = 6
	};

	/**
	 * Enum FSD.ERockCrackerstate
	 */
	enum class ERockCrackerstate : uint8_t
	{
		Init      = 0,
		EFalling  = 1,
		EConnect  = 2,
		EDrilling = 3,
		EBroke    = 4,
		EDone     = 5,
		MAX       = 6
	};

	/**
	 * Enum FSD.ERivalBombNodeState
	 */
	enum class ERivalBombNodeState : uint8_t
	{
		Inactive  = 0,
		Active    = 1,
		Hackable  = 2,
		Completed = 3,
		Failed    = 4,
		MAX       = 5
	};

	/**
	 * Enum FSD.EEnemyHealthScaling
	 */
	enum class EEnemyHealthScaling : uint8_t
	{
		SmallEnemy       = 0,
		LargeEnemy       = 1,
		ExtraLargeEnemy  = 2,
		ExtraLargeEnemyB = 3,
		ExtraLargeEnemyC = 4,
		ExtraLargeEnemyD = 5,
		NoScaling        = 6,
		MAX              = 7
	};

	/**
	 * Enum FSD.EHealthbarType
	 */
	enum class EHealthbarType : uint8_t
	{
		None     = 0,
		MainLife = 1,
		Shield   = 2,
		MAX      = 3
	};

	/**
	 * Enum FSD.EMissionStatType
	 */
	enum class EMissionStatType : uint8_t
	{
		Float    = 0,
		Integer  = 1,
		Time     = 2,
		Distance = 3,
		MAX      = 4
	};

	/**
	 * Enum FSD.EPawnAttitude
	 */
	enum class EPawnAttitude : uint8_t
	{
		Friendly = 0,
		Neutral  = 1,
		Hostile  = 2,
		MAX      = 3
	};

	/**
	 * Enum FSD.EInfectionState
	 */
	enum class EInfectionState : uint8_t
	{
		Normal         = 0,
		PartlyInfected = 1,
		FullyInfected  = 2,
		MAX            = 3
	};

	/**
	 * Enum FSD.ERefineryState
	 */
	enum class ERefineryState : uint8_t
	{
		Landing          = 0,
		ConnectingPipes  = 1,
		PipesConnected   = 2,
		Refining         = 3,
		RefiningStalled  = 4,
		RefiningComplete = 5,
		RocketLaunched   = 6,
		MAX              = 7
	};

	/**
	 * Enum FSD.EFrozenBitsSize
	 */
	enum class EFrozenBitsSize : uint8_t
	{
		Tiny   = 0,
		Small  = 1,
		Medium = 2,
		Large  = 3,
		Huge   = 4,
		MAX    = 5
	};

	/**
	 * Enum FSD.EPropHuntEndScreen
	 */
	enum class EPropHuntEndScreen : uint8_t
	{
		HuntersWin = 0,
		PropsWin   = 1,
		MAX        = 2
	};

	/**
	 * Enum FSD.EPropHuntRole
	 */
	enum class EPropHuntRole : uint8_t
	{
		PendingRole = 0,
		Hunter      = 1,
		Prop        = 2,
		MAX         = 3
	};

	/**
	 * Enum FSD.EDroppableOutpostState
	 */
	enum class EDroppableOutpostState : uint8_t
	{
		WaitingToDrop = 0,
		Drilling      = 1,
		Landed        = 2,
		PrepTakeoff   = 3,
		Departing     = 4,
		MAX           = 5
	};

	/**
	 * Enum FSD.EPipelineBuildState
	 */
	enum class EPipelineBuildState : uint8_t
	{
		NotStarted = 0,
		BeginBuilt = 1,
		Completed  = 2,
		Broken     = 3,
		MAX        = 4
	};

	/**
	 * Enum FSD.ETrackBuildPlacementState
	 */
	enum class ETrackBuildPlacementState : uint8_t
	{
		NotBeingPlaced = 0,
		BeingPlaced    = 1,
		Finished       = 2,
		MAX            = 3
	};

	/**
	 * Enum FSD.ESchematicState
	 */
	enum class ESchematicState : uint8_t
	{
		NotOwned   = 0,
		Owned      = 1,
		OwnedBuilt = 2,
		MAX        = 3
	};

	/**
	 * Enum FSD.EShoutType
	 */
	enum class EShoutType : uint8_t
	{
		Attention               = 0,
		Follow                  = 1,
		StandingDown            = 2,
		Downed                  = 3,
		RequestRevive           = 4,
		Revived                 = 5,
		Resupply                = 6,
		FriendlyFire            = 7,
		KillCry                 = 8,
		Dead                    = 9,
		Cheating                = 10,
		ResourceFull            = 11,
		ResourceFullNoDonkey    = 12,
		CallDonkey              = 13,
		CallDonkey_NotInMission = 14,
		Depositing              = 15,
		DepositingNoDonkey      = 16,
		OutOfAmmo               = 17,
		Reloading               = 18,
		CharacterSelected       = 19,
		UpgradeBought           = 20,
		WaitingInDropPod        = 21,
		Carrying                = 22,
		WaitingInEscapePod      = 23,
		Salute                  = 24,
		Salute_Spacerig         = 25,
		Drink                   = 26,
		MAX                     = 27
	};

	/**
	 * Enum FSD.EAsyncLoadPriority
	 */
	enum class EAsyncLoadPriority : uint8_t
	{
		Normal = 0,
		High   = 1,
		Low    = 2,
		MAX    = 3
	};

	/**
	 * Enum FSD.EHUDVisibilityPresets
	 */
	enum class EHUDVisibilityPresets : uint8_t
	{
		AllVisible  = 0,
		Recommended = 1,
		Minimal     = 2,
		AllHidden   = 3,
		MAX         = 4
	};

	/**
	 * Enum FSD.EHUDVisibilityGroups
	 */
	enum class EHUDVisibilityGroups : uint8_t
	{
		OnScreenHelp        = 0,
		EnemyHealth         = 1,
		RadarAndDepth       = 2,
		PlayerHealthShield  = 3,
		PlayerNameClassIcon = 4,
		PlayerItems         = 5,
		PlayerResources     = 6,
		WeaponInfo          = 7,
		Grenades            = 8,
		FlashLight          = 9,
		Flares              = 10,
		Crosshair           = 11,
		Objectives          = 12,
		TeamDisplay         = 13,
		SentryGunDisplay    = 14,
		VersionNumber       = 15,
		MAX                 = 16
	};

	/**
	 * Enum FSD.EMediaPlayerState
	 */
	enum class EMediaPlayerState : uint8_t
	{
		NotLoaded = 0,
		Opening   = 1,
		Playing   = 2,
		Stopped   = 3,
		MAX       = 4
	};

	/**
	 * Enum FSD.EAmmoWeaponState
	 */
	enum class EAmmoWeaponState : uint8_t
	{
		Equipping    = 0,
		Ready        = 1,
		Cycling      = 2,
		Reloading    = 3,
		BurstCycling = 4,
		MAX          = 5
	};

	/**
	 * Enum FSD.ECrossbowSwitchState
	 */
	enum class ECrossbowSwitchState : uint8_t
	{
		Normal       = 0,
		Cancelled    = 1,
		DuringReload = 2,
		MAX          = 3
	};

	/**
	 * Enum FSD.EProjectileSwitchCriteria
	 */
	enum class EProjectileSwitchCriteria : uint8_t
	{
		None                   = 0,
		CharagedProjectile     = 1,
		HeatAbove              = 2,
		HeatBelow              = 3,
		CycleButtonSecondsHeld = 4,
		MAX                    = 5
	};

	/**
	 * Enum FSD.EGooGunFireMode
	 */
	enum class EGooGunFireMode : uint8_t
	{
		Normal = 0,
		Charge = 1,
		Burst  = 2,
		MAX    = 3
	};

	/**
	 * Enum FSD.EThrownGrenadeItemState
	 */
	enum class EThrownGrenadeItemState : uint8_t
	{
		NotEquipped = 0,
		Cooking     = 1,
		Throwing    = 2,
		MAX         = 3
	};

	/**
	 * Enum FSD.EMicroMissileLauncherFireMode
	 */
	enum class EMicroMissileLauncherFireMode : uint8_t
	{
		Normal = 0,
		Charge = 1,
		Buck   = 2,
		MAX    = 3
	};

	/**
	 * Enum FSD.EOnProjectileImpactBehaviourEnum
	 */
	enum class EOnProjectileImpactBehaviourEnum : uint8_t
	{
		CallOnPredict             = 0,
		CallOnConfirmed           = 1,
		CallOnPredictAndConfirmed = 2,
		ClientAuthoritative       = 3,
		MAX                       = 4
	};

	/**
	 * Enum FSD.ELineRotation
	 */
	enum class ELineRotation : uint8_t
	{
		None  = 0,
		Yaw   = 1,
		Pitch = 2,
		Roll  = 3,
		MAX   = 4
	};

	/**
	 * Enum FSD.EImpactDecalSize
	 */
	enum class EImpactDecalSize : uint8_t
	{
		Small  = 0,
		Medium = 1,
		Large  = 2,
		None   = 3,
		MAX    = 4
	};

	/**
	 * Enum FSD.ERecallableActorState
	 */
	enum class ERecallableActorState : uint8_t
	{
		Idle              = 0,
		RelocateRequested = 1,
		Relocating        = 2,
		ReturnRequested   = 3,
		Returning         = 4,
		Home              = 5,
		MAX               = 6
	};

	/**
	 * Enum FSD.ERedeployableSentryGunState
	 */
	enum class ERedeployableSentryGunState : uint8_t
	{
		Deploying   = 0,
		Deployed    = 1,
		Dismantling = 2,
		Dismantled  = 3,
		MAX         = 4
	};

	/**
	 * Enum FSD.EItemSkinType
	 */
	enum class EItemSkinType : uint8_t
	{
		PaintJob  = 0,
		Framework = 1,
		MAX       = 2
	};

	/**
	 * Enum FSD.EFriendOnlineStatusEnum
	 */
	enum class EFriendOnlineStatusEnum : uint8_t
	{
		Online  = 0,
		Offline = 1,
		Away    = 2,
		MAX     = 3
	};

	/**
	 * Enum FSD.EBlueprintablePrivilegeResults
	 */
	enum class EBlueprintablePrivilegeResults : uint8_t
	{
		NoFailures                   = 0,
		RequiredPatchAvailable       = 1,
		RequiredSystemUpdate         = 2,
		AgeRestrictionFailure        = 3,
		AccountTypeFailure           = 4,
		UserNotFound                 = 5,
		UserNotLoggedIn              = 6,
		ChatRestriction              = 7,
		UGCRestriction               = 8,
		GenericFailure               = 9,
		OnlinePlayRestricted         = 10,
		NetworkConnectionUnavailable = 11,
		MAX                          = 12
	};

	/**
	 * Enum FSD.EBlueprintableUserPrivileges
	 */
	enum class EBlueprintableUserPrivileges : uint8_t
	{
		CanPlay                    = 0,
		CanPlayOnline              = 1,
		CanCommunicateOnline       = 2,
		CanUseUserGeneratedContent = 3,
		CanUserCrossPlay           = 4,
		MAX                        = 5
	};

	/**
	 * Enum FSD.EActivityType
	 */
	enum class EActivityType : uint8_t
	{
		Mission    = 0,
		Assignment = 1,
		Tutorial   = 2,
		None       = 3,
		MAX        = 4
	};

	/**
	 * Enum FSD.EMeshAttachType
	 */
	enum class EMeshAttachType : uint8_t
	{
		ECharacterMesh = 0,
		ECamera        = 1,
		MAX            = 2
	};

	/**
	 * Enum FSD.EAfflictionSocket
	 */
	enum class EAfflictionSocket : uint8_t
	{
		CenterMass = 0,
		Feet       = 1,
		Camera     = 2,
		MAX        = 3
	};

	/**
	 * Enum FSD.ECreatureSize
	 */
	enum class ECreatureSize : uint8_t
	{
		Tiny   = 0,
		Small  = 1,
		Medium = 2,
		Large  = 3,
		Huge   = 4,
		MAX    = 5
	};

	/**
	 * Enum FSD.EFrozenAfflictionType
	 */
	enum class EFrozenAfflictionType : uint8_t
	{
		Frozen   = 0,
		Infected = 1,
		MAX      = 2
	};

	/**
	 * Enum FSD.EFlyingBugDeathAnimationCategory
	 */
	enum class EFlyingBugDeathAnimationCategory : uint8_t
	{
		NoAnimation = 0,
		IdleOnDeath = 1,
		MAX         = 2
	};

	/**
	 * Enum FSD.EAsyncPersistence
	 */
	enum class EAsyncPersistence : uint8_t
	{
		Manual    = 0,
		Level     = 1,
		Permanent = 2,
		MAX       = 3
	};

	/**
	 * Enum FSD.EAbilityIndex
	 */
	enum class EAbilityIndex : uint8_t
	{
		ENone      = 0,
		EPrimary   = 1,
		ESecondary = 2,
		MAX        = 3
	};

	/**
	 * Enum FSD.EBoomerangState
	 */
	enum class EBoomerangState : uint8_t
	{
		None      = 0,
		Curving   = 1,
		GoingBack = 2,
		Targeting = 3,
		MAX       = 4
	};

	/**
	 * Enum FSD.EPlatformRestriction
	 */
	enum class EPlatformRestriction : uint8_t
	{
		Editor                   = 0,
		Steam                    = 1,
		Oddish                   = 2,
		UniversalWindowsPlatform = 3,
		XBoxOne                  = 4,
		PS4                      = 5,
		MAX                      = 6
	};

	/**
	 * Enum FSD.EBuildTypeRestriction
	 */
	enum class EBuildTypeRestriction : uint8_t
	{
		Development = 0,
		Shipping    = 1,
		MAX         = 2
	};

	/**
	 * Enum FSD.ECampaignMutators
	 */
	enum class ECampaignMutators : uint8_t
	{
		NotAllowed = 0,
		Allowed    = 1,
		Preffered  = 2,
		MAX        = 3
	};

	/**
	 * Enum FSD.ECaretakerSpawnType
	 */
	enum class ECaretakerSpawnType : uint8_t
	{
		None      = 0,
		Drones    = 1,
		Bombs     = 2,
		Shredders = 3,
		Turrets   = 4,
		MAX       = 5
	};

	/**
	 * Enum FSD.EFacilityEye
	 */
	enum class EFacilityEye : uint8_t
	{
		EForward = 0,
		EBack    = 1,
		ELeft    = 2,
		ERight   = 3,
		MAX      = 4
	};

	/**
	 * Enum FSD.ECellCategory
	 */
	enum class ECellCategory : uint8_t
	{
		Cave   = 0,
		Tunnel = 1,
		MAX    = 2
	};

	/**
	 * Enum FSD.ECaveLeechState
	 */
	enum class ECaveLeechState : uint8_t
	{
		Idle       = 0,
		Tracking   = 1,
		Pulling    = 2,
		Retracting = 3,
		Dying      = 4,
		Dead       = 5,
		Frozen     = 6,
		MAX        = 7
	};

	/**
	 * Enum FSD.ECustomUsableType
	 */
	enum class ECustomUsableType : uint8_t
	{
		ClearOnFrameEnd    = 0,
		ClearOnUseReleased = 1,
		ClearManually      = 2,
		MAX                = 3
	};

	/**
	 * Enum FSD.EExampleEnum
	 */
	enum class EExampleEnum : uint8_t
	{
		FirstName  = 0,
		SecondName = 1,
		MAX        = 2
	};

	/**
	 * Enum FSD.ECoilgunTraceEffect
	 */
	enum class ECoilgunTraceEffect : uint8_t
	{
		EPrimary = 0,
		EDamage  = 1,
		EFear    = 2,
		MAX      = 3
	};

	/**
	 * Enum FSD.ECommunityGoalIndex
	 */
	enum class ECommunityGoalIndex : uint8_t
	{
		KillBroodNexus           = 0,
		KillBulkDetonators       = 1,
		KillCaveLeeches          = 2,
		KillJellyBreeders        = 3,
		KillPretorians           = 4,
		KillShellbacks           = 5,
		KillSpitballers          = 6,
		CollectBittergem         = 7,
		CollectCompressedGold    = 8,
		CollectGold              = 9,
		CollectCraftingMaterials = 10,
		GainXP                   = 11,
		TestGoal                 = 12,
		Count                    = 13,
		MAX                      = 14
	};

	/**
	 * Enum FSD.ECommunityGoalTier
	 */
	enum class ECommunityGoalTier : uint8_t
	{
		Bronze = 0,
		Silver = 1,
		Gold   = 2,
		MAX    = 3
	};

	/**
	 * Enum FSD.ECommunityGoalType
	 */
	enum class ECommunityGoalType : uint8_t
	{
		Float    = 0,
		Integer  = 1,
		Time     = 2,
		Distance = 3,
		MAX      = 4
	};

	/**
	 * Enum FSD.ECommunityUIState
	 */
	enum class ECommunityUIState : uint8_t
	{
		Loading       = 0,
		SelectFaction = 1,
		Progress      = 2,
		Recruitment   = 3,
		Reward        = 4,
		Invalid       = 5,
		MAX           = 6
	};

	/**
	 * Enum FSD.ERobotState
	 */
	enum class ERobotState : uint8_t
	{
		Enemy       = 0,
		Friendly    = 1,
		PoweredDown = 2,
		MAX         = 3
	};

	/**
	 * Enum FSD.ECrossbowStuckType
	 */
	enum class ECrossbowStuckType : uint8_t
	{
		Default  = 0,
		Electric = 1,
		Chemical = 2,
		Banshee  = 3,
		MAX      = 4
	};

	/**
	 * Enum FSD.EKeyBindingAxis
	 */
	enum class EKeyBindingAxis : uint8_t
	{
		None     = 0,
		Positive = 1,
		Negative = 2,
		MAX      = 3
	};

	/**
	 * Enum FSD.EDealType
	 */
	enum class EDealType : uint8_t
	{
		Buy  = 0,
		Sell = 1,
		MAX  = 2
	};

	/**
	 * Enum FSD.EPlasmaCarbineConditions
	 */
	enum class EPlasmaCarbineConditions : uint8_t
	{
		ShieldRemovedOnReload = 0,
		MAX                   = 1
	};

	/**
	 * Enum FSD.EBoltActionWeaponConditions
	 */
	enum class EBoltActionWeaponConditions : uint8_t
	{
		WasAimedShot  = 0,
		WasNormalShot = 1,
		MAX           = 2
	};

	/**
	 * Enum FSD.EDirectDamageConditionEnum
	 */
	enum class EDirectDamageConditionEnum : uint8_t
	{
		Direct = 0,
		Radial = 1,
		MAX    = 2
	};

	/**
	 * Enum FSD.EImpulseDirectionSource
	 */
	enum class EImpulseDirectionSource : uint8_t
	{
		SourceForward       = 0,
		SourceToTarget      = 1,
		PlayerToTarget      = 2,
		TargetUp            = 3,
		TargetRandomOnPlane = 4,
		MAX                 = 5
	};

	/**
	 * Enum FSD.EDamageUpgrade
	 */
	enum class EDamageUpgrade : uint8_t
	{
		Damage                    = 0,
		WeakpointDamageMultiplier = 1,
		StaggerChance             = 2,
		StaggerDuration           = 3,
		RadialDamage              = 4,
		RadialRange               = 5,
		ArmorDamageMultiplier     = 6,
		FearFactor                = 7,
		RadialRangeMultiplier     = 8,
		StaggerOnWeakpointOnly    = 9,
		FriendlyFireModifier      = 10,
		ShattersArmor             = 11,
		ArmorPenetration          = 12,
		MAX                       = 13
	};

	/**
	 * Enum FSD.EDamageComponentType
	 */
	enum class EDamageComponentType : uint8_t
	{
		Primary    = 0,
		Secondary  = 1,
		Tertiary   = 2,
		Quaternary = 3,
		Quinary    = 4,
		Any        = 5,
		MAX        = 6
	};

	/**
	 * Enum FSD.EDashPointsGenerationMode
	 */
	enum class EDashPointsGenerationMode : uint8_t
	{
		Surround = 0,
		Forward  = 1,
		MAX      = 2
	};

	/**
	 * Enum FSD.EDebrisOrientation
	 */
	enum class EDebrisOrientation : uint8_t
	{
		Random               = 0,
		RandomXY             = 1,
		AlignToSurfaceNormal = 2,
		Fixed                = 3,
		MAX                  = 4
	};

	/**
	 * Enum FSD.ESpecialDebrisType
	 */
	enum class ESpecialDebrisType : uint8_t
	{
		None      = 0,
		Plague    = 1,
		LitPlague = 2,
		MAX       = 3
	};

	/**
	 * Enum FSD.EDebrisMeshShadows
	 */
	enum class EDebrisMeshShadows : uint8_t
	{
		Never  = 0,
		High   = 1,
		Always = 2,
		MAX    = 3
	};

	/**
	 * Enum FSD.EDebrisMeshCollisionProfile
	 */
	enum class EDebrisMeshCollisionProfile : uint8_t
	{
		NoCollision   = 0,
		HitOnly       = 1,
		HitAndCollide = 2,
		MAX           = 3
	};

	/**
	 * Enum FSD.EDebrisColliderType
	 */
	enum class EDebrisColliderType : uint8_t
	{
		Object       = 0,
		AirParticles = 1,
		ObjectB      = 2,
		ObjectC      = 3,
		MAX          = 4
	};

	/**
	 * Enum FSD.EDebrisCarvedType
	 */
	enum class EDebrisCarvedType : uint8_t
	{
		Large           = 0,
		Small           = 1,
		LevelGeneration = 2,
		Resources       = 3,
		MAX             = 4
	};

	/**
	 * Enum FSD.EDebrisItemPass
	 */
	enum class EDebrisItemPass : uint8_t
	{
		PrePlacement = 0,
		Plague       = 1,
		Main         = 2,
		MAX          = 3
	};

	/**
	 * Enum FSD.EDecalImportance
	 */
	enum class EDecalImportance : uint8_t
	{
		High   = 0,
		Normal = 1,
		Low    = 2,
		MAX    = 3
	};

	/**
	 * Enum FSD.ELandscapeCellFilter
	 */
	enum class ELandscapeCellFilter : uint8_t
	{
		Any           = 0,
		Empty         = 1,
		Filled        = 2,
		Diggable      = 3,
		NotDiggable   = 4,
		Collidable    = 5,
		NotCollidable = 6,
		Rubble        = 7,
		NotRubble     = 8,
		MAX           = 9
	};

	/**
	 * Enum FSD.EOffsetFrom
	 */
	enum class EOffsetFrom : uint8_t
	{
		None    = 0,
		Floor   = 1,
		Ceiling = 2,
		MAX     = 3
	};

	/**
	 * Enum FSD.EDeepMovementMode
	 */
	enum class EDeepMovementMode : uint8_t
	{
		Normal  = 0,
		Flee    = 1,
		Fly     = 2,
		BackOff = 3,
		MAX     = 4
	};

	/**
	 * Enum FSD.EDefendPointState
	 */
	enum class EDefendPointState : uint8_t
	{
		Idle      = 0,
		Started   = 1,
		Completed = 2,
		Failed    = 3,
		MAX       = 4
	};

	/**
	 * Enum FSD.EDialogRestriction
	 */
	enum class EDialogRestriction : uint8_t
	{
		None             = 0,
		SinglePlayerOnly = 1,
		MultiPlayerOnly  = 2,
		MAX              = 3
	};

	/**
	 * Enum FSD.EVeteranScaling
	 */
	enum class EVeteranScaling : uint8_t
	{
		NormalEnemy = 0,
		LargeEnemy  = 1,
		MAX         = 2
	};

	/**
	 * Enum FSD.EEnemySignificance
	 */
	enum class EEnemySignificance : uint8_t
	{
		Swarmer  = 0,
		Normal   = 1,
		Critical = 2,
		Critter  = 3,
		MAX      = 4
	};

	/**
	 * Enum FSD.EDiscordBiomeType
	 */
	enum class EDiscordBiomeType : uint8_t
	{
		CrystallineCaverns = 0,
		FungusBogs         = 1,
		GlacialStrata      = 2,
		DenseBiozone       = 3,
		MagmaCore          = 4,
		Radioactive        = 5,
		SaltPits           = 6,
		Sandblasted        = 7,
		CausticMire        = 8,
		AzureWeald         = 9,
		HollowBough        = 10,
		Spacerig           = 11,
		MAX                = 12
	};

	/**
	 * Enum FSD.EDiscordMissionType
	 */
	enum class EDiscordMissionType : uint8_t
	{
		MiningExpedition = 0,
		EggHunt          = 1,
		Escort           = 2,
		Elimination      = 3,
		PointExtraction  = 4,
		Salvage          = 5,
		Refinery         = 6,
		None             = 7,
		MAX              = 8
	};

	/**
	 * Enum FSD.EDoubleDrillState
	 */
	enum class EDoubleDrillState : uint8_t
	{
		Equipping  = 0,
		Idle       = 1,
		Mining     = 2,
		Overheated = 3,
		OutOfFuel  = 4,
		MAX        = 5
	};

	/**
	 * Enum FSD.EBoscoAbillityTargetPreference
	 */
	enum class EBoscoAbillityTargetPreference : uint8_t
	{
		Self           = 0,
		SelectedTarget = 1,
		ClosestPlayer  = 2,
		ClosestEnemy   = 3,
		TargetLocation = 4,
		MAX            = 5
	};

	/**
	 * Enum FSD.EDroneActions
	 */
	enum class EDroneActions : uint8_t
	{
		Wandering = 0,
		Mining    = 1,
		Fighting  = 2,
		Lighting  = 3,
		Reviving  = 4,
		MAX       = 5
	};

	/**
	 * Enum FSD.EDynamicReverbSetting
	 */
	enum class EDynamicReverbSetting : uint8_t
	{
		None   = 0,
		Small  = 1,
		Medium = 2,
		Large  = 3,
		MAX    = 4
	};

	/**
	 * Enum FSD.EEnemyControlState
	 */
	enum class EEnemyControlState : uint8_t
	{
		Connecting    = 0,
		Connected     = 1,
		ThrowingOff   = 2,
		Disconnecting = 3,
		Disconneced   = 4,
		MAX           = 5
	};

	/**
	 * Enum FSD.EEnemyDescriptorCheatClass
	 */
	enum class EEnemyDescriptorCheatClass : uint8_t
	{
		Hidden   = 0,
		Basic    = 1,
		Advanced = 2,
		Mactera  = 3,
		Specials = 4,
		Boss     = 5,
		MAX      = 6
	};

	/**
	 * Enum FSD.EEnemyType
	 */
	enum class EEnemyType : uint8_t
	{
		Ground          = 0,
		Flying          = 1,
		GroundAndFlying = 2,
		Stationary      = 3,
		MAX             = 4
	};

	/**
	 * Enum FSD.EEnemyFamily
	 */
	enum class EEnemyFamily : uint8_t
	{
		Glyphid    = 0,
		Mactera    = 1,
		Naedocyte  = 2,
		Qronar     = 3,
		Xynarch    = 4,
		Nayaka     = 5,
		Deeptora   = 6,
		Korlok     = 7,
		Automaton  = 8,
		Unknown    = 9,
		RivalTech  = 10,
		Lithophage = 11,
		MAX        = 12
	};

	/**
	 * Enum FSD.EEscortExtractorState
	 */
	enum class EEscortExtractorState : uint8_t
	{
		ReadyToGrab = 0,
		Taken       = 1,
		Full        = 2,
		MAX         = 3
	};

	/**
	 * Enum FSD.EEscortMissionState
	 */
	enum class EEscortMissionState : uint8_t
	{
		Stationary     = 0,
		Moving         = 1,
		WaitingForFuel = 2,
		FinalEvent     = 3,
		Finished       = 4,
		ShellCracked   = 5,
		VehicleDead    = 6,
		InGarage       = 7,
		MAX            = 8
	};

	/**
	 * Enum FSD.EExtractorState
	 */
	enum class EExtractorState : uint8_t
	{
		Attached  = 0,
		OnGround  = 1,
		Equipping = 2,
		Idle      = 3,
		Mining    = 4,
		MAX       = 5
	};

	/**
	 * Enum FSD.EFacilityTentacleState
	 */
	enum class EFacilityTentacleState : uint8_t
	{
		Idle      = 0,
		HasTarget = 1,
		Melee     = 2,
		Ranged    = 3,
		MAX       = 4
	};

	/**
	 * Enum FSD.EIndicatorMode
	 */
	enum class EIndicatorMode : uint8_t
	{
		EConstant = 0,
		EFlashing = 1,
		EOff      = 2,
		MAX       = 3
	};

	/**
	 * Enum FSD.EFSDAchievementType
	 */
	enum class EFSDAchievementType : uint8_t
	{
		NoStatUsed           = 0,
		IncrementStatPerCall = 1,
		SetStatIfHighscore   = 2,
		ForceNewStatEachCall = 3,
		MAX                  = 4
	};

	/**
	 * Enum FSD.ETargetStateDamageBonusType
	 */
	enum class ETargetStateDamageBonusType : uint8_t
	{
		Frozen    = 0,
		OnFire    = 1,
		Fleeing   = 2,
		Staggered = 3,
		MAX       = 4
	};

	/**
	 * Enum FSD.EPauseReason
	 */
	enum class EPauseReason : uint8_t
	{
		Invalid             = 0,
		MenuActive          = 1,
		ReconnectController = 2,
		MAX                 = 3
	};

	/**
	 * Enum FSD.ESaveSlotChangeProcedure
	 */
	enum class ESaveSlotChangeProcedure : uint8_t
	{
		NewSave       = 0,
		Load          = 1,
		Save          = 2,
		NewModdedSave = 3,
		MAX           = 4
	};

	/**
	 * Enum FSD.ENVidiaReflexMode
	 */
	enum class ENVidiaReflexMode : uint8_t
	{
		Disabled         = 0,
		Enabled          = 1,
		EnabledWithBoost = 2,
		MAX              = 3
	};

	/**
	 * Enum FSD.EVolumeType
	 */
	enum class EVolumeType : uint8_t
	{
		CharacterVoices = 0,
		Master          = 1,
		SFX             = 2,
		Music           = 3,
		VoiceChat       = 4,
		MissionControl  = 5,
		MAX             = 6
	};

	/**
	 * Enum FSD.EInviteBlockReason
	 */
	enum class EInviteBlockReason : uint8_t
	{
		SoloSession       = 0,
		ActiveDeepDive    = 1,
		Tutorial          = 2,
		OnlinePlayBlocked = 3,
		IsClient          = 4,
		None              = 5,
		MAX               = 6
	};

	/**
	 * Enum FSD.EPostProcessingType
	 */
	enum class EPostProcessingType : uint8_t
	{
		GameWorld         = 0,
		CharacterSelector = 1,
		MAX               = 2
	};

	/**
	 * Enum FSD.EItemNotificationType
	 */
	enum class EItemNotificationType : uint8_t
	{
		NewOverclock = 0,
		MAX          = 1
	};

	/**
	 * Enum FSD.ESteamBranch
	 */
	enum class ESteamBranch : uint8_t
	{
		Main             = 0,
		Experimental     = 1,
		Internal_Testing = 2,
		Other            = 3,
		MAX              = 4
	};

	/**
	 * Enum FSD.EFSDTargetPlatform
	 */
	enum class EFSDTargetPlatform : uint8_t
	{
		Steam   = 0,
		XboxOne = 1,
		Win10   = 2,
		PS4     = 3,
		PS5     = 4,
		MAX     = 5
	};

	/**
	 * Enum FSD.EMoveType
	 */
	enum class EMoveType : uint8_t
	{
		EaseIn  = 0,
		EaseOut = 1,
		MAX     = 2
	};

	/**
	 * Enum FSD.EPingType
	 */
	enum class EPingType : uint8_t
	{
		EaseOut = 0,
		Bounce  = 1,
		MAX     = 2
	};

	/**
	 * Enum FSD.EFSDGoogleAnalyticsProperties
	 */
	enum class EFSDGoogleAnalyticsProperties : uint8_t
	{
		DRG            = 0,
		Discord        = 1,
		CommunityGoals = 2,
		DRG_Discord    = 3,
		All            = 4,
		Other          = 5,
		MAX            = 6
	};

	/**
	 * Enum FSD.EGrabberState
	 */
	enum class EGrabberState : uint8_t
	{
		StandBy = 0,
		Chase   = 1,
		Carry   = 2,
		Flee    = 3,
		MAX     = 4
	};

	/**
	 * Enum FSD.EGrabbedStateCameraMode
	 */
	enum class EGrabbedStateCameraMode : uint8_t
	{
		FirstPerson = 0,
		ThirdPerson = 1,
		MAX         = 2
	};

	/**
	 * Enum FSD.EGuntowerModuleState
	 */
	enum class EGuntowerModuleState : uint8_t
	{
		EDormant    = 0,
		EActive     = 1,
		EVulnerable = 2,
		EDestoyed   = 3,
		MAX         = 4
	};

	/**
	 * Enum FSD.ERicochetBehavior
	 */
	enum class ERicochetBehavior : uint8_t
	{
		All       = 0,
		PawnsOnly = 1,
		NotPawns  = 2,
		MAX       = 3
	};

	/**
	 * Enum FSD.EGeneratorIconType
	 */
	enum class EGeneratorIconType : uint8_t
	{
		Vanity      = 0,
		PickaxePart = 1,
		PickaxeSet  = 2,
		WeaponSkin  = 3,
		MAX         = 4
	};

	/**
	 * Enum FSD.EKeyBindingSlot
	 */
	enum class EKeyBindingSlot : uint8_t
	{
		Primary   = 0,
		Secondary = 1,
		MAX       = 2
	};

	/**
	 * Enum FSD.EInputInteraction
	 */
	enum class EInputInteraction : uint8_t
	{
		Press = 0,
		Hold  = 1,
		MAX   = 2
	};

	/**
	 * Enum FSD.EWeaponMaintenanceState
	 */
	enum class EWeaponMaintenanceState : uint8_t
	{
		Locked      = 0,
		Maintaining = 1,
		LevelUp     = 2,
		Finished    = 3,
		MAX         = 4
	};

	/**
	 * Enum FSD.EItemSkinCollectionType
	 */
	enum class EItemSkinCollectionType : uint8_t
	{
		PerCharacter = 0,
		PerItem      = 1,
		MAX          = 2
	};

	/**
	 * Enum FSD.EMicrowaveGunUpgrade
	 */
	enum class EMicrowaveGunUpgrade : uint8_t
	{
		ESlowOnHit                  = 0,
		EFocusLense                 = 1,
		EWideLense                  = 2,
		ESpreadFire                 = 3,
		ESpreadNeuro                = 4,
		EKilledTargetsExplodeChance = 5,
		ERadiantSuperheater         = 6,
		EHeatsink                   = 7,
		BlisteringNecrosis          = 8,
		EGammaContaminationZone     = 9,
		ETemperatureAmplifier       = 10,
		MAX                         = 11
	};

	/**
	 * Enum FSD.ECapsuleHitscanUpgradeType
	 */
	enum class ECapsuleHitscanUpgradeType : uint8_t
	{
		ShotWidth        = 0,
		PenetrateEnemies = 1,
		MAX              = 2
	};

	/**
	 * Enum FSD.EHeavyParticleCannonUpgrade
	 */
	enum class EHeavyParticleCannonUpgrade : uint8_t
	{
		ReloadOnButtonRelease    = 0,
		BoosterModule            = 1,
		KillAddsAmmo             = 2,
		RadialDamageIncPerSecond = 3,
		RadialRangeIncPerSecond  = 4,
		BulkyBeam                = 5,
		ProjectionModule         = 6,
		PlatformExplosions       = 7,
		MAX                      = 8
	};

	/**
	 * Enum FSD.ECrossbowUpgrades
	 */
	enum class ECrossbowUpgrades : uint8_t
	{
		SpecialArrowPheramone         = 0,
		SpecialArrowTaser             = 1,
		SpecialArrowChemical          = 2,
		BansheeModule                 = 3,
		Magnetic                      = 4,
		RadioModule                   = 5,
		Ricochet                      = 6,
		VelocityChange                = 7,
		DamageDefault                 = 8,
		RadialDamageDefault           = 9,
		Trifork                       = 10,
		Pentafork                     = 11,
		BattleFrenzy                  = 12,
		IncreaseSpecialAmmo           = 13,
		IncreaseSpecialAmmoPercent    = 14,
		SuperFast                     = 15,
		IncreaseSpecialEffectDuration = 16,
		FasterSwitch                  = 17,
		CryoArrow                     = 18,
		FireArrow                     = 19,
		ReloadTimeDefaultArrow        = 20,
		RateOfFireDefaultArrow        = 21,
		MAX                           = 22
	};

	/**
	 * Enum FSD.EPlasmaCarbineUpgrades
	 */
	enum class EPlasmaCarbineUpgrades : uint8_t
	{
		RateOfFireBoostOnFullShield = 0,
		RemoveShieldOnOverheat      = 1,
		RemoveShieldOnReload        = 2,
		MAX                         = 3
	};

	/**
	 * Enum FSD.ELockOnWeaponUpgrades
	 */
	enum class ELockOnWeaponUpgrades : uint8_t
	{
		MaxLockOnDegree             = 0,
		TimeBetweenLockedShots      = 1,
		LockOnTime                  = 2,
		MaxTargets                  = 3,
		LoseLockOnDegree            = 4,
		MaxLockOnRange              = 5,
		PrioritizeLowHitpoint       = 6,
		AlwaysHitTarget             = 7,
		MaxLockOnDuration           = 8,
		LockOnControlsSentryGun     = 9,
		AoeHitCountThreshhold       = 10,
		SentryGunShootsOnLockedShot = 11,
		UseLockOnTargetStatusEffect = 12,
		FearEnabled                 = 13,
		MAX                         = 14
	};

	/**
	 * Enum FSD.EGooGunProjectileUpgrades
	 */
	enum class EGooGunProjectileUpgrades : uint8_t
	{
		PuddleLifeSpan = 0,
		FragmentCount  = 1,
		MAX            = 2
	};

	/**
	 * Enum FSD.EGooGunUpgrades
	 */
	enum class EGooGunUpgrades : uint8_t
	{
		ChargeFire      = 0,
		BurstFire       = 1,
		ShotCostCharged = 2,
		ChargeTime      = 3,
		ChargeShotCount = 4,
		MAX             = 5
	};

	/**
	 * Enum FSD.EMicroMissileLauncherUpgrades
	 */
	enum class EMicroMissileLauncherUpgrades : uint8_t
	{
		ChargeFire                          = 0,
		BuckFire                            = 1,
		DisableHomingOnRelease              = 2,
		ShotDirectionHorizontalDegreeOffset = 3,
		ShotDirectionVerticleDegreeOffset   = 4,
		MAX                                 = 5
	};

	/**
	 * Enum FSD.EProjectileLauncherBaseUpgradeType
	 */
	enum class EProjectileLauncherBaseUpgradeType : uint8_t
	{
		VerticalSpread                = 0,
		HorizontalSpread              = 1,
		TransferVelocityFromCharacter = 2,
		ArcStartAngle                 = 3,
		MAX                           = 4
	};

	/**
	 * Enum FSD.EDetPackUpgrades
	 */
	enum class EDetPackUpgrades : uint8_t
	{
		CanPickUp          = 0,
		CarveDiameter      = 1,
		ExplodeOnDeath     = 2,
		ExtraFearRadius    = 3,
		ExtraStaggerRadius = 4,
		MAX                = 5
	};

	/**
	 * Enum FSD.EPlatformGunUpgrades
	 */
	enum class EPlatformGunUpgrades : uint8_t
	{
		BiggerPlatform = 0,
		LessFallDamage = 1,
		BugRepellant   = 2,
		CubePlatform   = 3,
		MAX            = 4
	};

	/**
	 * Enum FSD.EBoscoUpgrades
	 */
	enum class EBoscoUpgrades : uint8_t
	{
		MiningSpeedUpgrade  = 0,
		ExtraRevive         = 1,
		ActiveLightRadius   = 2,
		Missile             = 3,
		CryoGrenade         = 4,
		SACooldownReduction = 5,
		ExtraAbillityCharge = 6,
		MAX                 = 7
	};

	/**
	 * Enum FSD.EArmorUpgradeType
	 */
	enum class EArmorUpgradeType : uint8_t
	{
		RegenDelay            = 0,
		RegenRate             = 1,
		ReviveInvulnerability = 2,
		MAX                   = 3
	};

	/**
	 * Enum FSD.ETriggeredStatusEffectType
	 */
	enum class ETriggeredStatusEffectType : uint8_t
	{
		ShieldDestroyed       = 0,
		GrapplingHookReleased = 1,
		NONE                  = 2,
		MAX                   = 3
	};

	/**
	 * Enum FSD.EShieldGeneratorUpgrades
	 */
	enum class EShieldGeneratorUpgrades : uint8_t
	{
		Radius           = 0,
		Duration         = 1,
		DeployTime       = 2,
		RechargeTime     = 3,
		RechargeCount    = 4,
		PushStatusEffect = 5,
		MAX              = 6
	};

	/**
	 * Enum FSD.ESentryGunUpgradeType
	 */
	enum class ESentryGunUpgradeType : uint8_t
	{
		MaxAmmo          = 0,
		ReloadSpeed      = 1,
		ExtraSentry      = 2,
		AngleRestriction = 3,
		ManualTargeting  = 4,
		MaxRange         = 5,
		RotationSpeed    = 6,
		BurstCooldown    = 7,
		MAX              = 8
	};

	/**
	 * Enum FSD.EGrapplingHookUpgrade
	 */
	enum class EGrapplingHookUpgrade : uint8_t
	{
		MaxDistance = 0,
		MaxSpeed    = 1,
		WindUpTime  = 2,
		MAX         = 3
	};

	/**
	 * Enum FSD.EZiplineGunUpgrades
	 */
	enum class EZiplineGunUpgrades : uint8_t
	{
		MaxAngle            = 0,
		MaxDistance         = 1,
		MovementSpeed       = 2,
		FallDamageReduction = 3,
		MAX                 = 4
	};

	/**
	 * Enum FSD.EElectricalSMGUpgrades
	 */
	enum class EElectricalSMGUpgrades : uint8_t
	{
		AoEChance          = 0,
		PlasmaBeam         = 1,
		TurretEMPDischarge = 2,
		MAX                = 3
	};

	/**
	 * Enum FSD.EChargedProjectileUpgrades
	 */
	enum class EChargedProjectileUpgrades : uint8_t
	{
		ExplodesOnDamage    = 0,
		AoEDamageInFlight   = 1,
		PersistentExplosion = 2,
		MAX                 = 3
	};

	/**
	 * Enum FSD.EFlaregunProjectileUpgrades
	 */
	enum class EFlaregunProjectileUpgrades : uint8_t
	{
		Duration = 0,
		MAX      = 1
	};

	/**
	 * Enum FSD.EFlaregunUpgrades
	 */
	enum class EFlaregunUpgrades : uint8_t
	{
		AutoReload = 0,
		MAX        = 1
	};

	/**
	 * Enum FSD.EProjectileUpgrade
	 */
	enum class EProjectileUpgrade : uint8_t
	{
		Velocity                  = 0,
		MaxVelocity               = 1,
		Bouncy                    = 2,
		Lifetime                  = 3,
		DoOnImpact                = 4,
		DoOnImpact2               = 5,
		DoOnImpact3               = 6,
		DoOnSpawn                 = 7,
		HomingStrength            = 8,
		SetInitialSpeedToMaxSpeed = 9,
		AccelerationMultiplier    = 10,
		MaxPropulsionTime         = 11,
		GravityScale              = 12,
		CustomEvent               = 13,
		MAX                       = 14
	};

	/**
	 * Enum FSD.ELineCutterProjectileUpgradeType
	 */
	enum class ELineCutterProjectileUpgradeType : uint8_t
	{
		LineSize                = 0,
		LineSizeMultiplier      = 1,
		ExplosiveRound          = 2,
		SetDeployDelay          = 3,
		AddDeployTime           = 4,
		ExplodeOnNextProjectile = 5,
		DoubleLine              = 6,
		LineSizeAdd             = 7,
		SetDeployTime           = 8,
		RollUntilStop           = 9,
		Yawing                  = 10,
		PlasmaTrail             = 11,
		Homing                  = 12,
		MAX                     = 13
	};

	/**
	 * Enum FSD.ELineCutterUpgradeType
	 */
	enum class ELineCutterUpgradeType : uint8_t
	{
		ReverseDirection      = 0,
		ExplodeLastProjectile = 1,
		MAX                   = 2
	};

	/**
	 * Enum FSD.EGrenadeUpgradeType
	 */
	enum class EGrenadeUpgradeType : uint8_t
	{
		MaxGrenades = 0,
		FuseTime    = 1,
		MAX         = 2
	};

	/**
	 * Enum FSD.EFlareUpgradeType
	 */
	enum class EFlareUpgradeType : uint8_t
	{
		Duration       = 0,
		MaxFlares      = 1,
		ProductionTime = 2,
		MAX            = 3
	};

	/**
	 * Enum FSD.ESingleUsableUpgradeType
	 */
	enum class ESingleUsableUpgradeType : uint8_t
	{
		UseDuration = 0,
		MAX         = 1
	};

	/**
	 * Enum FSD.EModifyStatusEffectDamageUpgrade
	 */
	enum class EModifyStatusEffectDamageUpgrade : uint8_t
	{
		Duration = 0,
		MAX      = 1
	};

	/**
	 * Enum FSD.EHitScanBaseUpgradeType
	 */
	enum class EHitScanBaseUpgradeType : uint8_t
	{
		MaxVerticalSpread              = 0,
		MaxHorizontalSpread            = 1,
		MaxPenetrations                = 2,
		WeaponAccuracySpreadMultiplier = 3,
		SpreadPerShot                  = 4,
		MinSpreadWhileMoving           = 5,
		SpreadRecoveryMultiplier       = 6,
		MinSpreadWhileSprinting        = 7,
		MaxSpread                      = 8,
		RicochetChance                 = 9,
		RicochetOnWeakspotOnly         = 10,
		RicochetBehaviourAll           = 11,
		RicochetBehaviourPawnsOnly     = 12,
		RicochetBehaviourNotPawns      = 13,
		MAX                            = 14
	};

	/**
	 * Enum FSD.EReflectionHitscanUpgradeType
	 */
	enum class EReflectionHitscanUpgradeType : uint8_t
	{
		ReflectionCount = 0,
		MAX             = 1
	};

	/**
	 * Enum FSD.EMultiHitscanUpgradeType
	 */
	enum class EMultiHitscanUpgradeType : uint8_t
	{
		BulletsPerShot = 0,
		MAX            = 1
	};

	/**
	 * Enum FSD.EInventoryItemUpgradeType
	 */
	enum class EInventoryItemUpgradeType : uint8_t
	{
		MovementSpeedWhileUsing = 0,
		CooldownRate            = 1,
		UnJamDuration           = 2,
		ManualCooldownDelay     = 3,
		ManualHeatPerUse        = 4,
		MAX                     = 5
	};

	/**
	 * Enum FSD.EDoubleDrillUpgradeType
	 */
	enum class EDoubleDrillUpgradeType : uint8_t
	{
		MiningRate          = 0,
		MaxFuel             = 1,
		HeatRemovalOnKill   = 2,
		HeatRemovalOnDamage = 3,
		MovementPenalty     = 4,
		MAX                 = 5
	};

	/**
	 * Enum FSD.EFlameThrowerUpgradeType
	 */
	enum class EFlameThrowerUpgradeType : uint8_t
	{
		StickyFlameDuration        = 0,
		LongReach                  = 1,
		AoEHeat                    = 2,
		KilledTargetsExplodeChance = 3,
		MAX                        = 4
	};

	/**
	 * Enum FSD.EPickaxeUpgradeType
	 */
	enum class EPickaxeUpgradeType : uint8_t
	{
		RockMining               = 0,
		OneHitMineralMining      = 1,
		ReceiveBonusMineralNitra = 2,
		ReceiveBonusMineralGold  = 3,
		EnablePowerAttack        = 4,
		PowerAttackCoolDown      = 5,
		MAX                      = 6
	};

	/**
	 * Enum FSD.ECryoSprayUpgrades
	 */
	enum class ECryoSprayUpgrades : uint8_t
	{
		PressureDropMultiplier  = 0,
		PressureGainMultiplier  = 1,
		ChargeupTime            = 2,
		RePressurisationTime    = 3,
		FrozenTargetsCanShatter = 4,
		AoECold                 = 5,
		LongReach               = 6,
		SprayWidth              = 7,
		MAX                     = 8
	};

	/**
	 * Enum FSD.ERevolerUpgrades
	 */
	enum class ERevolerUpgrades : uint8_t
	{
		OnKillFearFactor = 0,
		MAX              = 1
	};

	/**
	 * Enum FSD.EBasicPistol
	 */
	enum class EBasicPistol : uint8_t
	{
		ConsecutiveHitsDamageBonus = 0,
		MAX                        = 1
	};

	/**
	 * Enum FSD.EAutoShotgunUpgrades
	 */
	enum class EAutoShotgunUpgrades : uint8_t
	{
		TurretSpecialAttackEnabled = 0,
		RateOfFireAndAutoMatic     = 1,
		CQCBuffOnKill              = 2,
		MAX                        = 3
	};

	/**
	 * Enum FSD.EBurstWeaponUpgrades
	 */
	enum class EBurstWeaponUpgrades : uint8_t
	{
		FullBurstHitBonusDamage = 0,
		FullBurstStaggerDuraion = 1,
		MAX                     = 2
	};

	/**
	 * Enum FSD.ESawedOffShotgunUpgrades
	 */
	enum class ESawedOffShotgunUpgrades : uint8_t
	{
		FearOnShoot = 0,
		ShockWave   = 1,
		ShotgunJump = 2,
		MAX         = 3
	};

	/**
	 * Enum FSD.EAutoCannonUpgrades
	 */
	enum class EAutoCannonUpgrades : uint8_t
	{
		FireTimeIncreaseScaleMultiplier = 0,
		DamageBonusAtFullROF            = 1,
		StatusEffectAtFullROF           = 2,
		StartingFireRate                = 3,
		MaxFireRate                     = 4,
		MAX                             = 5
	};

	/**
	 * Enum FSD.ECoilgunUpgrades
	 */
	enum class ECoilgunUpgrades : uint8_t
	{
		EResistanceWhileCharging = 0,
		ETransferAilment         = 1,
		EFlamekills              = 2,
		EOvercharge              = 3,
		EUnderCharge             = 4,
		EWeaponBlast             = 5,
		EShotwaveRange           = 6,
		EImpactFearFactor        = 7,
		EDamageOnShotWave        = 8,
		EImpactFearRadius        = 9,
		EEffectTrailDuration     = 10,
		EEffectTrailBonusRadius  = 11,
		EBrokenShieldBonus       = 12,
		EPostChargeBurst         = 13,
		EOwnerShieldCapacity     = 14,
		EBlockShieldWhileCharing = 15,
		EWeaknessWhileCharging   = 16,
		EPierceDepthDamage       = 17,
		EBurnGround              = 18,
		EElectricTrail           = 19,
		EFireTrail               = 20,
		EPenetrationDepth        = 21,
		EPrimaryBonusShotWidth   = 22,
		EShieldDelay             = 23,
		MAX                      = 24
	};

	/**
	 * Enum FSD.EChargedWeaponUpgrades
	 */
	enum class EChargedWeaponUpgrades : uint8_t
	{
		ShotCostAtFullCharge  = 0,
		ChargeSpeed           = 1,
		CoolingRate           = 2,
		HeatPerSecondCharging = 3,
		HeatPerSecondCharged  = 4,
		HeatPerChargedShot    = 5,
		HeatPerNormalShot     = 6,
		MAX                   = 7
	};

	/**
	 * Enum FSD.EDualMachinePistolsUpgrades
	 */
	enum class EDualMachinePistolsUpgrades : uint8_t
	{
		TriggerStatusEffectOnEmptyClip = 0,
		MAX                            = 1
	};

	/**
	 * Enum FSD.EBoltActionRifleUpgrades
	 */
	enum class EBoltActionRifleUpgrades : uint8_t
	{
		FocusSpeed                              = 0,
		AimedShotStagger                        = 1,
		AimedWeakShotKillFearFactor             = 2,
		FocusDamageBonus                        = 3,
		UnZoomedAccuracySpread                  = 4,
		FocusedWeakspotHitStatusEffect          = 5,
		NoGravityOnFocus                        = 6,
		KillReloadTimeBoost                     = 7,
		AimedShotWeakpointDamageBonusMultiplier = 8,
		AimedShotAmmoCost                       = 9,
		MAX                                     = 10
	};

	/**
	 * Enum FSD.EAssaultRifleUpgrade
	 */
	enum class EAssaultRifleUpgrade : uint8_t
	{
		KillResetsSpread        = 0,
		KillTriggerStatusEffect = 1,
		MAX                     = 2
	};

	/**
	 * Enum FSD.EGatlingGunUpgrade
	 */
	enum class EGatlingGunUpgrade : uint8_t
	{
		DamageMultiplierAtMaxStabilization = 0,
		HeatRemovedOnKill                  = 1,
		CriticalOverheat                   = 2,
		BarrelProximityDamage              = 3,
		MAX                                = 4
	};

	/**
	 * Enum FSD.EBeltDrivenWeaponUpgrade
	 */
	enum class EBeltDrivenWeaponUpgrade : uint8_t
	{
		BarrelSpinupTime   = 0,
		BarrelSpinDownTime = 1,
		MAX                = 2
	};

	/**
	 * Enum FSD.EAmmoDrivenWeapnUpgradeType
	 */
	enum class EAmmoDrivenWeapnUpgradeType : uint8_t
	{
		MaxAmmo                   = 0,
		ClipSize                  = 1,
		RateOfFire                = 2,
		ReloadSpeed               = 3,
		RecoilMultiplier          = 4,
		RecoilMultiplierV         = 5,
		RecoilMultiplierH         = 6,
		BurstCount                = 7,
		BurstRateOfFire           = 8,
		ActivateBurstFireMode     = 9,
		ActivateAutomaticFireMode = 10,
		HeatUpRateModifier        = 11,
		AutoReloadDuration        = 12,
		RecoilMass                = 13,
		OverheatOnReload          = 14,
		ShotCost                  = 15,
		CustomEvent1              = 16,
		HeatReductionOnReload     = 17,
		MAX                       = 18
	};

	/**
	 * Enum FSD.ELaserPointerMarkerType
	 */
	enum class ELaserPointerMarkerType : uint8_t
	{
		Primary   = 0,
		Secondary = 1,
		Count     = 2,
		MAX       = 3
	};

	/**
	 * Enum FSD.EStrobingMode
	 */
	enum class EStrobingMode : uint8_t
	{
		Intensity         = 0,
		AttenuationRadius = 1,
		MAX               = 2
	};

	/**
	 * Enum FSD.EStrobeMaterialMode
	 */
	enum class EStrobeMaterialMode : uint8_t
	{
		Material = 0,
		Mesh     = 1,
		MAX      = 2
	};

	/**
	 * Enum FSD.EArmorType
	 */
	enum class EArmorType : uint8_t
	{
		Light       = 0,
		Heavy       = 1,
		Unbreakable = 2,
		MAX         = 3
	};

	/**
	 * Enum FSD.EDamageType
	 */
	enum class EDamageType : uint8_t
	{
		Fire             = 0,
		Cold             = 1,
		Melee            = 2,
		Kinetic          = 3,
		Explosive        = 4,
		Stun             = 5,
		Electrocution    = 6,
		Fear             = 7,
		Radiation        = 8,
		Pheromone        = 9,
		Poison           = 10,
		ArmorBreaking    = 11,
		Push             = 12,
		Grab             = 13,
		None             = 14,
		Slow             = 15,
		Defense          = 16,
		TemperatureShock = 17,
		Corrosive        = 18,
		Piercing         = 19,
		RockPox          = 20,
		MAX              = 21
	};

	/**
	 * Enum FSD.EEnemyAttackType
	 */
	enum class EEnemyAttackType : uint8_t
	{
		Melee  = 0,
		Ranged = 1,
		Grab   = 2,
		Area   = 3,
		Move   = 4,
		MAX    = 5
	};

	/**
	 * Enum FSD.EMissionStructure
	 */
	enum class EMissionStructure : uint8_t
	{
		SingleMission   = 0,
		DeepDive_Normal = 1,
		DeepDive_Elite  = 2,
		MAX             = 3
	};

	/**
	 * Enum FSD.ENisseState
	 */
	enum class ENisseState : uint8_t
	{
		Idle    = 0,
		Walking = 1,
		Running = 2,
		Frozen  = 3,
		MAX     = 4
	};

	/**
	 * Enum FSD.EPatrolBotControlState
	 */
	enum class EPatrolBotControlState : uint8_t
	{
		Hostile  = 0,
		Disabled = 1,
		Hacked   = 2,
		MAX      = 3
	};

	/**
	 * Enum FSD.EPatrolBotState
	 */
	enum class EPatrolBotState : uint8_t
	{
		Rolling  = 0,
		Flying   = 1,
		Disabled = 2,
		MAX      = 3
	};

	/**
	 * Enum FSD.EPawnStatType
	 */
	enum class EPawnStatType : uint8_t
	{
		Multiplicative = 0,
		Additive       = 1,
		MAX            = 2
	};

	/**
	 * Enum FSD.EPerkSlotType
	 */
	enum class EPerkSlotType : uint8_t
	{
		Available         = 0,
		LockedByPerk      = 1,
		LockedByPromotion = 2,
		MAX               = 3
	};

	/**
	 * Enum FSD.EPerkUsageType
	 */
	enum class EPerkUsageType : uint8_t
	{
		Passive = 0,
		Active  = 1,
		MAX     = 2
	};

	/**
	 * Enum FSD.EPerkHUDActivationLocation
	 */
	enum class EPerkHUDActivationLocation : uint8_t
	{
		Main = 0,
		Down = 1,
		MAX  = 2
	};

	/**
	 * Enum FSD.EPerkTierState
	 */
	enum class EPerkTierState : uint8_t
	{
		Claimable    = 0,
		Claimed      = 1,
		Locked       = 2,
		Unaffordable = 3,
		NotAvailable = 4,
		MAX          = 5
	};

	/**
	 * Enum FSD.EPickaxeState
	 */
	enum class EPickaxeState : uint8_t
	{
		Equipping   = 0,
		Mining      = 1,
		PowerAttack = 2,
		End         = 3,
		MAX         = 4
	};

	/**
	 * Enum FSD.EPickaxePartLocation
	 */
	enum class EPickaxePartLocation : uint8_t
	{
		Head       = 0,
		FrontBlade = 1,
		BackBlade  = 2,
		Shaft      = 3,
		Handle     = 4,
		Pommel     = 5,
		Material   = 6,
		Count      = 7,
		MAX        = 8
	};

	/**
	 * Enum FSD.EPickaxePart
	 */
	enum class EPickaxePart : uint8_t
	{
		Head     = 0,
		Blade    = 1,
		Shaft    = 2,
		Handle   = 3,
		Pommel   = 4,
		Material = 5,
		MAX      = 6
	};

	/**
	 * Enum FSD.EPipelineExtractorPodAnimState
	 */
	enum class EPipelineExtractorPodAnimState : uint8_t
	{
		Folded  = 0,
		Idle    = 1,
		Running = 2,
		Broken  = 3,
		MAX     = 4
	};

	/**
	 * Enum FSD.EPlaceableObstructionType
	 */
	enum class EPlaceableObstructionType : uint8_t
	{
		Valid          = 0,
		GroundTooSteep = 1,
		TooShort       = 2,
		TooLong        = 3,
		TurnTooSharp   = 4,
		Blocked        = 5,
		NotEnoughRoom  = 6,
		TooSteep       = 7,
		TooClose       = 8,
		Other          = 9,
		MAX            = 10
	};

	/**
	 * Enum FSD.ECharacterMoveDirection
	 */
	enum class ECharacterMoveDirection : uint8_t
	{
		None    = 0,
		Forward = 1,
		Left    = 2,
		Right   = 3,
		Back    = 4,
		MAX     = 5
	};

	/**
	 * Enum FSD.EGameOwnerStatus
	 */
	enum class EGameOwnerStatus : uint8_t
	{
		Supporter      = 0,
		ContentCreator = 1,
		Developer      = 2,
		Modder         = 3,
		Max            = 4
	};

	/**
	 * Enum FSD.EMovementCustomMode
	 */
	enum class EMovementCustomMode : uint8_t
	{
		MOVE_Custom_None                     = 0,
		MOVE_Custom_Track                    = 1,
		MOVE_Custom_CharacterStateControlled = 2,
		MOVE_Custom_TraversalTool            = 3,
		MOVE_Custom_JetBoots                 = 4,
		MOVE_Custom_MAX                      = 5
	};

	/**
	 * Enum FSD.ERoomMirror
	 */
	enum class ERoomMirror : uint8_t
	{
		None    = 0,
		MirrorX = 1,
		MirrorY = 2,
		MAX     = 3
	};

	/**
	 * Enum FSD.ERoomMirroringSupport
	 */
	enum class ERoomMirroringSupport : uint8_t
	{
		NotAllowed    = 0,
		MirrorAroundX = 1,
		MirrorAroundY = 2,
		MirrorBoth    = 3,
		MAX           = 4
	};

	/**
	 * Enum FSD.EItemAdjustmentType
	 */
	enum class EItemAdjustmentType : uint8_t
	{
		None    = 0,
		Cieling = 1,
		Wall    = 2,
		Floor   = 3,
		MAX     = 4
	};

	/**
	 * Enum FSD.ECaveEntrancePriority
	 */
	enum class ECaveEntrancePriority : uint8_t
	{
		Primary   = 0,
		Secondary = 1,
		MAX       = 2
	};

	/**
	 * Enum FSD.ECaveEntranceType
	 */
	enum class ECaveEntranceType : uint8_t
	{
		EntranceAndExit = 0,
		Entrance        = 1,
		Exit            = 2,
		TreassureRoom   = 3,
		MAX             = 4
	};

	/**
	 * Enum FSD.ESpawnSettings
	 */
	enum class ESpawnSettings : uint8_t
	{
		Normal     = 0,
		NoSpawning = 1,
		SpawnAll   = 2,
		MAX        = 3
	};

	/**
	 * Enum FSD.ECriticalItemPass
	 */
	enum class ECriticalItemPass : uint8_t
	{
		LargePass = 0,
		SmallPass = 1,
		MAX       = 2
	};

	/**
	 * Enum FSD.ETerrainPlacementBoxType
	 */
	enum class ETerrainPlacementBoxType : uint8_t
	{
		NoTerrain = 0,
		Terrain   = 1,
		MAX       = 2
	};

	/**
	 * Enum FSD.EProjectileAttackRotationType
	 */
	enum class EProjectileAttackRotationType : uint8_t
	{
		NoTarget_ActorForward = 0,
		NoTarget_Socket       = 1,
		Always_Socket         = 2,
		MAX                   = 3
	};

	/**
	 * Enum FSD.ECrossbowEffectApplication
	 */
	enum class ECrossbowEffectApplication : uint8_t
	{
		ToDefault = 0,
		ToSpecial = 1,
		ToAll     = 2,
		MAX       = 3
	};

	/**
	 * Enum FSD.ECrossbowHit
	 */
	enum class ECrossbowHit : uint8_t
	{
		InvalidHit = 0,
		OldHit     = 1,
		NewHit     = 2,
		MAX        = 3
	};

	/**
	 * Enum FSD.EPropHuntEvent
	 */
	enum class EPropHuntEvent : uint8_t
	{
		HunterBegin = 0,
		HunterMiss  = 1,
		HunterHit   = 2,
		PropBegin   = 3,
		PropEnd     = 4,
		GameWon     = 5,
		GameLost    = 6,
		MAX         = 7
	};

	/**
	 * Enum FSD.EProspectorRobotState
	 */
	enum class EProspectorRobotState : uint8_t
	{
		Searching = 0,
		Scanning  = 1,
		Sampling  = 2,
		Fleeing   = 3,
		MAX       = 4
	};

	/**
	 * Enum FSD.ESchematicType
	 */
	enum class ESchematicType : uint8_t
	{
		Overclock = 0,
		Vanity    = 1,
		Resource  = 2,
		Blank     = 3,
		MAX       = 4
	};

	/**
	 * Enum FSD.ESeasonVisibilityState
	 */
	enum class ESeasonVisibilityState : uint8_t
	{
		Bought = 0,
		CanBuy = 1,
		Locked = 2,
		MAX    = 3
	};

	/**
	 * Enum FSD.EServerSortOrder
	 */
	enum class EServerSortOrder : uint8_t
	{
		Mission    = 0,
		Players    = 1,
		Length     = 2,
		Complexity = 3,
		Distance   = 4,
		Time       = 5,
		Difficulty = 6,
		MAX        = 7
	};

	/**
	 * Enum FSD.EServerDistance
	 */
	enum class EServerDistance : uint8_t
	{
		Close  = 0,
		Medium = 1,
		Far    = 2,
		World  = 3,
		MAX    = 4
	};

	/**
	 * Enum FSD.EFSDNATType
	 */
	enum class EFSDNATType : uint8_t
	{
		Open     = 0,
		Moderate = 1,
		Strict   = 2,
		Unknown  = 3,
		MAX      = 4
	};

	/**
	 * Enum FSD.EFSDMissionStatus
	 */
	enum class EFSDMissionStatus : uint8_t
	{
		SpaceRig       = 0,
		InGame         = 1,
		Starting       = 2,
		EscapeSequence = 3,
		FinalBattle    = 4,
		MAX            = 5
	};

	/**
	 * Enum FSD.ESharkEnemyState
	 */
	enum class ESharkEnemyState : uint8_t
	{
		Idle       = 0,
		Circling   = 1,
		Attacking  = 2,
		Vulnerable = 3,
		Dive       = 4,
		MAX        = 5
	};

	/**
	 * Enum FSD.EShowroomScaling
	 */
	enum class EShowroomScaling : uint8_t
	{
		NoScaling   = 0,
		EnemySmall  = 1,
		EnemyMedium = 2,
		EnemyBig    = 3,
		EnemyHuge   = 4,
		MAX         = 5
	};

	/**
	 * Enum FSD.EPiplelineConnectorAnimationState
	 */
	enum class EPiplelineConnectorAnimationState : uint8_t
	{
		Unassembled = 0,
		Assembling  = 1,
		Assembled   = 2,
		MAX         = 3
	};

	/**
	 * Enum FSD.EMaggotAnimationState
	 */
	enum class EMaggotAnimationState : uint8_t
	{
		Idle   = 0,
		Moving = 1,
		MAX    = 2
	};

	/**
	 * Enum FSD.ESpiderDeathAnimationCategory
	 */
	enum class ESpiderDeathAnimationCategory : uint8_t
	{
		NoAnimation = 0,
		Melt        = 1,
		Cook        = 2,
		Burn        = 3,
		MAX         = 4
	};

	/**
	 * Enum FSD.EMoveDirection
	 */
	enum class EMoveDirection : uint8_t
	{
		None    = 0,
		Forward = 1,
		Left    = 2,
		Right   = 3,
		Back    = 4,
		MAX     = 5
	};

	/**
	 * Enum FSD.EMiningPodMission
	 */
	enum class EMiningPodMission : uint8_t
	{
		DropAndReturn    = 0,
		Extraction       = 1,
		DropFromSpacerig = 2,
		MAX              = 3
	};

	/**
	 * Enum FSD.EMiningPodRampState
	 */
	enum class EMiningPodRampState : uint8_t
	{
		Closed  = 0,
		Opening = 1,
		Open    = 2,
		Closing = 3,
		MAX     = 4
	};

	/**
	 * Enum FSD.EMiningPodState
	 */
	enum class EMiningPodState : uint8_t
	{
		Dropping            = 0,
		Drilling            = 1,
		Landed              = 2,
		PrepTakeoff         = 3,
		Departing           = 4,
		WaitingForGameStart = 5,
		InSpace             = 6,
		Destroy             = 7,
		WaitOnSpacerig      = 8,
		ExitSpacerig        = 9,
		Damaged             = 10,
		PoweringUp          = 11,
		PoweredUp           = 12,
		DeepDiveDeparture   = 13,
		MAX                 = 14
	};

	/**
	 * Enum FSD.ETemperatureIntensity
	 */
	enum class ETemperatureIntensity : uint8_t
	{
		Cold3 = 0,
		Cold2 = 1,
		Cold1 = 2,
		Heat1 = 3,
		Heat2 = 4,
		Heat3 = 5,
		MAX   = 6
	};

	/**
	 * Enum FSD.ETerminatorTentacleState
	 */
	enum class ETerminatorTentacleState : uint8_t
	{
		Idle     = 0,
		Grabbing = 1,
		Grabbed  = 2,
		Dead     = 3,
		MAX      = 4
	};

	/**
	 * Enum FSD.ETerminatorShoutState
	 */
	enum class ETerminatorShoutState : uint8_t
	{
		EIdle      = 0,
		EGrabbing  = 1,
		EDeath     = 2,
		EAttacking = 3,
		MAX        = 4
	};

	/**
	 * Enum FSD.EBulletMode
	 */
	enum class EBulletMode : uint8_t
	{
		EMultiTrace = 0,
		ECapsule    = 1,
		MAX         = 2
	};

	/**
	 * Enum FSD.ETetherMessageDirection
	 */
	enum class ETetherMessageDirection : uint8_t
	{
		Forward  = 0,
		Backward = 1,
		Both     = 2,
		MAX      = 3
	};

	/**
	 * Enum FSD.ETetherConnectionMode
	 */
	enum class ETetherConnectionMode : uint8_t
	{
		Both      = 0,
		FrontOnly = 1,
		BackOnly  = 2,
		None      = 3,
		MAX       = 4
	};

	/**
	 * Enum FSD.EThrowableInput
	 */
	enum class EThrowableInput : uint8_t
	{
		LeftButton  = 0,
		RightButton = 1,
		MAX         = 2
	};

	/**
	 * Enum FSD.EExitTrackMode
	 */
	enum class EExitTrackMode : uint8_t
	{
		None           = 0,
		StopInPlace    = 1,
		JumpInPlace    = 2,
		JumpInCamDir   = 3,
		JumpInTrackDir = 4,
		MAX            = 5
	};

	/**
	 * Enum FSD.ETreasureType
	 */
	enum class ETreasureType : uint8_t
	{
		WeaponSkin  = 0,
		VictoryPose = 1,
		PickaxePart = 2,
		VanityItem  = 3,
		MAX         = 4
	};

	/**
	 * Enum FSD.ECleanedStatus
	 */
	enum class ECleanedStatus : uint8_t
	{
		EInfected = 0,
		EVacuumed = 1,
		MAX       = 2
	};

	/**
	 * Enum FSD.EItemUpgradeStatus
	 */
	enum class EItemUpgradeStatus : uint8_t
	{
		Locked                = 0,
		AvailableCannotAfford = 1,
		AvailableCanAfford    = 2,
		Owned                 = 3,
		Equipped              = 4,
		MAX                   = 5
	};

	/**
	 * Enum FSD.EHeadVanityType
	 */
	enum class EHeadVanityType : uint8_t
	{
		HairOnly                         = 0,
		HeadGearOnly                     = 1,
		HeadGearOnly_UseArmorMaterial    = 2,
		HairAndHeadGear                  = 3,
		HairAndHeadGear_UseArmorMaterial = 4,
		MAX                              = 5
	};

	/**
	 * Enum FSD.EArmorSetLegs
	 */
	enum class EArmorSetLegs : uint8_t
	{
		Invalid       = 0,
		LeftUpperLeg  = 1,
		LeftLowerLeg  = 2,
		LeftFoot      = 3,
		LeftToe       = 4,
		RightUpperLeg = 5,
		RightLowerLeg = 6,
		RightFoot     = 7,
		RightToe      = 8,
		MAX           = 9
	};

	/**
	 * Enum FSD.EArmorSetTorso
	 */
	enum class EArmorSetTorso : uint8_t
	{
		Invalid       = 0,
		UpperTorso    = 1,
		MiddleTorso   = 2,
		LowerTorso    = 3,
		UpperBack     = 4,
		MiddleBack    = 5,
		LowerBack     = 6,
		LeftHip       = 7,
		RightHip      = 8,
		FrontHip      = 9,
		LeftUpperLeg  = 10,
		LeftLowerLeg  = 11,
		LeftFoot      = 12,
		LeftToe       = 13,
		RightUpperLeg = 14,
		RightLowerLeg = 15,
		RightFoot     = 16,
		RightToe      = 17,
		MAX           = 18
	};

	/**
	 * Enum FSD.EArmorSetArms
	 */
	enum class EArmorSetArms : uint8_t
	{
		Invalid         = 0,
		LeftShoulder    = 1,
		RightShoulder   = 2,
		LeftUpperArm    = 3,
		LeftLowerArm1   = 4,
		LeftLowerArm2   = 5,
		LeftHand        = 6,
		LeftHandAttach  = 7,
		RightUpperArm   = 8,
		RightLowerArm1  = 9,
		RightLowerArm2  = 10,
		RightHand       = 11,
		RightHandAttach = 12,
		MAX             = 13
	};

	/**
	 * Enum FSD.ECharacterHeadMesh
	 */
	enum class ECharacterHeadMesh : uint8_t
	{
		Full          = 0,
		ThichNeckOnly = 1,
		ThinNeckOnly  = 2,
		None          = 3,
		FlatEars      = 4,
		FaceOnly      = 5,
		EyesOnly      = 6,
		Masks         = 7,
		MAX           = 8
	};

	/**
	 * Enum FSD.EArmorMeshType
	 */
	enum class EArmorMeshType : uint8_t
	{
		None                      = 0,
		Default                   = 1,
		DefaultBeardCompatible    = 2,
		Sleeveless                = 3,
		SleevelessBeardCompatible = 4,
		MAX                       = 5
	};

	/**
	 * Enum FSD.EVanityAquisitionType
	 */
	enum class EVanityAquisitionType : uint8_t
	{
		UnlockedFromStart = 0,
		Purchased         = 1,
		Schematic         = 2,
		Treasure          = 3,
		MAX               = 4
	};

	/**
	 * Enum FSD.EWeakpointGlowMode
	 */
	enum class EWeakpointGlowMode : uint8_t
	{
		Set      = 0,
		Additive = 1,
		MAX      = 2
	};

	/**
	 * Enum FSD.EWoodLouseState
	 */
	enum class EWoodLouseState : uint8_t
	{
		Unfolded = 0,
		Folded   = 1,
		Size     = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct FSD.MissionShouts
	 * Size -> 0x0038
	 */
	struct FMissionShouts
	{
	public:
		class UDialogDataAsset*                                    AfterDropPodExit;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    OnExitPodDescending;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    OnExitPodArrived;                                        // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    OnCompletion;                                            // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    OnCompletion_OneOfMultiple;                              // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    OnAllReturnObjectivesCompleted;                          // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    OnDeepDiveExitPodDescending;                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GameActivitySubTask
	 * Size -> 0x0010
	 */
	struct FGameActivitySubTask
	{
	public:
		class FString                                              SubActivityId;                                           // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.OverlapPair
	 * Size -> 0x0010
	 */
	struct FOverlapPair
	{
	public:
		class APlayerCharacter*                                    Player;                                                  // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Overlap;                                                 // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ScaledEffect
	 * Size -> 0x0010
	 */
	struct FScaledEffect
	{
	public:
		class UFXSystemAsset*                                      ParticleSystem;                                          // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Scale;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J1AV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.AttachMeshesAfflictionItem
	 * Size -> 0x0040
	 */
	struct FAttachMeshesAfflictionItem
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHZ9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         StaticMesh;                                              // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Animation;                                               // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x002C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshAttachType                                            AttachType;                                              // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LoopAnimation;                                           // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RandomRotaiton;                                          // 0x0036(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RandomScale;                                             // 0x0037(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CastShadows;                                             // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_STI6[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.RandRange
	 * Size -> 0x0008
	 */
	struct FRandRange
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ScalingMeshAfflictionItem
	 * Size -> 0x0018
	 */
	struct FScalingMeshAfflictionItem
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRandRange                                          MeshScale;                                               // 0x0008(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		EFrozenBitsSize                                            FrozenBitsSize;                                          // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5SQU[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChanceToSpawn;                                           // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ScaledMeshAfflictionTypeItem
	 * Size -> 0x0058
	 */
	struct FScaledMeshAfflictionTypeItem
	{
	public:
		TArray<struct FRuntimeFloatCurve>                          Scalers;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UStaticMesh*>                                 Meshes;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRandRange                                          ScaleDelay;                                              // 0x0020(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		class USoundCue*                                           StartingSound;                                           // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           EndSound;                                                // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UFXSystemAsset*>                              StartParticles;                                          // 0x0038(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UFXSystemAsset*>                              EndParticles;                                            // 0x0048(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FSD.QueuedMontage
	 * Size -> 0x0010
	 */
	struct FQueuedMontage
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceUpdate;                                             // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_488A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.EnemyGroupDescriptorItem
	 * Size -> 0x0008
	 */
	struct FEnemyGroupDescriptorItem
	{
	public:
		class UEnemyDescriptor*                                    EnemyDescriptor;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.IRandRange
	 * Size -> 0x0008
	 */
	struct FIRandRange
	{
	public:
		int32_t                                                    Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RandIntervalItem
	 * Size -> 0x000C
	 */
	struct FRandIntervalItem
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIRandRange                                         range;                                                   // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RandInterval
	 * Size -> 0x0010
	 */
	struct FRandInterval
	{
	public:
		TArray<struct FRandIntervalItem>                           Intervals;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.AudioWithCooldown
	 * Size -> 0x0010
	 */
	struct FAudioWithCooldown
	{
	public:
		class USoundCue*                                           audio;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CoolDown;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K62O[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ItemAnimationItem
	 * Size -> 0x0018
	 */
	struct FItemAnimationItem
	{
	public:
		class UAnimMontage*                                        FP_CharacterMontage;                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        TP_CharacterMontage;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        ItemMontage;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TracerData
	 * Size -> 0x0030
	 */
	struct FTracerData
	{
	public:
		class UFXSystemAsset*                                      MainParticle;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFXSystemAsset*                                      TrailParticle;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FB55[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           WhizbySound;                                             // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WhizBySoundCooldown;                                     // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Offset;                                                  // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistance;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQ89[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.RecoilSettings
	 * Size -> 0x0028
	 */
	struct FRecoilSettings
	{
	public:
		struct FRandRange                                          RecoilRoll;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FRandRange                                          RecoilPitch;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FRandRange                                          RecoilYaw;                                               // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       CanRecoilDown;                                           // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IG5D[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpringStiffness;                                         // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDampening;                                       // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ArmorDamageEffects
	 * Size -> 0x0030
	 */
	struct FArmorDamageEffects
	{
	public:
		TArray<class UFXSystemAsset*>                              ArmorBreakParticles;                                     // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UFXSystemAsset*>                              DissolveParticles;                                       // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UFXSystemAsset*>                              BeamParticles;                                           // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DestructableBodypartItem
	 * Size -> 0x0018
	 */
	struct FDestructableBodypartItem
	{
	public:
		unsigned char                                              MaterialIndex;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5WW6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ArmorBones;                                              // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ArmorDamageInfo
	 * Size -> 0x0008
	 */
	struct FArmorDamageInfo
	{
	public:
		int32_t                                                    ArmorIndexMask;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EArmorDamageType                                           BreakType;                                               // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1DY9[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ArmorHealthSubItem
	 * Size -> 0x0028
	 */
	struct FArmorHealthSubItem
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZVC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BoneName;                                                // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        AdditionalBones;                                         // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                OptionalFXSocket;                                        // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ArmorHealthItem
	 * Size -> 0x0018
	 */
	struct FArmorHealthItem
	{
	public:
		unsigned char                                              MaterialIndex;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HealthIsBreakPercentage;                                 // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideAffectedByAmorBreak;                             // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NewAffectedByArmorBreak;                                 // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideArmorDamageEnabled;                              // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0PGV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FArmorHealthSubItem>                         ArmorBones;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CompositeArmorItem
	 * Size -> 0x0010
	 */
	struct FCompositeArmorItem
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideAffectedByArmorBreak;                            // 0x000C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MyAffectedByAmorBreak;                                   // 0x000D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZT2[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.TattooArmorItem
	 * Size -> 0x0010
	 */
	struct FTattooArmorItem
	{
	public:
		class UVanityTattoo*                                       Tattoo;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLeftArm;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FlipTexture;                                             // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NFO4[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.AttackCooldown
	 * Size -> 0x0010
	 */
	struct FAttackCooldown
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoolDown;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9US7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.AttackerInfo
	 * Size -> 0x0010
	 */
	struct FAttackerInfo
	{
	public:
		TWeakObjectPtr<class AActor>                               Attacker;                                                // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PositionIndex;                                           // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackerRadius;                                          // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.BEETemplateItem
	 * Size -> 0x0028
	 */
	struct FBEETemplateItem
	{
	public:
		class UMissionTemplate*                                    mission;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMissionDuration*>                            AllowedDurations;                                        // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMissionComplexity*>                          AllowedComplexities;                                     // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.BEELoaderSequence
	 * Size -> 0x0028
	 */
	struct FBEELoaderSequence
	{
	public:
		unsigned char                                              LevelSequence[0x28];                                     // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct FSD.HeatSource
	 * Size -> 0x0008
	 */
	struct FHeatSource
	{
	public:
		float                                                      Temperature;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Intensity;                                               // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.BiomeNoiseItem
	 * Size -> 0x0038
	 */
	struct FBiomeNoiseItem
	{
	public:
		class UFloodFillSettings*                                  CeilingNoise;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDetailNoise*                                        CeilingDetailNoise;                                      // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloodFillSettings*                                  WallNoise;                                               // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDetailNoise*                                        WallDetailNoise;                                         // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloodFillSettings*                                  FloorNoise;                                              // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDetailNoise*                                        FloorDetailNoise;                                        // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOE8[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.RandFloatIntervalItem
	 * Size -> 0x000C
	 */
	struct FRandFloatIntervalItem
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRandRange                                          range;                                                   // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RandFloatInterval
	 * Size -> 0x0010
	 */
	struct FRandFloatInterval
	{
	public:
		TArray<struct FRandFloatIntervalItem>                      Intervals;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ResourceSpawner
	 * Size -> 0x0018
	 */
	struct FResourceSpawner
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRandFloatInterval                                  AmountToSpawn;                                           // 0x0008(0x0010) Edit, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.BiomeEnemyEntry
	 * Size -> 0x0010
	 */
	struct FBiomeEnemyEntry
	{
	public:
		class UEnemyDescriptor*                                    enemy;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDistruptive;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQA3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.BoscoLightSetting
	 * Size -> 0x000C
	 */
	struct FBoscoLightSetting
	{
	public:
		struct FColor                                              Color;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.BoscoAbilityTarget
	 * Size -> 0x0018
	 */
	struct FBoscoAbilityTarget
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1F1V[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.BossFight
	 * Size -> 0x0018
	 */
	struct FBossFight
	{
	public:
		TWeakObjectPtr<class AActor>                               BossActor;                                               // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UEnemyComponent>                      EnemyComponent;                                          // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UEnemyHealthComponent>                HealthComponent;                                         // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.BoomerangSyncer
	 * Size -> 0x002C
	 */
	struct FBoomerangSyncer
	{
	public:
		struct FVector                                             PrevPos;                                                 // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NextPos;                                                 // 0x000C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0018(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsGoingBack;                                             // 0x0024(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BCG[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TotalTime;                                               // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.BoomerangMover
	 * Size -> 0x0060
	 */
	struct FBoomerangMover
	{
	public:
		struct FRotator                                            StartRotation;                                           // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PrevPos;                                                 // 0x000C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NextPos;                                                 // 0x0018(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0024(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeScale;                                               // 0x0034(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickRate;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickTime;                                                // 0x003C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedTime;                                         // 0x0040(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalTime;                                               // 0x0044(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartSmoothTime;                                         // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIY7[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        ArcCurve;                                                // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsGoingBack;                                             // 0x0058(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZYIK[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.RequiredMissionItem
	 * Size -> 0x0020
	 */
	struct FRequiredMissionItem
	{
	public:
		class UMissionTemplate*                                    MissionTemplate;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionComplexity*                                  Complexity;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionDuration*                                    Duration;                                                // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanHaveMutators;                                         // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I0KW[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.MultiHitscanHit
	 * Size -> 0x0020
	 */
	struct FMultiHitscanHit
	{
	public:
		unsigned char                                              TargetComponentIndex;                                    // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PhysicalMaterialIndex;                                   // 0x0001(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZ41[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize                                 HitLocation;                                             // 0x0004(0x000C) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           ImpactNormal;                                            // 0x0010(0x000C) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BoneIndex;                                               // 0x001C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PlayImpactSound;                                         // 0x001D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SpawnDecal;                                              // 0x001E(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7II3[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.MultiHitScanHits
	 * Size -> 0x0030
	 */
	struct FMultiHitScanHits
	{
	public:
		TArray<struct FMultiHitscanHit>                            Hits;                                                    // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UPrimitiveComponent*>                         Components;                                              // 0x0010(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UFSDPhysicalMaterial*>                        PhysicalMaterials;                                       // 0x0020(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.UDebrisCarveMesh
	 * Size -> 0x0010
	 */
	struct FUDebrisCarveMesh
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Probablity;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KDK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ResourceDebris
	 * Size -> 0x0010
	 */
	struct FResourceDebris
	{
	public:
		float                                                      InfluencerRange;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_404Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDebrisBase*                                         Debris;                                                  // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.LerpingPercent
	 * Size -> 0x0008
	 */
	struct FLerpingPercent
	{
	public:
		unsigned char                                              TargetPercent;                                           // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4P1F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CountDownFloat
	 * Size -> 0x000C
	 */
	struct FCountDownFloat
	{
	public:
		float                                                      CountDownDuration;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7QIO[0x8];                                   // 0x0004(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ReplicatedCharacterData
	 * Size -> 0x0018
	 */
	struct FReplicatedCharacterData
	{
	public:
		TWeakObjectPtr<class AActor>                               Target;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TemperatureEffect;                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanTakeDamage;                                          // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7ZX[0xB];                                   // 0x000D(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CharacterUseState
	 * Size -> 0x0010
	 */
	struct FCharacterUseState
	{
	public:
		class UUsableComponentBase*                                ActiveUsable;                                            // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IIP[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UseId;                                                   // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.EquippedVanity
	 * Size -> 0x0020
	 */
	struct FEquippedVanity
	{
	public:
		TArray<class UVanityItem*>                                 Vanity;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UVanityItem*                                         SelectedArmorMaterial;                                   // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsingSlevedArmor;                                        // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D57B[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ProjectileImpact
	 * Size -> 0x0038
	 */
	struct FProjectileImpact
	{
	public:
		struct FVector_NetQuantize                                 Location;                                                // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           Normal;                                                  // 0x000C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPrimitiveComponent>                  Component;                                               // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   PhysMat;                                                 // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BoneIndex;                                               // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlockingHit;                                            // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZAL[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ProjectileState
	 * Size -> 0x0028
	 */
	struct FProjectileState
	{
	public:
		struct FVector_NetQuantize                                 Velocity;                                                // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 Location;                                                // 0x000C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     HomingTargetComponent;                                   // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSimulating : 1;                                        // 0x0020(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBouncy : 1;                                            // 0x0020(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHoming : 1;                                            // 0x0020(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPenetrating : 1;                                       // 0x0020(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VA4[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ClaimableRewardEntry
	 * Size -> 0x0090
	 */
	struct FClaimableRewardEntry
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Text;                                                    // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              Image[0x28];                                             // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class UReward*>                                     Rewards;                                                 // 0x0058(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              EntryWidgetOverride[0x28];                               // 0x0068(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct FSD.ClaimableRewardView
	 * Size -> 0x0088
	 */
	struct FClaimableRewardView
	{
	public:
		class UDialogDataAsset*                                    MissionControlSpeak;                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BackgroundWidgetClass[0x28];                             // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              FanfareAudio[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      MoveInRewardsDelay;                                      // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A878[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FClaimableRewardEntry>                       RewardDisplays;                                          // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FText                                                ClaimButtonText;                                         // 0x0070(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ContrailSettings
	 * Size -> 0x0010
	 */
	struct FContrailSettings
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HalfLenght;                                              // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeTime;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Hellfire;                                                // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3LB[0x1];                                   // 0x000D(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       Electric;                                                // 0x000E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y7QA[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CoilMaterial
	 * Size -> 0x0010
	 */
	struct FCoilMaterial
	{
	public:
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KA5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CharacterShouts
	 * Size -> 0x00D8
	 */
	struct FCharacterShouts
	{
	public:
		class UDialogDataAsset*                                    Attention;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Follow;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    standingDown;                                            // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Downed;                                                  // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    RequestRevive;                                           // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Revived;                                                 // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Resupply;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    FriendlyFire;                                            // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    KillCry;                                                 // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Dead;                                                    // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Cheating;                                                // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    ResourceFull;                                            // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    ResourceFullNoDonkey;                                    // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    CallDonkey;                                              // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    CallDonkey_NotInMission;                                 // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Depositing;                                              // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    DepositingNoDonkey;                                      // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    OutOfAmmo;                                               // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Reloading;                                               // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    CharacterSelected;                                       // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    UpgradeBought;                                           // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    WaitingInDropPod;                                        // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Carrying;                                                // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    WaitingInEscapePod;                                      // 0x00B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Salute;                                                  // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Salute_Spacerig;                                         // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Drink;                                                   // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ActiveOutline
	 * Size -> 0x000C
	 */
	struct FActiveOutline
	{
	public:
		unsigned char                                              UnknownData_PP22[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.MissionShoutQueueItem
	 * Size -> 0x0048
	 */
	struct FMissionShoutQueueItem
	{
	public:
		unsigned char                                              AudioPtr[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                Text;                                                    // 0x0028(0x0018) NativeAccessSpecifierPublic
		class USoundBase*                                          LoadedAudio;                                             // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CommunityReward
	 * Size -> 0x0010
	 */
	struct FCommunityReward
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8LAK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CommunityGoalStateData
	 * Size -> 0x0010
	 */
	struct FCommunityGoalStateData
	{
	public:
		bool                                                       isGoal;                                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isRecruitment;                                           // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7IS6[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeLeftSeconds;                                         // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentGoalPeriodID;                                     // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHX2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CommunityFactionData
	 * Size -> 0x0038
	 */
	struct FCommunityFactionData
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOH7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Goals;                                                   // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Values;                                                  // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Members;                                                 // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.InputTranslationEntry
	 * Size -> 0x0010
	 */
	struct FInputTranslationEntry
	{
	public:
		EInputInteraction                                          Interaction;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXX5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                InputName;                                               // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Axis;                                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.InputTranslation
	 * Size -> 0x0024
	 */
	struct FInputTranslation
	{
	public:
		struct FInputTranslationEntry                              Default;                                                 // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bControllerOverride;                                     // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEJD[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputTranslationEntry                              ControllerOverride;                                      // 0x0014(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.InputTranslationTable
	 * Size -> 0x0050
	 */
	struct FInputTranslationTable
	{
	public:
		TMap<class FName, struct FInputTranslation>                Entries;                                                 // 0x0000(0x0050) Edit, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.ActionIconMapping
	 * Size -> 0x0028
	 */
	struct FActionIconMapping
	{
	public:
		struct FKey                                                ActionKey;                                               // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoNotTint;                                               // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UIJB[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CoolDownProgressStyle
	 * Size -> 0x0040
	 */
	struct FCoolDownProgressStyle
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        IconTint;                                                // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UClass*                                              WidgetOverride;                                          // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           AudioCoolDownFinished;                                   // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ProjectileSwitch
	 * Size -> 0x0010
	 */
	struct FProjectileSwitch
	{
	public:
		class UClass*                                              ProjectileClass;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProjectileSwitchCriteria                                  CriteriaType;                                            // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZF8[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CriteriaThreshhold;                                      // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DecalData
	 * Size -> 0x0020
	 */
	struct FDecalData
	{
	public:
		class UMaterialInterface*                                  DecalMaterial;                                           // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalSize;                                               // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalDepth;                                              // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeSpan;                                                // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartDelay;                                              // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeInDuration;                                          // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeDuration;                                            // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CustomKeySetting
	 * Size -> 0x0038
	 */
	struct FCustomKeySetting
	{
	public:
		class FName                                                SaveID;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<class FName>                                        ActionNames;                                             // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		EKeyBindingAxis                                            ActionAxis;                                              // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HVR[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DailyDealSetup
	 * Size -> 0x0028
	 */
	struct FDailyDealSetup
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDealType                                                  DealType;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0UHU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           UnitsRange;                                              // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           DiscountRangePercent;                                    // 0x0014(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ExtraValueRangePercent;                                  // 0x001C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TPL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DamageModifierItem
	 * Size -> 0x000C
	 */
	struct FDamageModifierItem
	{
	public:
		EDamageUpgrade                                             DamageUpgrade;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XARD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Additive;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiplicative;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DamageSubsystemItem
	 * Size -> 0x0020
	 */
	struct FDamageSubsystemItem
	{
	public:
		class UDamageComponent*                                    DamageComponent;                                         // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MGAW[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DanceItem
	 * Size -> 0x0010
	 */
	struct FDanceItem
	{
	public:
		class UAnimSequence*                                       danceMove;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       DanceMoveWithBeer;                                       // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CellNoise
	 * Size -> 0x002C
	 */
	struct FCellNoise
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CellSize;                                                // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumValues;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCellValue;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCellValue;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YRG[0x10];                                  // 0x001C(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DebrisCellNoiseParameters
	 * Size -> 0x0010
	 */
	struct FDebrisCellNoiseParameters
	{
	public:
		class UDebrisCellNoise*                                    Noise;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCellValue;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCellValue;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DebrisInfluence
	 * Size -> 0x0010
	 */
	struct FDebrisInfluence
	{
	public:
		class UObject*                                             CaveInfluencer;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUIU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DebrisItemActorItem
	 * Size -> 0x0010
	 */
	struct FDebrisItemActorItem
	{
	public:
		class UClass*                                              Actor;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Probability;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POP5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DebrisStaticMesh
	 * Size -> 0x0058
	 */
	struct FDebrisStaticMesh
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDebrisMeshCollisionProfile                                CollisionProfile;                                        // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2PQ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Probablity;                                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           DestroyedSound;                                          // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFXSystemAsset*                                      DestroyedParticles;                                      // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDecalData                                          Decal;                                                   // 0x0028(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Fragile;                                                 // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDebrisMeshShadows                                         CastShadows;                                             // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Durable;                                                 // 0x004A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IN0Q[0x1];                                   // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SpecialDebrisType;                                       // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SpawnWhenCarving;                                        // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OnlySpawnWhenCarving;                                    // 0x0051(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SC86[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.UDebrisStaticCarveMesh
	 * Size -> 0x0010
	 */
	struct FUDebrisStaticCarveMesh
	{
	public:
		class UStaticMeshCarver*                                   Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Probablity;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZFG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DebrisWhenCarving
	 * Size -> 0x0030
	 */
	struct FDebrisWhenCarving
	{
	public:
		unsigned char                                              UnknownData_N419[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDebrisInstances*                                    Debris;                                                  // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RuntimeSpawnedDebris
	 * Size -> 0x0040
	 */
	struct FRuntimeSpawnedDebris
	{
	public:
		unsigned char                                              UnknownData_6PTY[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UDebrisInstances*>                            DebrisInstances;                                         // 0x0028(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UDebrisMesh*                                         DebrisMesh;                                              // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GrenadeExplodeOperationData
	 * Size -> 0x0038
	 */
	struct FGrenadeExplodeOperationData
	{
	public:
		int32_t                                                    OperationNumber;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitPos;                                                  // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalOffset;                                            // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalSqueeze;                                           // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Noise;                                                   // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BurnThickness;                                           // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseBulletBurntMaterial;                                  // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DissolvePlatforms;                                       // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8R0[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   OverrideBurntMaterialHandle;                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CarveWithColliderOperationData
	 * Size -> 0x0070
	 */
	struct FCarveWithColliderOperationData
	{
	public:
		int32_t                                                    OperationNumber;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U32C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTerrainMaterial*                                    Material;                                                // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarveFilterType                                           CarveFilter;                                             // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0FOJ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMatrixWithExactSync                                Transform;                                               // 0x001C(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_10CX[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelGenerationCarverComponent*                     LevelGenerationComponent;                                // 0x0060(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpensiveNoise;                                          // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPreciousMaterialOptions                                   Precious;                                                // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarveOptionsCellSize                                      CarveCellSize;                                           // 0x006D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MYWC[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CarveWithSTLMeshOperationData
	 * Size -> 0x0070
	 */
	struct FCarveWithSTLMeshOperationData
	{
	public:
		int32_t                                                    OperationNumber;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B148[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USTLMeshCarver*                                      STLMeshCarver;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshCarver*                                   StaticMeshCarver;                                        // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTerrainMaterial*                                    Material;                                                // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarveFilterType                                           CarveFilter;                                             // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPreciousMaterialOptions                                   Precious;                                                // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OEY9[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMatrixWithExactSync                                Transform;                                               // 0x0024(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_STW0[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelGenerationCarverComponent*                     LevelGenerationComponent;                                // 0x0068(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PickaxeDigOperationData
	 * Size -> 0x0028
	 */
	struct FPickaxeDigOperationData
	{
	public:
		int32_t                                                    OperationNumber;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitPos;                                                  // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Dir;                                                     // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DigSize;                                                 // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Miner;                                                   // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RemoveFloatingIslandOperationData
	 * Size -> 0x0004
	 */
	struct FRemoveFloatingIslandOperationData
	{
	public:
		int32_t                                                    OperationNumber;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DrillOperationData
	 * Size -> 0x002C
	 */
	struct FDrillOperationData
	{
	public:
		int32_t                                                    OperationNumber;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitPos;                                                  // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Dir;                                                     // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CarveSize;                                               // 0x001C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CarveNoise;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.MeltOperationData
	 * Size -> 0x0020
	 */
	struct FMeltOperationData
	{
	public:
		int32_t                                                    OperationNumber;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CI8Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Points;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q597[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SplineSegmentCarveOperationData
	 * Size -> 0x0030
	 */
	struct FSplineSegmentCarveOperationData
	{
	public:
		int32_t                                                    OperationNumber;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7XL1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCarveSplineSegment>                         Segments;                                                // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UTerrainMaterial*                                    Material;                                                // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarveFilterType                                           CarveFilter;                                             // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPreciousMaterialOptions                                   Precious;                                                // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OG0T[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelGenerationCarverComponent*                     LevelGenerationComponent;                                // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CSGBuildOperationData
	 * Size -> 0x0060
	 */
	struct FCSGBuildOperationData
	{
	public:
		int32_t                                                    OperationNumber;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ZZN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CSGModel;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBakeSettings                                       CarverSettings;                                          // 0x0010(0x0010) Edit, NativeAccessSpecifierPublic
		struct FMatrixWithExactSync                                Transform;                                               // 0x0020(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TerrainSpawnDebrisOperationData
	 * Size -> 0x0020
	 */
	struct FTerrainSpawnDebrisOperationData
	{
	public:
		int32_t                                                    OperationNumber;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Pos;                                                     // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R99Y[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDebrisMesh*                                         Debris;                                                  // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TerrainLateJoinData
	 * Size -> 0x00C8
	 */
	struct FTerrainLateJoinData
	{
	public:
		TArray<struct FGrenadeExplodeOperationData>                Explosions;                                              // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FCarveWithColliderOperationData>             ColliderCarves;                                          // 0x0010(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FCarveWithSTLMeshOperationData>              MeshCarves;                                              // 0x0020(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FPickaxeDigOperationData>                    PickAxe;                                                 // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FRemoveFloatingIslandOperationData>          RemoveFloating;                                          // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FDrillOperationData>                         Drills;                                                  // 0x0050(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FMeltOperationData>                          Melts;                                                   // 0x0060(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FSplineSegmentCarveOperationData>            Splines;                                                 // 0x0070(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FCSGBuildOperationData>                      CSGBuilds;                                               // 0x0080(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FTerrainSpawnDebrisOperationData>            SpawnDebris;                                             // 0x0090(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<int32_t>                                            DebrisInstanceComponentPairs;                            // 0x00A0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           VisibleChunks;                                           // 0x00B0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    OperationCount;                                          // 0x00C0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Q2T[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DeepDiveRewardItem
	 * Size -> 0x0010
	 */
	struct FDeepDiveRewardItem
	{
	public:
		class USchematic*                                          Schematic;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Stage;                                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WasAlreadyGiven;                                         // 0x000C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZP64[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DeepDiveBank
	 * Size -> 0x0010
	 */
	struct FDeepDiveBank
	{
	public:
		class UDeepDive*                                           NormalDeepDive;                                          // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDeepDive*                                           HardDeepDive;                                            // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DeepDiveLoaderSequence
	 * Size -> 0x0028
	 */
	struct FDeepDiveLoaderSequence
	{
	public:
		unsigned char                                              LevelSequence[0x28];                                     // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct FSD.DeepDiveTemplateItem
	 * Size -> 0x0038
	 */
	struct FDeepDiveTemplateItem
	{
	public:
		class UMissionTemplate*                                    mission;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Probability;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZW54[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMissionDuration*>                            AllowedDurations;                                        // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMissionComplexity*>                          AllowedComplexities;                                     // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       CanOnlyAppearOnce;                                       // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanOnlyAppearOncePerDeepDiveSet;                         // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1QP7[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DeepRepPath
	 * Size -> 0x00D0
	 */
	struct FDeepRepPath
	{
	public:
		struct FVector                                             PathBase;                                                // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PathLength;                                              // 0x000C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDeepMovementState                                         State;                                                   // 0x000D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StateBits;                                               // 0x000E(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H6KT[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PathOffsets[0x10];                                       // 0x0010(0x00C0) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.HandleRotationOptions
	 * Size -> 0x0001
	 */
	struct FHandleRotationOptions
	{
	public:
		bool                                                       HandlePitch;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FakeMoverState
	 * Size -> 0x0060
	 */
	struct FFakeMoverState
	{
	public:
		float                                                      TickRate;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickTime;                                                // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrevPos;                                                 // 0x0008(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NextPos;                                                 // 0x0014(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrevSurfaceNormal;                                       // 0x0020(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NextSurfaceNormal;                                       // 0x002C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedTime;                                         // 0x0038(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F7AE[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Target;                                                  // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0048(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NearSurface;                                             // 0x0054(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OLRO[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SignedDistToSurface;                                     // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HTRT[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DialogStruct
	 * Size -> 0x0058
	 */
	struct FDialogStruct
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3U1W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Text;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              audio[0x28];                                             // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		EDialogRestriction                                         Restriction;                                             // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FER1[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weigth;                                                  // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsValidEntry;                                           // 0x0050(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_19N5[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.VeteranComposition
	 * Size -> 0x0020
	 */
	struct FVeteranComposition
	{
	public:
		struct FRandFloatInterval                                  Normal;                                                  // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		struct FRandFloatInterval                                  Large;                                                   // 0x0010(0x0010) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DiscordServerInviteGuildData
	 * Size -> 0x0060
	 */
	struct FDiscordServerInviteGuildData
	{
	public:
		class FString                                              banner;                                                  // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Icon;                                                    // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              splash;                                                  // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DiscordServerInviteData
	 * Size -> 0x0078
	 */
	struct FDiscordServerInviteData
	{
	public:
		class FString                                              code;                                                    // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    approximate_presence_count;                              // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    approximate_member_count;                                // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDiscordServerInviteGuildData                       guild;                                                   // 0x0018(0x0060) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DiscordRewardNotification
	 * Size -> 0x0040
	 */
	struct FDiscordRewardNotification
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        IconColor;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DiscordEoMData
	 * Size -> 0x0020
	 */
	struct FDiscordEoMData
	{
	public:
		class FString                                              nick;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserId;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DisplayContent
	 * Size -> 0x0050
	 */
	struct FDisplayContent
	{
	public:
		class UAnimationAsset*                                     Idle;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimationAsset*                                     React;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       Mesh;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PivotOffset;                                             // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U12Y[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        Description;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DoubleDrillDamageItem
	 * Size -> 0x0038
	 */
	struct FDoubleDrillDamageItem
	{
	public:
		TWeakObjectPtr<class UPrimitiveComponent>                  Target;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 Location;                                                // 0x0008(0x000C) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           Normal;                                                  // 0x0014(0x000C) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFSDPhysicalMaterial*                                Material;                                                // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BoneIndex;                                               // 0x0030(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MYRA[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DeathIntroSettings
	 * Size -> 0x0024
	 */
	struct FDeathIntroSettings
	{
	public:
		unsigned char                                              UnknownData_EXAP[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FirstPersonDuration;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeToBlackDelay;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeToBlackDuration;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeFromBlackDelay;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeFromBlackDuration;                                   // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomOutDuration;                                         // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomOutStartDistance;                                    // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRO1[0x4];                                   // 0x0020(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.BarleySpawnItem
	 * Size -> 0x0010
	 */
	struct FBarleySpawnItem
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRYV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.MiningPodDialogs
	 * Size -> 0x0050
	 */
	struct FMiningPodDialogs
	{
	public:
		class UDialogDataAsset*                                    DepartingIn5Min;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    DepartingIn4Min;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    DepartingIn3Min;                                         // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    DepartingIn2Min;                                         // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    DepartingIn1Min;                                         // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    DepartingIn30Sec;                                        // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    DepartingIn10Sec;                                        // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    DepartingIn123Sec;                                       // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Departed;                                                // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    DeepDiveDeparted;                                        // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.EliminationDescriptors
	 * Size -> 0x0010
	 */
	struct FEliminationDescriptors
	{
	public:
		TArray<class UEnemyDescriptor*>                            Descriptors;                                             // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.EliminationTarget
	 * Size -> 0x0010
	 */
	struct FEliminationTarget
	{
	public:
		TArray<class AFSDPawn*>                                    Targets;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ManagedEncounterItem
	 * Size -> 0x0010
	 */
	struct FManagedEncounterItem
	{
	public:
		class UEnemyDescriptor*                                    descriptor;                                              // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KNIR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PrePlacedEncounterItem
	 * Size -> 0x0050
	 */
	struct FPrePlacedEncounterItem
	{
	public:
		class UEnemyDescriptor*                                    descriptor;                                              // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_099Z[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Location;                                                // 0x0010(0x0030) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class AEncounterActor*                                     EncounterActor;                                          // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHIH[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.EncounterManagerItem
	 * Size -> 0x0050
	 */
	struct FEncounterManagerItem
	{
	public:
		TArray<struct FManagedEncounterItem>                       ManagedEcnounterItems;                                   // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FPrePlacedEncounterItem>                     PrePlacedEncounterItems;                                 // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsRoom;                                                  // 0x0024(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PX9P[0x17];                                  // 0x0025(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      Callback;                                                // 0x003C(0x0010) ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JPT[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.EncounterRareCritterItem
	 * Size -> 0x0010
	 */
	struct FEncounterRareCritterItem
	{
	public:
		class URareCritterDescriptor*                              Critter;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chance;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DK8Y[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.EncounterSpecialItem
	 * Size -> 0x0010
	 */
	struct FEncounterSpecialItem
	{
	public:
		class UEnemyDescriptor*                                    enemy;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseChance;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanSpawnInDeepDive;                                      // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GUQ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.EliteEnemyBan
	 * Size -> 0x0010
	 */
	struct FEliteEnemyBan
	{
	public:
		struct FInt32Interval                                      AffectedPlayerCount;                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionTemplate*                                    Template;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.EliteEnemyEntry
	 * Size -> 0x0040
	 */
	struct FEliteEnemyEntry
	{
	public:
		float                                                      HeroChance;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXLE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              StatusEffect;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ComponentsToAdd;                                         // 0x0010(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       OverrideHealthScaling;                                   // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UIKY[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEliteEnemyBan>                              Bans;                                                    // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EEnemyHealthScaling                                        HealthScalingOverride;                                   // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GPYS[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SimpleObjectInfoData
	 * Size -> 0x0040
	 */
	struct FSimpleObjectInfoData
	{
	public:
		class FText                                                InGameName;                                              // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                InGameDescription;                                       // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    LookAtShout;                                             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TestAnimInstanceProxy
	 * Size -> 0x0020 (FullSize[0x0790] - InheritedSize[0x0770])
	 */
	struct FTestAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		bool                                                       IsAlive;                                                 // 0x0770(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SF1S[0x3];                                   // 0x0771(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomStartPosition;                                     // 0x0774(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0778(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsMoving;                                                // 0x077C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GC8H[0x3];                                   // 0x077D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WalkCyclePlayRate;                                       // 0x0780(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2HSR[0xC];                                   // 0x0784(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.GliderAnimSync
	 * Size -> 0x0020
	 */
	struct FGliderAnimSync
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimAlphaSync;                                           // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VelocityPercent;                                         // 0x0008(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DownUpBlendBool;                                         // 0x0014(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RightLeftBlendBool;                                      // 0x0015(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JNW3[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VerticalAddBlend;                                        // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalAddBlend;                                      // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ControlEnemyState
	 * Size -> 0x0060
	 */
	struct FControlEnemyState
	{
	public:
		class ADeepPathfinderCharacter*                            ControlledEnemy;                                         // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_726Z[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTargetTransform;                                  // 0x0010(0x0030) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      InitialTargetBlendTotalTime;                             // 0x0040(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialCharacterVelocity;                                // 0x0044(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialEnemyVelocity;                                    // 0x0050(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C4ZA[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.EnemyDebris
	 * Size -> 0x0018
	 */
	struct FEnemyDebris
	{
	public:
		float                                                      InfluenceRange;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYGQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UDebrisBase*>                                 Debris;                                                  // 0x0008(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SpawnRarityItem
	 * Size -> 0x0008
	 */
	struct FSpawnRarityItem
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rarity;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.EnemyAttackDescription
	 * Size -> 0x0020
	 */
	struct FEnemyAttackDescription
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EEnemyAttackType                                           range;                                                   // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDamageType                                                DamageType;                                              // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RVBH[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.EnemyMinersManualStats
	 * Size -> 0x000C
	 */
	struct FEnemyMinersManualStats
	{
	public:
		int32_t                                                    Health;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Damage;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Speed;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SpawnRarityModifierItem
	 * Size -> 0x0008
	 */
	struct FSpawnRarityModifierItem
	{
	public:
		unsigned char                                              UnknownData_XHKV[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SpawnQueueItem
	 * Size -> 0x0080
	 */
	struct FSpawnQueueItem
	{
	public:
		unsigned char                                              EnemyClass[0x28];                                        // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UEnemyDescriptor*                                    enemy;                                                   // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S98P[0x40];                                  // 0x0040(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SpawnEffectItem
	 * Size -> 0x0030 (FullSize[0x003C] - InheritedSize[0x000C])
	 */
	struct FSpawnEffectItem : public FFastArraySerializerItem
	{
	public:
		ECreatureSize                                              CreatureSize;                                            // 0x000C(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L760[0x3];                                   // 0x000D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector_NetQuantize                                 Location;                                                // 0x0010(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X8E2[0x14];                                  // 0x0028(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SpawnEffectsArray
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	struct FSpawnEffectsArray : public FFastArraySerializer
	{
	public:
		TArray<struct FSpawnEffectItem>                            Items;                                                   // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KR5W[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.WaveEntry
	 * Size -> 0x0030
	 */
	struct FWaveEntry
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_10CL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              WaveController[0x28];                                    // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct FSD.EscortMuleMovementState
	 * Size -> 0x0050
	 */
	struct FEscortMuleMovementState
	{
	public:
		struct FTransform                                          TargetTransform;                                         // 0x0000(0x0030) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0030(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LB6[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               AngularVelocity;                                         // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.EscortMuleExtractorSlot
	 * Size -> 0x0020
	 */
	struct FEscortMuleExtractorSlot
	{
	public:
		EEscortExtractorState                                      ExtractorState;                                          // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEscortExtractorState                                      LastState;                                               // 0x0001(0x0001) ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2Y50[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     AttachPoint;                                             // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInstantUsable*                                      Usable;                                                  // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetComponent*                                    Widget;                                                  // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SubObjective
	 * Size -> 0x0030
	 */
	struct FSubObjective
	{
	public:
		class UDialogDataAsset*                                    OnProgressShout;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    OnCompletedShout;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ObjectiveText;                                           // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    Required;                                                // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TentacleTarget
	 * Size -> 0x0020
	 */
	struct FTentacleTarget
	{
	public:
		struct FVector_NetQuantize                                 Location;                                                // 0x0000(0x000C) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MovementDuration;                                        // 0x0018(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSpring;                                               // 0x001C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9L9Z[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.FadeData
	 * Size -> 0x0048
	 */
	struct FFadeData
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDebugOutput;                                        // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H22H[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WidgetType;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFSDLevelLoadingPersistentWidget*                    Widget;                                                  // 0x0010(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentFade;                                             // 0x0018(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetFade;                                              // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeSpeed;                                               // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Delay;                                                   // 0x0024(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFadeWorldOnly;                                          // 0x0028(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCapFramerate;                                           // 0x0029(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bToSpaceRig;                                             // 0x002A(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C1TH[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            LoadingImage;                                            // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DebugMsg;                                                // 0x0038(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FakeMoverPropulsion
	 * Size -> 0x0014
	 */
	struct FFakeMoverPropulsion
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AirAcceleration;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AirDeceleration;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroundAcceleration;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroundDeceleration;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FakeMoverTarget
	 * Size -> 0x001C
	 */
	struct FFakeMoverTarget
	{
	public:
		float                                                      InfluenceDistance;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetDistance;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GetCloserAirAcceleration;                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GetAwayAirAcceleration;                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GetCloserGroundAcceleration;                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GetAwayGroundAcceleration;                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistance;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FakeMoveState
	 * Size -> 0x0024
	 */
	struct FFakeMoveState
	{
	public:
		struct FVector                                             Pos1;                                                    // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Pos2;                                                    // 0x000C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vel;                                                     // 0x0018(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FlareMeta
	 * Size -> 0x0024
	 */
	struct FFlareMeta
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Inhibit;                                                 // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InvRadius;                                               // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Pos;                                                     // 0x0014(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Moving;                                                  // 0x0020(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZY15[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.FloatPerkRank
	 * Size -> 0x0008
	 */
	struct FFloatPerkRank
	{
	public:
		int32_t                                                    Tier;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Cost;                                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FloatPerkRankValue
	 * Size -> 0x0008
	 */
	struct FFloatPerkRankValue
	{
	public:
		int32_t                                                    RankIndex;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FloatPerkEffect
	 * Size -> 0x0030
	 */
	struct FFloatPerkEffect
	{
	public:
		class UFloatPerkActivation*                                PerkActivation;                                          // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                FormattedDescription;                                    // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		TArray<struct FFloatPerkRankValue>                         RankValues;                                              // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.LayeredNoise
	 * Size -> 0x0010
	 */
	struct FLayeredNoise
	{
	public:
		class UFloodFillSettings*                                  Noise;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KFV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.FormationDataItem
	 * Size -> 0x0010
	 */
	struct FFormationDataItem
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.InputDirectionSet
	 * Size -> 0x0020
	 */
	struct FInputDirectionSet
	{
	public:
		TArray<EThawInputDirection>                                Directions;                                              // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    InputCount;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSequence;                                              // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16J8[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxSubsequentDuplicates;                                 // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CO91[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PlatformSpecificEventPopup
	 * Size -> 0x0030
	 */
	struct FPlatformSpecificEventPopup
	{
	public:
		EFSDTargetPlatform                                         TargetPlatform;                                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UK1X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PopupWidget[0x28];                                       // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct FSD.JettyBootEventSettings
	 * Size -> 0x0050
	 */
	struct FJettyBootEventSettings
	{
	public:
		unsigned char                                              JettyBootCharacter[0x28];                                // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              JettyBootArcadeOverlay[0x28];                            // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct FSD.PropHuntEventSettings
	 * Size -> 0x0050
	 */
	struct FPropHuntEventSettings
	{
	public:
		unsigned char                                              DisguiseActors[0x50];                                    // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct FSD.FSDEventWithEnd
	 * Size -> 0x0020
	 */
	struct FFSDEventWithEnd
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventExpirationDate;                                     // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.BlueprintFriend
	 * Size -> 0x0038
	 */
	struct FBlueprintFriend
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RealName;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFriendOnlineStatusEnum                                    OnlineStatus;                                            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GAD2[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueNetId;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FSDServerSearchOptions
	 * Size -> 0x0050
	 */
	struct FFSDServerSearchOptions
	{
	public:
		ESteamServerJoinStatus                                     JoinStatus;                                              // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamSearchRegion                                         SearchRegion;                                            // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKGO[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UDifficultySetting*>                          Difficulties;                                            // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       DeepDive;                                                // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4NR[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SearchString;                                            // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MissionSeed;                                             // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GlobalMissionSeed;                                       // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYPQ[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EGameType>                                          GameTypes;                                               // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FSDTagsAttitude
	 * Size -> 0x0018
	 */
	struct FFSDTagsAttitude
	{
	public:
		struct FGameplayTag                                        Friendly;                                                // 0x0000(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        Neutral;                                                 // 0x0008(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        Hostile;                                                 // 0x0010(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FSDTagsRoot
	 * Size -> 0x0018
	 */
	struct FFSDTagsRoot
	{
	public:
		struct FFSDTagsAttitude                                    Attitude;                                                // 0x0000(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ReplicatedObjectives
	 * Size -> 0x0018
	 */
	struct FReplicatedObjectives
	{
	public:
		bool                                                       HasReplicated;                                           // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYHC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObjective*>                                  Objectives;                                              // 0x0008(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GeneratedMissionSeed
	 * Size -> 0x0058
	 */
	struct FGeneratedMissionSeed
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GlobalSeed;                                              // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBiome*                                              Biome;                                                   // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionTemplate*                                    Template;                                                // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionComplexity*                                  ComplexityLimit;                                         // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionDuration*                                    DurationLimit;                                           // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionMutator*                                     Mutator;                                                 // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMissionWarning*>                             Warnings;                                                // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UFSDEvent*>                                   ActiveEvents;                                            // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		EMissionStructure                                          MissionStructure;                                        // 0x0050(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8QG[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ModdingUISettings
	 * Size -> 0x0060
	 */
	struct FModdingUISettings
	{
	public:
		unsigned char                                              SortField;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SortAscending;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PD74[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ServerFilters[0x50];                                     // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bShowSandboxLabel;                                       // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCQY[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ColorVisionDeficiencySettings
	 * Size -> 0x0008
	 */
	struct FColorVisionDeficiencySettings
	{
	public:
		EColorVisionDeficiency                                     Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2O5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Severity;                                                // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.HUDElementData
	 * Size -> 0x0008
	 */
	struct FHUDElementData
	{
	public:
		EHUDVisibilityMode                                         Mode;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHW5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Version;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.HUDElements
	 * Size -> 0x0080
	 */
	struct FHUDElements
	{
	public:
		struct FHUDElementData                                     OnScreenHelp;                                            // 0x0000(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     EnemyHealth;                                             // 0x0008(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     RadarDepth;                                              // 0x0010(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     PlayerHealthShield;                                      // 0x0018(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     PlayerNameClassIcon;                                     // 0x0020(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     PlayerItems;                                             // 0x0028(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     PlayerResources;                                         // 0x0030(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     WeaponInfo;                                              // 0x0038(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     Grenades;                                                // 0x0040(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     FlashLight;                                              // 0x0048(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     Flares;                                                  // 0x0050(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     Crosshair;                                               // 0x0058(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     Objectives;                                              // 0x0060(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     TeamDisplay;                                             // 0x0068(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     SentryGunDisplay;                                        // 0x0070(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHUDElementData                                     VersionNumber;                                           // 0x0078(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.CharacterOptions
	 * Size -> 0x0004
	 */
	struct FCharacterOptions
	{
	public:
		bool                                                       GrapplingHookAutoSwitch;                                 // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ZiplineGunAutoSwitch;                                    // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HoldToBreakImmobilization;                               // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HoldToFire;                                              // 0x0003(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CustomKeyBinding
	 * Size -> 0x0028
	 */
	struct FCustomKeyBinding
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q6W7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                Key;                                                     // 0x0010(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ControllerSettings
	 * Size -> 0x0010
	 */
	struct FControllerSettings
	{
	public:
		float                                                      AimInnerDeadZone;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimSensitivity;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimOuterAcceleration;                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETurn180Mode                                               Turn180Mode;                                             // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreviousItemEnabled;                                    // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChatEnabled;                                            // 0x000E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K7MJ[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.NotificationEntry
	 * Size -> 0x0030
	 */
	struct FNotificationEntry
	{
	public:
		class UObject*                                             ObjectInstance;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              WindowClass[0x28];                                       // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct FSD.PlatformComponent
	 * Size -> 0x0010
	 */
	struct FPlatformComponent
	{
	public:
		class UClass*                                              ComponentClass;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlatformComponentCriteria                                 Criteria;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLFU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.RewardTexts
	 * Size -> 0x0090
	 */
	struct FRewardTexts
	{
	public:
		class FText                                                PrimaryObjective;                                        // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                SecondaryObjective;                                      // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                CountPrimaryObjectives;                                  // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                CountSecondaryObjectives;                                // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                MineralsMinedByTeam;                                     // 0x0060(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                HostilesKilled;                                          // 0x0078(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.MissionStatCounter
	 * Size -> 0x0024
	 */
	struct FMissionStatCounter
	{
	public:
		struct FGuid                                               PlayerClassID;                                           // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               MissionStatID;                                           // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.MissionStatSave
	 * Size -> 0x0018
	 */
	struct FMissionStatSave
	{
	public:
		TArray<struct FMissionStatCounter>                         Counters;                                                // 0x0000(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bCharacterLevelUpFixed;                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBoughtVanityItemsFixed;                                 // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBoughtEquipmentUpgradesFixed;                           // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCampaignsCompletedFixed;                                // 0x0013(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       WeaponUpgradesFixed;                                     // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2D2D[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.MilestoneCounter
	 * Size -> 0x0014
	 */
	struct FMilestoneCounter
	{
	public:
		struct FGuid                                               KPIGuid;                                                 // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Tier;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.MilestoneSave
	 * Size -> 0x0010
	 */
	struct FMilestoneSave
	{
	public:
		TArray<struct FMilestoneCounter>                           ClaimedKPIRewards;                                       // 0x0000(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.PerkClaimEntry
	 * Size -> 0x0014
	 */
	struct FPerkClaimEntry
	{
	public:
		struct FGuid                                               PerkID;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    currentRank;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PerkClaimsSave
	 * Size -> 0x0018
	 */
	struct FPerkClaimsSave
	{
	public:
		TArray<struct FPerkClaimEntry>                             PerkEntries;                                             // 0x0000(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       HasResetPerks2;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KXA2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PerkEquipEntry
	 * Size -> 0x0020
	 */
	struct FPerkEquipEntry
	{
	public:
		struct FGuid                                               characterID;                                             // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       PerkIDs;                                                 // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CharacterPerksSave
	 * Size -> 0x0010
	 */
	struct FCharacterPerksSave
	{
	public:
		TArray<struct FPerkEquipEntry>                             CharacterPerks;                                          // 0x0000(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.AchievementSaveEntry
	 * Size -> 0x0018
	 */
	struct FAchievementSaveEntry
	{
	public:
		struct FGuid                                               AchievementSaveID;                                       // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighestSavedProgress;                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentProgress;                                         // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.AchievementSave
	 * Size -> 0x0020
	 */
	struct FAchievementSave
	{
	public:
		TArray<class FString>                                      OfflineAchievedAchievements;                             // 0x0000(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FAchievementSaveEntry>                       AchievementEntries;                                      // 0x0010(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.VanityMasterySave
	 * Size -> 0x0010
	 */
	struct FVanityMasterySave
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XP;                                                      // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasAwardedForOldPurchases;                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NH60[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FashionitesAwaredForOldPurchases;                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.JettyBootsScore
	 * Size -> 0x0018
	 */
	struct FJettyBootsScore
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWKK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.JettyBootsSave
	 * Size -> 0x0028
	 */
	struct FJettyBootsSave
	{
	public:
		TArray<struct FJettyBootsScore>                            HighScores;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FJettyBootsScore>                            NPC_HighScores;                                          // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bInitializeNPCs;                                         // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X911[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastHighScoreIndex;                                      // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SchematicSave
	 * Size -> 0x0040
	 */
	struct FSchematicSave
	{
	public:
		struct FGuid                                               PendingReward;                                           // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstSchematicMessageShown;                             // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FRQ7[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGuid>                                       ForgedSchematics;                                        // 0x0018(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FGuid>                                       OwnedSchematics;                                         // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    SkinFixupCounter;                                        // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7VZT[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PromotionRewardsSave
	 * Size -> 0x0058
	 */
	struct FPromotionRewardsSave
	{
	public:
		int32_t                                                    PendingPromotionGifts;                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JOW1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ClaimedRewards[0x50];                                    // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct FSD.FSDEventRewardsSave
	 * Size -> 0x00A0
	 */
	struct FFSDEventRewardsSave
	{
	public:
		unsigned char                                              EventsSeen[0x50];                                        // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              PopupsSeen[0x50];                                        // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct FSD.RewardsClaimed
	 * Size -> 0x0002
	 */
	struct FRewardsClaimed
	{
	public:
		bool                                                       NormalClaimed;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       SpecialClaimed;                                          // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.ChallengeSaveInfo
	 * Size -> 0x0030
	 */
	struct FChallengeSaveInfo
	{
	public:
		TArray<int32_t>                                            StatIndices;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               ChallengeGuid;                                           // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentWins;                                             // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfWins;                                            // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XPCompleteGain;                                          // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TokenGain;                                               // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SeasonSaveEntry
	 * Size -> 0x0100
	 */
	struct FSeasonSaveEntry
	{
	public:
		int32_t                                                    CountSeasonContentDisabled;                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CountSeasonContentReenabled;                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XP;                                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Tokens;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FRewardsClaimed>                             RewardsClaimed;                                          // 0x0010(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bSeasonCompletedAnnounced;                               // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       HasClaimedAllRewards;                                    // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AG2A[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RewardsClaimedAfterMaxLevel;                             // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<int32_t, bool>                                        NodesBought;                                             // 0x0028(0x0050) Protected, NativeAccessSpecifierProtected
		TArray<struct FChallengeSaveInfo>                          ActiveChallenges;                                        // 0x0078(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FDateTime                                           LastNewChallengeGiven;                                   // 0x0088(0x0008) ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDateTime                                           LastChallengeReroll;                                     // 0x0090(0x0008) ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<struct FGuid, int32_t>                                CompletedSpecialChallenges;                              // 0x0098(0x0050) Protected, NativeAccessSpecifierProtected
		int32_t                                                    ClaimedScripChallenges;                                  // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PlagueHeartsUsed;                                        // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimePlayedAtSeasonStart;                                 // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ChallengesCompletedAtSeasonStart;                        // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       OptedOutOfSeasonContent;                                 // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8057[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SeasonSave
	 * Size -> 0x0050
	 */
	struct FSeasonSave
	{
	public:
		TMap<struct FGuid, struct FSeasonSaveEntry>                Seasons;                                                 // 0x0000(0x0050) Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.GameDLCSave
	 * Size -> 0x0050
	 */
	struct FGameDLCSave
	{
	public:
		unsigned char                                              AnnouncedIDs[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct FSD.WeaponMaintenanceEntry
	 * Size -> 0x001C
	 */
	struct FWeaponMaintenanceEntry
	{
	public:
		struct FGuid                                               WeaponID;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XP;                                                      // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LevelUpNotification;                                     // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OEK[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.WeaponMaintenance
	 * Size -> 0x0018
	 */
	struct FWeaponMaintenance
	{
	public:
		TArray<struct FWeaponMaintenanceEntry>                     Entries;                                                 // 0x0000(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    MaxLevel;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8UIK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.UnLockedMissionParameters
	 * Size -> 0x0020
	 */
	struct FUnLockedMissionParameters
	{
	public:
		TArray<struct FGuid>                                       UnLockedComplexities;                                    // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       UnLockedDurations;                                       // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ActiveCampaignItem
	 * Size -> 0x0018
	 */
	struct FActiveCampaignItem
	{
	public:
		struct FGuid                                               CampaignID;                                              // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Progress;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.WeeklyCampaignItem
	 * Size -> 0x000C
	 */
	struct FWeeklyCampaignItem
	{
	public:
		int32_t                                                    LastCompletedWeek;                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastStartedWeek;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RewardedProgress;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CampaignSave
	 * Size -> 0x0050
	 */
	struct FCampaignSave
	{
	public:
		struct FActiveCampaignItem                                 ActiveCampaign;                                          // 0x0000(0x0018) NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       CompletedCampaigns;                                      // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ActiveCampaignWeek;                                      // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWeeklyCampaignItem                                 WeeklySave;                                              // 0x002C(0x000C) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FWeeklyCampaignItem                                 MaxtrixCoreHuntSave;                                     // 0x0038(0x000C) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FWeeklyCampaignItem                                 SeededRandomSave;                                        // 0x0044(0x000C) NoDestructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.DeepDiveSaveRewardItem
	 * Size -> 0x0014
	 */
	struct FDeepDiveSaveRewardItem
	{
	public:
		struct FGuid                                               RewardID;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Stage;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DeepDiveItem
	 * Size -> 0x0038
	 */
	struct FDeepDiveItem
	{
	public:
		int32_t                                                    Progress;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BestTime;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2AG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDeepDiveSaveRewardItem>                     Rewards;                                                 // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       HasEverCompleted;                                        // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GSA6[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGuid>                                       RewardsGiven;                                            // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FSD.DeepDiveSave
	 * Size -> 0x0070
	 */
	struct FDeepDiveSave
	{
	public:
		struct FDeepDiveItem                                       NormalSave;                                              // 0x0000(0x0038) NativeAccessSpecifierPublic
		struct FDeepDiveItem                                       EliteSave;                                               // 0x0038(0x0038) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CharacterVanityLoadout
	 * Size -> 0x0098
	 */
	struct FCharacterVanityLoadout
	{
	public:
		struct FGuid                                               EquippedHeadItemID;                                      // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               EquippedBeardItemID;                                     // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               EquippedArmorItemID;                                     // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               EquippedArmorMaterialID;                                 // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               EquippedBeardColorItemID;                                // 0x0040(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               EquippedSkinColorItemID;                                 // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               EquippedEyebrowsItemID;                                  // 0x0060(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               EquippedMoustacheItemID;                                 // 0x0070(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               EquippedSideburnsItemID;                                 // 0x0080(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsingSleevelessArmor;                                    // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4C0[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MedicalGownIndex;                                        // 0x0094(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CharacterVanitySave
	 * Size -> 0x0118
	 */
	struct FCharacterVanitySave
	{
	public:
		TArray<struct FCharacterVanityLoadout>                     Loadouts;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FCharacterVanityLoadout                             RandomVanityLoadout;                                     // 0x0010(0x0098) NoDestructor, NativeAccessSpecifierPrivate
		TArray<struct FGuid>                                       UnLockedVanityItemIDs;                                   // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UVanityItem*>                                 UnLockedVanityItems;                                     // 0x00B8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<EVanitySlot, struct FGuid>                            NewVanityItems;                                          // 0x00C8(0x0050) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FSD.ItemLoadout
	 * Size -> 0x0084
	 */
	struct FItemLoadout
	{
	public:
		struct FGuid                                               PrimaryWeapon;                                           // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               SecondaryWeapon;                                         // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               TraversalTool;                                           // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ClassTool;                                               // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               Armor;                                                   // 0x0040(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               Flare;                                                   // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               MiningTool;                                              // 0x0060(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               Grenade;                                                 // 0x0070(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    iconIndex;                                               // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ItemUpgradeSelection
	 * Size -> 0x0078
	 */
	struct FItemUpgradeSelection
	{
	public:
		struct FGuid                                               WeaponID;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       EquippedUpgrades;                                        // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       PermanentUpgrades;                                       // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               EquippedOverclock;                                       // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       EquippedSkins;                                           // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       OverclockingUnlocked;                                    // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TL8L[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               EquippedSkinColor;                                       // 0x0054(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               EquippedSkinMesh;                                        // 0x0064(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3VDD[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.UpgradeLoadout
	 * Size -> 0x0050
	 */
	struct FUpgradeLoadout
	{
	public:
		TMap<struct FGuid, struct FItemUpgradeSelection>           Loadout;                                                 // 0x0000(0x0050) Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.VictoryPoseSave
	 * Size -> 0x0030
	 */
	struct FVictoryPoseSave
	{
	public:
		struct FGuid                                               EquippedVictoryPose;                                     // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       UnlockedVictoryPoses;                                    // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       EquippedVictoryPoses;                                    // 0x0020(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.CharacterSave
	 * Size -> 0x02F8
	 */
	struct FCharacterSave
	{
	public:
		struct FGuid                                               SavegameID;                                              // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XP;                                                      // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasCompletedRetirementCampaign;                          // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ARY5[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TimesRetired;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RetiredCharacterLevels;                                  // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasSeenRetirementRewardScreen;                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYHT[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CharacterClass;                                          // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FCharacterVanitySave                                Vanity;                                                  // 0x0030(0x0118) NativeAccessSpecifierPrivate
		int32_t                                                    SelectedLoadout;                                         // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FItemLoadout                                        Loadout;                                                 // 0x014C(0x0084) NoDestructor, NativeAccessSpecifierPrivate
		TArray<struct FItemLoadout>                                Loadouts;                                                // 0x01D0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FUpgradeLoadout>                             ItemUpgradeLoadouts;                                     // 0x01E0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FItemLoadout                                        RandomWeaponLoadout;                                     // 0x01F0(0x0084) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TOHR[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUpgradeLoadout                                     RandomItemUpgradeLoadouts;                               // 0x0278(0x0050) NativeAccessSpecifierPrivate
		struct FVictoryPoseSave                                    VictoryPose;                                             // 0x02C8(0x0030) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FSD.ForgingPendingReward
	 * Size -> 0x0008
	 */
	struct FForgingPendingReward
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ForgingSave
	 * Size -> 0x0018
	 */
	struct FForgingSave
	{
	public:
		int32_t                                                    XP;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HL6H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FForgingPendingReward>                       PendingMasteryRewards;                                   // 0x0008(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.DrinkSave
	 * Size -> 0x0058
	 */
	struct FDrinkSave
	{
	public:
		unsigned char                                              UnlockedDrinks[0x50];                                    // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       HasUnlockedSpecial;                                      // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2JUO[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ItemNotificationInfo
	 * Size -> 0x0004
	 */
	struct FItemNotificationInfo
	{
	public:
		int32_t                                                    NotificationFlags;                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SkinList
	 * Size -> 0x0050
	 */
	struct FSkinList
	{
	public:
		unsigned char                                              Skins[0x50];                                             // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct FSD.EventRewardSaveItem
	 * Size -> 0x0020
	 */
	struct FEventRewardSaveItem
	{
	public:
		struct FGuid                                               CategoryID;                                              // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       ClassOptions;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.EventRewardSave
	 * Size -> 0x0050
	 */
	struct FEventRewardSave
	{
	public:
		TMap<struct FGuid, struct FEventRewardSaveItem>            PendingRewards;                                          // 0x0000(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.UINotificationItem
	 * Size -> 0x0010
	 */
	struct FUINotificationItem
	{
	public:
		TArray<struct FGuid>                                       NotificationIDs;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ItemUINotifications
	 * Size -> 0x0068
	 */
	struct FItemUINotifications
	{
	public:
		TArray<struct FUINotificationItem>                         UINotifications;                                         // 0x0000(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UINotificationSet[0x50];                                 // 0x0010(0x0050) UNKNOWN PROPERTY: SetProperty
		class UFSDSaveGame*                                        SaveGame;                                                // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.ResourcesSave
	 * Size -> 0x00A0
	 */
	struct FResourcesSave
	{
	public:
		TMap<struct FGuid, float>                                  OwnedResources;                                          // 0x0000(0x0050) NativeAccessSpecifierPublic
		TMap<class UResourceData*, float>                          Resources;                                               // 0x0050(0x0050) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FSD.WatchedTutorial
	 * Size -> 0x0018
	 */
	struct FWatchedTutorial
	{
	public:
		class FString                                              TutorialName;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5KHG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ConsoleOptionsInSaveGame
	 * Size -> 0x0148
	 */
	struct FConsoleOptionsInSaveGame
	{
	public:
		struct FControllerSettings                                 ControllerSettings;                                      // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FHUDElements                                        HUDElements;                                             // 0x0010(0x0080) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       SaveGameOptionsValid;                                    // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTutorialHintsEnabled;                                   // 0x0091(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFPS;                                                // 0x0092(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R01E[0x1];                                   // 0x0093(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ShowNetInfoLevel;                                        // 0x0094(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FOV;                                                     // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadbobbingScale;                                        // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraShakeScale;                                        // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UIDPIScale;                                              // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      volumeCharacterVoice;                                    // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      volumeMaster;                                            // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      volumeMissionControl;                                    // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      volumeSFX;                                               // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      volumeMusic;                                             // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowSubtitles;                                          // 0x00BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InvertMouse;                                             // 0x00BD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PhotosensitiveMode;                                      // 0x00BE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHoldToSprint;                                           // 0x00BF(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bToggleLaserPointer;                                     // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bToggleTerrainScanner;                                   // 0x00C1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMouseSmoothing;                                      // 0x00C2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9KR[0x1];                                   // 0x00C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MouseXSensitivity;                                       // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MouseYSensitivity;                                       // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSeperateSensitivity;                                 // 0x00CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertMouseWheel;                                       // 0x00CD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertIncapacitatedX_Mouse;                             // 0x00CE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertIncapacitatedX_Controller;                        // 0x00CF(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertFlightControls;                                   // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowUIAnimations;                                       // 0x00D1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlaySoundOnChatMessage;                                 // 0x00D2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AXKP[0x1];                                   // 0x00D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChatFadeTime;                                            // 0x00D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForceFeedbackScale;                                      // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChatFontSize;                                            // 0x00DC(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HDRColorGamma;                                           // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConsoleGraphicsMode                                       ConsoleGraphicsMode;                                     // 0x00E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7SF3[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Language;                                                // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterOptions                                   CharacterOptions;                                        // 0x00F8(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PW1Q[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCustomKeyBinding>                           CustomKeyBindings;                                       // 0x0100(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCustomKeyBinding>                           CustomControllerBindings;                                // 0x0110(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       SwapControllerThumbsticks;                               // 0x0120(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1P5M[0x3];                                   // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FSDResolutionScale;                                      // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpscalingType;                                           // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmdFsrMode;                                              // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmdFsr2Mode;                                             // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUDLSSMode                                                 NvidiaDlssMode;                                          // 0x0134(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQO2[0x3];                                   // 0x0135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AmdFsrSharpness;                                         // 0x0138(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmdFsr2Sharpness;                                        // 0x013C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NvidiaDlssSharpness;                                     // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OL64[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.GDKWinOptionsInSaveGame
	 * Size -> 0x0070
	 */
	struct FGDKWinOptionsInSaveGame
	{
	public:
		bool                                                       SaveGameOptionsValid;                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E4TW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ScreenMode;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ResolutionSizeX;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ResolutionSizeY;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVSync;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HT1K[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FrameRateLimit;                                          // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Sharpening;                                              // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AntiAliasingType;                                        // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gamma;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OverallQuality;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ResolutionScale;                                         // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TextureQuality;                                          // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShadowQuality;                                           // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AntiAliasingQuality;                                     // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PostProcessingQuality;                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EffectsQuality;                                          // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ViewDistanceQuality;                                     // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PreventLatejoinCharacterDuplication;                     // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VWLJ[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LocalGameServerName;                                     // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrentAudioOutputDeviceId;                              // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseDefaultAudioOutputDevice;                             // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DULK[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.OptionsInSaveGame
	 * Size -> 0x0008
	 */
	struct FOptionsInSaveGame
	{
	public:
		bool                                                       SaveGameOptionsValid;                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XT26[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ScreenMode;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SonyInputSettings
	 * Size -> 0x0030
	 */
	struct FSonyInputSettings
	{
	public:
		bool                                                       MotionControlEnabled;                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A02F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MotionControlXSensitivity;                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MotionControlYSensitivity;                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MotionControlPrecisionMode;                              // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MotionControlSalute;                                     // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MotionControlFlight;                                     // 0x000E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESonyControllerMotionMapping                               MotionXMapping;                                          // 0x000F(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AdaptiveTriggersEnabled;                                 // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MBVD[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ControllerSpeakerVolume;                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ControllerSpeakerMissionControl;                         // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ControllerSpeakerSalute;                                 // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ControllerSpeakerFlare;                                  // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ControllerSpeakerMineralCollection;                      // 0x001B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TouchPadTerrainScannerEnabled;                           // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WUL1[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TouchPadTerrainScannerXSensitivity;                      // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TouchPadTerrainScannerYSensitivity;                      // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TouchPadTerrainScannerZoomSensitivity;                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TouchPadGesturesEnabled;                                 // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESonyControllerLightMode                                   ControllerLightMode;                                     // 0x002D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XB6L[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.NewPlayerMutator
	 * Size -> 0x0018
	 */
	struct FNewPlayerMutator
	{
	public:
		int32_t                                                    MinCampaignProgress;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCampaignProgress;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMutator*>                                    Mutators;                                                // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.WidgetPing
	 * Size -> 0x0020
	 */
	struct FWidgetPing
	{
	public:
		TWeakObjectPtr<class UWidget>                              Widget;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_15R0[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.WidgetFade
	 * Size -> 0x001C
	 */
	struct FWidgetFade
	{
	public:
		TWeakObjectPtr<class UUserWidget>                          Widget;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G70H[0x14];                                  // 0x0008(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.WidgetTextCounter
	 * Size -> 0x001C
	 */
	struct FWidgetTextCounter
	{
	public:
		TWeakObjectPtr<class UTextBlock>                           Widget;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TF1R[0x14];                                  // 0x0008(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CustomCounter
	 * Size -> 0x0028
	 */
	struct FCustomCounter
	{
	public:
		class FScriptDelegate                                      OnCount;                                                 // 0x0000(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              Owner;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YN8V[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.WidgetMover
	 * Size -> 0x0028
	 */
	struct FWidgetMover
	{
	public:
		TWeakObjectPtr<class UWidget>                              Widget;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3R1H[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.TrackBuilderPoint
	 * Size -> 0x0028
	 */
	struct FTrackBuilderPoint
	{
	public:
		ETrackBuildPlacementState                                  PlacementState;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A1OK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize                                 Location;                                                // 0x0004(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 EulerRotation;                                           // 0x0010(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPointValid;                                             // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DSP[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UTrackBuilderConnectPoint>            ConnectPoint;                                            // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GVisibilityGroups
	 * Size -> 0x0058
	 */
	struct FGVisibilityGroups
	{
	public:
		unsigned char                                              AllGroups[0x50];                                         // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
		class UHUDVisibilityGroup*                                 EnemyHealth;                                             // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GDItemCategoryIDs
	 * Size -> 0x0040
	 */
	struct FGDItemCategoryIDs
	{
	public:
		class UCategoryID*                                         OverclockID;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCategoryID*                                         ItemSkinID;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCategoryID*                                         VanityID;                                                // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCategoryID*                                         PickaxePartID;                                           // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCategoryID*                                         WeaponID;                                                // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCategoryID*                                         CraftingID;                                              // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCategoryID*                                         ForgeID;                                                 // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCategoryID*                                         BoscoSkinID;                                             // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GDDamageClasses
	 * Size -> 0x0060
	 */
	struct FGDDamageClasses
	{
	public:
		class UDamageClass*                                        Falling;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageClass*                                        Fire;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageClass*                                        Burn;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageClass*                                        Heat;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageClass*                                        Disintegrate;                                            // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageClass*                                        Physical;                                                // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageClass*                                        Kinetic;                                                 // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageClass*                                        Explosive;                                               // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageClass*                                        Cold;                                                    // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageClass*                                        Ice;                                                     // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageClass*                                        Corrosive;                                               // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageClass*                                        Infectious;                                              // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GDStats
	 * Size -> 0x0148
	 */
	struct FGDStats
	{
	public:
		class UPawnStat*                                           MaxAmmo;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           MaxShields;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           ShieldRegenerationRate;                                  // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           MaxHealth;                                               // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           DamageResistance;                                        // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           FireResistance;                                          // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           ColdResistance;                                          // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           MeleeAttackDamage;                                       // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           MovementSpeed;                                           // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           AirControl;                                              // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           SprintSpeed;                                             // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           CarryingSpeedModifier;                                   // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           ReviveSpeed;                                             // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           DepositSpeed;                                            // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           RessuplySpeed;                                           // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           RedSugarHeal;                                            // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           CarryingCapacity;                                        // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           ZiplineSpeed;                                            // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           ZiplineDownwardsBoost;                                   // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           SlideDownIce;                                            // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           FriendlyFire;                                            // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           DamageFromPlayers;                                       // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           DamageBonus;                                             // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           FlareThrowingStrength;                                   // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           CaveLeechSense;                                          // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           MorkiteMining;                                           // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           GoldMining;                                              // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           RockMiningStrength;                                      // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           DirtMiningStrength;                                      // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           ResourceMiningStrength;                                  // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           PowerAttackCooldownRate;                                 // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           ImpactCompensation;                                      // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           MovementSpeedPenalty;                                    // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           MovementSpeedPenaltyReduction;                           // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           MovementSpeedEnvironmentalPenalty;                       // 0x0110(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           MovementSpeedEnvironmentalPenaltyReduction;              // 0x0118(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           CarriableThrowing;                                       // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           HoverBootsDuration;                                      // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           ExplodeOnDeath;                                          // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           CritChance;                                              // 0x0138(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnStat*                                           CritDamageBonus;                                         // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GDResources
	 * Size -> 0x00F0
	 */
	struct FGDResources
	{
	public:
		class UResourceData*                                       CreditsResource;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       Fashionite;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       MOMResource;                                             // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       GoldResource;                                            // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       NitraResource;                                           // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       HollomiteResource;                                       // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       MagniteResource;                                         // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       NeromiteResource;                                        // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       QuantriteResource;                                       // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       UmaniteResource;                                         // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       CropaniteResource;                                       // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       DystrumResource;                                         // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       IronResource;                                            // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       EnorResource;                                            // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       BismorResource;                                          // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       OilShaleResource;                                        // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       Barly1;                                                  // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       Barly2;                                                  // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       Barly3;                                                  // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       Barly4;                                                  // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGemResourceData*                                    JadizResource;                                           // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGemResourceData*                                    BittergemResource;                                       // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGemResourceData*                                    MotherlodeGemResource;                                   // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       RedSugarResource;                                        // 0x00B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UResourceData*                                       BlankSchematics;                                         // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UResourceData*>                               CraftingResources;                                       // 0x00C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class UResourceData*>                               AllResources;                                            // 0x00D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		float                                                      FashioniteToCredits;                                     // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FashioniteToMinerals;                                    // 0x00EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GDTerrainTypes
	 * Size -> 0x0010
	 */
	struct FGDTerrainTypes
	{
	public:
		class UTerrainType*                                        Rock;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTerrainType*                                        Dirt;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GDGameStatsTracking
	 * Size -> 0x0020
	 */
	struct FGDGameStatsTracking
	{
	public:
		struct FGameplayTagContainer                               TotalEnemyKillsFilter;                                   // 0x0000(0x0020) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GDAudio
	 * Size -> 0x0050
	 */
	struct FGDAudio
	{
	public:
		unsigned char                                              FirstPersonHitscanAttenuationOverride[0x28];             // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UClass*                                              ReverbActor;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DynamicReverbClass;                                      // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmallCaveRadius;                                         // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MediumCaveRadius;                                        // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LargeCaveRadius;                                         // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FirstPersonPriority;                                     // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThirdPersonPriority;                                     // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASBX[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.GDDifficulty
	 * Size -> 0x0010
	 */
	struct FGDDifficulty
	{
	public:
		TArray<class UDifficultySetting*>                          DifficultySettings;                                      // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RetirementCostItem
	 * Size -> 0x0050
	 */
	struct FRetirementCostItem
	{
	public:
		TMap<class UResourceData*, int32_t>                        RetirementCost;                                          // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GDCharacterRetirement
	 * Size -> 0x00C0
	 */
	struct FGDCharacterRetirement
	{
	public:
		TMap<class UPlayerCharacterID*, class UClass*>             Campaigns;                                               // 0x0000(0x0050) Edit, UObjectWrapper, NativeAccessSpecifierPublic
		TMap<class UPlayerCharacterID*, struct FRetirementCostItem> RetirementCost;                                          // 0x0050(0x0050) Edit, NativeAccessSpecifierPublic
		TArray<float>                                              CreditsCostMultipliers;                                  // 0x00A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ResourceCostMultipliers;                                 // 0x00B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GDPlayerAndCharacterProgression
	 * Size -> 0x00A0
	 */
	struct FGDPlayerAndCharacterProgression
	{
	public:
		unsigned char                                              RankedHeroClasses[0x10];                                 // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              TestHeroClasses[0x10];                                   // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class UClass*>                                      LoadedClasses;                                           // 0x0020(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class FText>                                        PlayerRankNames;                                         // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            CharacterXPLevels;                                       // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<struct FGuid, class UPlayerCharacterID*>              PlayerCharacterIDs;                                      // 0x0050(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.AssetsToLoadSettings
	 * Size -> 0x0010
	 */
	struct FAssetsToLoadSettings
	{
	public:
		unsigned char                                              ActorsPermanently[0x10];                                 // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct FSD.GDMissionStats
	 * Size -> 0x0168
	 */
	struct FGDMissionStats
	{
	public:
		class UMissionStat*                                        TimePlayed;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        DistanceTravelled;                                       // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        EnemiesKilled;                                           // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        MineralsMined;                                           // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        MissionCompleted;                                        // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        SoloMissionCompleted;                                    // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        SecondaryMissionCompleted;                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        CharacterLevelUp;                                        // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        VanityItemsBought;                                       // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        ItemUpgradesBought;                                      // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        CosmeticMasteryLevelledUp;                               // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        DrinkablesConsumed;                                      // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        DrinkableRoundsOrdered;                                  // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        BartenderCreditsTipped;                                  // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        CampaignMissionsCompleted;                               // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        CampaignsCompleted;                                      // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        TimesDowned;                                             // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        TimesPassedOut;                                          // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        WeaponsUnlockedStat;                                     // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        SeasonEventsCompleted;                                   // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        SeasonChallengesCompleted;                               // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        DeepDivesCompleted;                                      // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        EliteDeepDivesCompleted;                                 // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        CosmeticsCrafted;                                        // 0x00B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        WeaponSkinsCrafted;                                      // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        WeaponOverclocksCrafted;                                 // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        CraftingMasteryLevel;                                    // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        DefendBlackBoxObjectivesCompleted;                       // 0x00D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        RepairMiniMuleObjectivesCompleted;                       // 0x00E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        DeepDiveCompletedBestTime;                               // 0x00E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        EliteDeepDiveCompletedBestTime;                          // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        SpecialBeersUnlocked;                                    // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionStat*                                        JettyBootCreditsSpent;                                   // 0x0100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMissionStat*>                                AllMissionStats;                                         // 0x0108(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TMap<class UPlayerCharacterID*, class UMissionStat*>       CharacterMissionsCompleted;                              // 0x0118(0x0050) Edit, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.GDMilestones
	 * Size -> 0x0010
	 */
	struct FGDMilestones
	{
	public:
		TArray<class UMilestoneAsset*>                             Milestones;                                              // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GDPerks
	 * Size -> 0x0090
	 */
	struct FGDPerks
	{
	public:
		TArray<class UPerkAsset*>                                  PerkAssets;                                              // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            RequiredClaimsPerTier;                                   // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UFloatPerkAsset*                                     IronWill;                                                // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloatPerkAsset*                                     DashPerk;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloatPerkAsset*                                     MarathonPerk;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloatPerkAsset*                                     ShieldLink;                                              // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloatPerkAsset*                                     Bezerk;                                                  // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloatPerkAsset*                                     JumpBoots;                                               // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloatPerkAsset*                                     ImpactCompensators;                                      // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloatPerkAsset*                                     BeastMaster;                                             // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloatPerkAsset*                                     DownedBomb;                                              // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloatPerkAsset*                                     FieldMedic;                                              // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloatPerkAsset*                                     HeightenedSenses;                                        // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloatPerkAsset*                                     HoverBoots;                                              // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloatPerkAsset*                                     ActivePerkSlots;                                         // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloatPerkAsset*                                     PassivePerkSlots;                                        // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TrackPositionList
	 * Size -> 0x0038
	 */
	struct FTrackPositionList
	{
	public:
		class FName                                                TrackName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector4>                                    Positions;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<TWeakObjectPtr<class UGemTracker>>                  Trackers;                                                // 0x0018(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<TWeakObjectPtr<class UMaterialInstanceDynamic>>     DynamicMaterials;                                        // 0x0028(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GMMutatorItem
	 * Size -> 0x0010
	 */
	struct FGMMutatorItem
	{
	public:
		TArray<class UMutator*>                                    Mutators;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.MissionBiomeItem
	 * Size -> 0x0010
	 */
	struct FMissionBiomeItem
	{
	public:
		class UBiome*                                              Biome;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Rarity;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9QN3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.MissionTemplateItem
	 * Size -> 0x0010
	 */
	struct FMissionTemplateItem
	{
	public:
		class UMissionTemplate*                                    Template;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Rarity;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X13L[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PartyAnalyticsInformation
	 * Size -> 0x0014
	 */
	struct FPartyAnalyticsInformation
	{
	public:
		unsigned char                                              UnknownData_KX49[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DeepDiveAnalyticsInformation
	 * Size -> 0x000C
	 */
	struct FDeepDiveAnalyticsInformation
	{
	public:
		bool                                                       WasDeepDive;                                             // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQXY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastDeepDiveStage;                                       // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EliteDeepDive;                                           // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsReplay;                                                // 0x0009(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7MI[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.GooPuddleStatusEffectTrigger
	 * Size -> 0x0018
	 */
	struct FGooPuddleStatusEffectTrigger
	{
	public:
		TArray<class UDamageClass*>                                Trigger;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UClass*                                              NewStatusEffect;                                         // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GrabAvoidClassEntry
	 * Size -> 0x0010
	 */
	struct FGrabAvoidClassEntry
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceToKeep;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZWT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.AvoidActorEntry
	 * Size -> 0x0010
	 */
	struct FAvoidActorEntry
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCEQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.GraplingGunState
	 * Size -> 0x0010
	 */
	struct FGraplingGunState
	{
	public:
		struct FVector_NetQuantize                                 TargetLocation;                                          // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsGrapling : 1;                                          // 0x000C(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQIS[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.StateStats
	 * Size -> 0x0014
	 */
	struct FStateStats
	{
	public:
		float                                                      MaxAcceleration;                                         // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPawnSpeed;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSlowdownAngle;                                        // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSlowdownAngle;                                        // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBreakingDeceleration;                                 // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GuntowerModuleLevel
	 * Size -> 0x0018
	 */
	struct FGuntowerModuleLevel
	{
	public:
		TArray<class UClass*>                                      PossibleModules;                                         // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       PreventDuplication;                                      // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UB8Y[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.HackingUsableState
	 * Size -> 0x0014
	 */
	struct FHackingUsableState
	{
	public:
		bool                                                       bIsHacked;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O73M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AHackingToolItem>                     BeingHackedByItem;                                       // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APlayerCharacter>                     HackedBy;                                                // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PitchedUsers
	 * Size -> 0x0020
	 */
	struct FPitchedUsers
	{
	public:
		class APlayerCharacter*                                    Player;                                                  // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Timer;                                                   // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E23I[0x14];                                  // 0x000C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.HeroInfo
	 * Size -> 0x0088
	 */
	struct FHeroInfo
	{
	public:
		class FText                                                HeroName;                                                // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UTexture2D*                                          HeroIcon;                                                // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          SmallHeroIcon;                                           // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          HeroFullSizeImage;                                       // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        HeroColor;                                               // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                HeroShortDescription;                                    // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                HeroLongDescription;                                     // 0x0058(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                SwitchToMessage;                                         // 0x0070(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.HitscanDelayedImpact
	 * Size -> 0x0028
	 */
	struct FHitscanDelayedImpact
	{
	public:
		unsigned char                                              UnknownData_0J94[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           ImpactSound;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           FirstPersonImpactSound;                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K671[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.HealthBarLooks
	 * Size -> 0x0020
	 */
	struct FHealthBarLooks
	{
	public:
		struct FLinearColor                                        HealthColor;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DamageColor;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.HUDVisibilityRegisteredWidget
	 * Size -> 0x000C
	 */
	struct FHUDVisibilityRegisteredWidget
	{
	public:
		TWeakObjectPtr<class UWidget>                              Widget;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0BO[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PickaxeSet
	 * Size -> 0x0038
	 */
	struct FPickaxeSet
	{
	public:
		class UPickaxePart*                                        BladeFront;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPickaxePart*                                        OptionalBladeBack;                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPickaxePart*                                        Pommel;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPickaxePart*                                        Handle;                                                  // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPickaxePart*                                        Shaft;                                                   // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPickaxePart*                                        Head;                                                    // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPickaxePart*                                        Material;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GenerateIconInfo
	 * Size -> 0x0078
	 */
	struct FGenerateIconInfo
	{
	public:
		EGeneratorIconType                                         IconType;                                                // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9O5L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPickaxePart*                                        PickaxePart;                                             // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPickaxeSet                                         PickaxeSet;                                              // 0x0010(0x0038) Transient, NoDestructor, NativeAccessSpecifierPublic
		EPickaxePartLocation                                       PickaxePartLocation;                                     // 0x0048(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJPG[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItemSkin*                                           ItemSkin;                                                // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVanityItem*                                         Item;                                                    // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayerCharacterID*                                  Character;                                               // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Size;                                                    // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowCloseUp;                                            // 0x0070(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8PI6[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.EmitterConnection
	 * Size -> 0x0010
	 */
	struct FEmitterConnection
	{
	public:
		class FName                                                EmitterName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                VariableName;                                            // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.EquippedActorData
	 * Size -> 0x0010
	 */
	struct FEquippedActorData
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsExternalActor : 1;                                     // 0x0008(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JN5B[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DelayedActorSwitchData
	 * Size -> 0x0020
	 */
	struct FDelayedActorSwitchData
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsActive : 1;                                            // 0x0008(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsExternalActor : 1;                                     // 0x0008(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnEquipCalled : 1;                                     // 0x0008(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOFD[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEquippedActorData                                  Cached;                                                  // 0x0010(0x0010) Transient, NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FSD.ItemLoadoutAnimations
	 * Size -> 0x0018
	 */
	struct FItemLoadoutAnimations
	{
	public:
		class UAnimMontage*                                        Loadout;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                               Loadout_IdleBreaks;                                      // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SpaceRigNotification
	 * Size -> 0x0040
	 */
	struct FSpaceRigNotification
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        IconColor;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2MZ5[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ItemRefundResourceItem
	 * Size -> 0x0018
	 */
	struct FItemRefundResourceItem
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Amount;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BLD[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ItemRefundListItem
	 * Size -> 0x0068
	 */
	struct FItemRefundListItem
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FGuid, struct FItemRefundResourceItem>         Resources;                                               // 0x0010(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		float                                                      CreditCost;                                              // 0x0060(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPT9[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ItemUpgradeStatText
	 * Size -> 0x0020
	 */
	struct FItemUpgradeStatText
	{
	public:
		class FText                                                StatText;                                                // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       IsAdventageous;                                          // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1P3[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.JettyBootsPlayer
	 * Size -> 0x000C
	 */
	struct FJettyBootsPlayer
	{
	public:
		TWeakObjectPtr<class APlayerCharacter>                     PlayerCharacter;                                         // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlaying;                                              // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U08C[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.JettyBootNPC
	 * Size -> 0x0030
	 */
	struct FJettyBootNPC
	{
	public:
		class FString                                              CharacterName;                                           // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HasPlayedChance;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIRandRange                                         ScoreInterval;                                           // 0x0014(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZD6R[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            StartScores;                                             // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.JettyBootSetting
	 * Size -> 0x0018
	 */
	struct FJettyBootSetting
	{
	public:
		struct FIRandRange                                         GateCount;                                               // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FIRandRange                                         GateSpacing;                                             // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FIRandRange                                         GateOpeningSize;                                         // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.LaserPointerData
	 * Size -> 0x0060
	 */
	struct FLaserPointerData
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELaserPointerTargetType                                    TargetType;                                              // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_55U6[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               SavegameID;                                              // 0x004C(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCJO[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.LightStrobeChannel
	 * Size -> 0x00D0
	 */
	struct FLightStrobeChannel
	{
	public:
		TWeakObjectPtr<class UPointLightComponent>                 Light;                                                   // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UMaterialInstanceDynamic>             Mid;                                                     // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UMeshComponent>                       Mesh;                                                    // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ParamName;                                               // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinIntensity;                                            // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxIntensity;                                            // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeScale;                                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZIQB[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaterialMultiplier;                                      // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AA5K[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  StrobingCurve;                                           // 0x0038(0x0088) Edit, NativeAccessSpecifierPublic
		EStrobingMode                                              Mode;                                                    // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStrobeMaterialMode                                        MaterialMode;                                            // 0x00C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EDG[0x2];                                   // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Loops;                                                   // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DUIX[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.LineSegmentCarverPoint
	 * Size -> 0x0024
	 */
	struct FLineSegmentCarverPoint
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HRange;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VRange;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloorAngle;                                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CielingNoiseRange;                                       // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallNoiseRange;                                          // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloorNoiseRange;                                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.LineSegmentFillerPoint
	 * Size -> 0x0024
	 */
	struct FLineSegmentFillerPoint
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRandRange                                          RandomRange;                                             // 0x000C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRandRange                                          RandomNoiseRange;                                        // 0x0014(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRandRange                                          FillAmount;                                              // 0x001C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FSDTranslationProgress
	 * Size -> 0x0018
	 */
	struct FFSDTranslationProgress
	{
	public:
		class FString                                              CodeName;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TranslatedPercent;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VVI5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.BeamCollision
	 * Size -> 0x00C8
	 */
	struct FBeamCollision
	{
	public:
		bool                                                       bBeamBlocked;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1G5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BeamHitDistance;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FinalTraceStart;                                         // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FinalTraceEnd;                                           // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UERH[0xA8];                                  // 0x0020(0x00A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.TreasureWeight
	 * Size -> 0x0010
	 */
	struct FTreasureWeight
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HKWE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RewarderClass;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ProgressShout
	 * Size -> 0x0010
	 */
	struct FProgressShout
	{
	public:
		float                                                      ProgressStamp;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FYU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDialogDataAsset*                                    Shout;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.MicrowaveLense
	 * Size -> 0x0014
	 */
	struct FMicrowaveLense
	{
	public:
		float                                                      ShotRadiusMultiplier;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShotBonusDamageModifier;                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeatModifier;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RateOfFireModifier;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UXYZ[0x4];                                   // 0x0010(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.MilestoneTier
	 * Size -> 0x0008
	 */
	struct FMilestoneTier
	{
	public:
		float                                                      CompletionCount;                                         // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PerkPoints;                                              // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.SoftMinersManualDescription
	 * Size -> 0x0080
	 */
	struct FSoftMinersManualDescription
	{
	public:
		class FText                                                Headline;                                                // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                RichDescription;                                         // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              ImageFront[0x28];                                        // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ImageBackground[0x28];                                   // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct FSD.SoftIconWithColor
	 * Size -> 0x0038
	 */
	struct FSoftIconWithColor
	{
	public:
		unsigned char                                              Icon[0x28];                                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FLinearColor                                        Tint;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DamageTypeDescription
	 * Size -> 0x0078
	 */
	struct FDamageTypeDescription
	{
	public:
		EDamageType                                                Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MF25[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                RichDescription;                                         // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSoftIconWithColor                                  Icon;                                                    // 0x0038(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      IconScale;                                               // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0FUL[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SoftMissionStepDescription
	 * Size -> 0x0058
	 */
	struct FSoftMissionStepDescription
	{
	public:
		class FText                                                Headline;                                                // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                RichDescription;                                         // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              Image[0x28];                                             // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct FSD.MissionTypeDescription
	 * Size -> 0x0028
	 */
	struct FMissionTypeDescription
	{
	public:
		class FText                                                InfoHeadline;                                            // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		TArray<struct FSoftMissionStepDescription>                 Steps;                                                   // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.BiomeFeatures
	 * Size -> 0x0010
	 */
	struct FBiomeFeatures
	{
	public:
		class UMinersManualData*                                   Descriptions[0x2];                                       // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GeneratedMissionGroup
	 * Size -> 0x0018
	 */
	struct FGeneratedMissionGroup
	{
	public:
		TArray<class UGeneratedMission*>                           AvailableMissions;                                       // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       OptedOutOfSeasonContent;                                 // 0x0010(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ORYE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.MissionHazardSetting
	 * Size -> 0x0020
	 */
	struct FMissionHazardSetting
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		float                                                      HazardBonus;                                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CT8P[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ProjectileSpawnData
	 * Size -> 0x0028
	 */
	struct FProjectileSpawnData
	{
	public:
		class UClass*                                              ProjectileClass;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      HorizontalAngleOffset;                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      VerticalAngleOffset;                                     // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      Delay;                                                   // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBallistic;                                             // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PO1F[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.MusicHandle
	 * Size -> 0x0004
	 */
	struct FMusicHandle
	{
	public:
		int32_t                                                    MusicHandle;                                             // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ActiveMusicItem
	 * Size -> 0x0020
	 */
	struct FActiveMusicItem
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartingTime;                                            // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeDuration;                                            // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Looping;                                                 // 0x0010(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0B83[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMusicHandle                                        Handle;                                                  // 0x0014(0x0004) Transient, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMusicCategory*                                      Category;                                                // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ActiveAudioItem
	 * Size -> 0x0010
	 */
	struct FActiveAudioItem
	{
	public:
		class UAudioComponent*                                     audio;                                                   // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeoutDuration;                                         // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TL18[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PathObstacle
	 * Size -> 0x0010
	 */
	struct FPathObstacle
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.OxygenCallback
	 * Size -> 0x0018
	 */
	struct FOxygenCallback
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W52G[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.RandomWalkCycleEntry
	 * Size -> 0x0014
	 */
	struct FRandomWalkCycleEntry
	{
	public:
		float                                                      RandomSelectionWeight;                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRandRange                                          Duration;                                                // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CoolDown;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastTimePlayed;                                          // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PawnAfflictionItem
	 * Size -> 0x0018
	 */
	struct FPawnAfflictionItem
	{
	public:
		unsigned char                                              UnknownData_EIBQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAfflictionEffect*>                           Afflictions;                                             // 0x0008(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.AfflictionEntry
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FAfflictionEntry : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_L02V[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPawnAffliction*                                     Affliction;                                              // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.AfflictionEntriesArray
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	struct FAfflictionEntriesArray : public FFastArraySerializer
	{
	public:
		TArray<struct FAfflictionEntry>                            Items;                                                   // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UPawnAfflictionComponent*                            Owner;                                                   // 0x0118(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PawnStatEntry
	 * Size -> 0x0024 (FullSize[0x0030] - InheritedSize[0x000C])
	 */
	struct FPawnStatEntry : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_IM2Z[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPawnStat*                                           PawnStat;                                                // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AKJ[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O396[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PawnStatEntriesArray
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	struct FPawnStatEntriesArray : public FFastArraySerializer
	{
	public:
		TArray<struct FPawnStatEntry>                              Items;                                                   // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UPawnStatsComponent*                                 Owner;                                                   // 0x0118(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PerkUsage
	 * Size -> 0x0018
	 */
	struct FPerkUsage
	{
	public:
		class UPerkAsset*                                          Perk;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UsedCount;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HAH4[0xC];                                   // 0x000C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PickaxeMeshInstance
	 * Size -> 0x0010
	 */
	struct FPickaxeMeshInstance
	{
	public:
		class UMeshComponent*                                      FP_Mesh;                                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshComponent*                                      TP_Mesh;                                                 // 0x0008(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DefaultPickaxeParts
	 * Size -> 0x0050
	 */
	struct FDefaultPickaxeParts
	{
	public:
		TMap<EPickaxePartLocation, class UPickaxePart*>            Parts;                                                   // 0x0000(0x0050) Edit, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.PillarSegment
	 * Size -> 0x0008
	 */
	struct FPillarSegment
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightOffset;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PlacementObstruction
	 * Size -> 0x0010
	 */
	struct FPlacementObstruction
	{
	public:
		float                                                      range;                                                   // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0004(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DropInfo
	 * Size -> 0x001C
	 */
	struct FDropInfo
	{
	public:
		struct FVector                                             From;                                                    // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             To;                                                      // 0x000C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasLanded;                                               // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQ4Z[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DownCameraSettings
	 * Size -> 0x0018
	 */
	struct FDownCameraSettings
	{
	public:
		TWeakObjectPtr<class APlayerCharacter>                     Target;                                                  // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetIndex;                                             // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPitch;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxPitch;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SmoothSpeed;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.HoldButton
	 * Size -> 0x0028
	 */
	struct FHoldButton
	{
	public:
		class FText                                                HoldingText;                                             // 0x0000(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		float                                                      HoldStartTime;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HoldDuration;                                            // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L1H2[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.AnalogAimSettings
	 * Size -> 0x0048
	 */
	struct FAnalogAimSettings
	{
	public:
		unsigned char                                              UnknownData_9STO[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           AimRate;                                                 // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         SensitivityCurve;                                        // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LookAtStickyness;                                        // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StickynessRecoverySpeed;                                 // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StickynessMaxSensitivity;                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           ThirdPersonLookRate;                                     // 0x003C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AZBJ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CameraSpringSettings
	 * Size -> 0x003C
	 */
	struct FCameraSpringSettings
	{
	public:
		bool                                                       SpringEnabled;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6X3Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StepThreshold;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           SpringExtend;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RetractStrength;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RetractDownReduction;                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowDebug;                                               // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3JV[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastSpeedZ;                                              // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastLocation;                                            // 0x0020(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartSpringLocation;                                     // 0x002C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpringInitialized;                                      // 0x0038(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZ7R[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.HealthRegenerationParams
	 * Size -> 0x0010
	 */
	struct FHealthRegenerationParams
	{
	public:
		bool                                                       bIsRegenerating;                                         // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3R7Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayAfterDamage;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthPerSecond;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetHealthRatio;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PlayerSphere
	 * Size -> 0x0020
	 */
	struct FPlayerSphere
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<TWeakObjectPtr<class APawn>>                        Players;                                                 // 0x0010(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ProximityTriggerItem
	 * Size -> 0x0028
	 */
	struct FProximityTriggerItem
	{
	public:
		unsigned char                                              UnknownData_WECC[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      Callback;                                                // 0x0018(0x0010) ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PlayerProgress
	 * Size -> 0x0008
	 */
	struct FPlayerProgress
	{
	public:
		int32_t                                                    PlayerRank;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PlayerStars;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.CharacterProgress
	 * Size -> 0x0020
	 */
	struct FCharacterProgress
	{
	public:
		class UPlayerCharacterID*                                  characterID;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Progress;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentXP;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NextLevelXP;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimesRetired;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RNE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.EndMissionResult
	 * Size -> 0x0060
	 */
	struct FEndMissionResult
	{
	public:
		struct FPlayerProgress                                     PreviousPlayerProgress;                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FPlayerProgress                                     PlayerProgress;                                          // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterProgress                                  PreviousCharacterProgress;                               // 0x0010(0x0020) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterProgress                                  CharacterProgress;                                       // 0x0030(0x0020) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class USchematic*                                          RewardedSchematic;                                       // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReadyForUse;                                            // 0x0058(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_URQ8[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DeepDiveTesterItem
	 * Size -> 0x0030
	 */
	struct FDeepDiveTesterItem
	{
	public:
		class UMissionComplexity*                                  Complexity;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionDuration*                                    Duration;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionTemplate*                                    mission;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DeepDiveObjective;                                       // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionMutator*                                     Mutator;                                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionWarning*                                     Warning;                                                 // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PostProcessingBlendable
	 * Size -> 0x0020
	 */
	struct FPostProcessingBlendable
	{
	public:
		unsigned char                                              Blendable[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_HQIW[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CarvedResource
	 * Size -> 0x0028
	 */
	struct FCarvedResource
	{
	public:
		class UCarvedResourceCreator*                              ResourceCreator;                                         // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PredeterminedRooms;                                      // 0x0008(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    Amount;                                                  // 0x0018(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Overflow;                                                // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F8JI[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.GemResourceAmount
	 * Size -> 0x0010
	 */
	struct FGemResourceAmount
	{
	public:
		class UGemResourceCreator*                                 GemCreator;                                              // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S6MH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CollectableSpawnableItem
	 * Size -> 0x0010
	 */
	struct FCollectableSpawnableItem
	{
	public:
		class UCollectableResourceData*                            Resource;                                                // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6I3W[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.RoomNodeBase
	 * Size -> 0x0000
	 */
	struct FRoomNodeBase
	{	};

	/**
	 * ScriptStruct FSD.RoomEntrance
	 * Size -> 0x0020
	 */
	struct FRoomEntrance
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBLocked;                                               // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECaveEntranceType                                          EntranceType;                                            // 0x0019(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECaveEntrancePriority                                      Priority;                                                // 0x001A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CBJ[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PathObstacleID;                                          // 0x001C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RoomLinePoint
	 * Size -> 0x0030
	 */
	struct FRoomLinePoint
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HRange;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VRange;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CielingNoiseRange;                                       // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallNoiseRange;                                          // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloorNoiseRange;                                         // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cielingheight;                                           // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightScale;                                             // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloorDepth;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloorAngle;                                              // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RoomLine
	 * Size -> 0x0040
	 */
	struct FRoomLine
	{
	public:
		class UFloodFillSettings*                                  WallNoiseOverride;                                       // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloodFillSettings*                                  CeilingNoiseOverride;                                    // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloodFillSettings*                                  FloorNoiseOverride;                                      // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseDetailNoise;                                          // 0x0018(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQSX[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRoomLinePoint>                              Points;                                                  // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     RightVectors;                                            // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.WeightedLinePoint
	 * Size -> 0x001C
	 */
	struct FWeightedLinePoint
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      range;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoiseRange;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkewFactor;                                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FillAmount;                                              // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.Pillar
	 * Size -> 0x0020
	 */
	struct FPillar
	{
	public:
		class UFloodFillSettings*                                  NoiseOverride;                                           // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWeightedLinePoint>                          Points;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		float                                                      NoiseScale;                                              // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndcapScale;                                             // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.Rotator_NoQuantize
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FRotator_NoQuantize : public FRotator
	{	};

	/**
	 * ScriptStruct FSD.RoomBox
	 * Size -> 0x0030
	 */
	struct FRoomBox
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator_NoQuantize                                 Rotation;                                                // 0x000C(0x000C) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Extends;                                                 // 0x0018(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoiseRange;                                              // 0x0024(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFloodFillSettings*                                  Noise;                                                   // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ResourceLocation
	 * Size -> 0x0020
	 */
	struct FResourceLocation
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDSR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UResourceData*                                       Resource;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseAmount;                                              // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZW96[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.RoomItem
	 * Size -> 0x0020
	 */
	struct FRoomItem
	{
	public:
		class UClass*                                              Spawnable;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator_NoQuantize                                 Rotation;                                                // 0x0014(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TriggerItem
	 * Size -> 0x0050
	 */
	struct FTriggerItem
	{
	public:
		class UClass*                                              TriggerClass;                                            // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_43N4[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                Message;                                                 // 0x0040(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3Q1[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.GeneratedRoom
	 * Size -> 0x0088
	 */
	struct FGeneratedRoom
	{
	public:
		class UTerrainMaterial*                                    Material;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRoomLine>                                   Lines;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FPillar>                                     Pillars;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FRoomBox>                                    BoxCarvers;                                              // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FRoomBox>                                    BoxFillers;                                              // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FResourceLocation>                           ResourceLocations;                                       // 0x0048(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FRoomEntrance>                               Entrances;                                               // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FRoomItem>                                   RoomItems;                                               // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FTriggerItem>                                TriggerItems;                                            // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RoomGeneratorItem
	 * Size -> 0x0018
	 */
	struct FRoomGeneratorItem
	{
	public:
		class URoomGeneratorBase*                                  RoomGenerator;                                           // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0008(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rotation;                                                // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RoomNode
	 * Size -> 0x00E0
	 */
	struct FRoomNode : public FRoomNodeBase
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CarvePass;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0008(0x000C) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            EntranceIDs;                                             // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ExitIDs;                                                 // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FRoomEntrance>                               RoomEntrances;                                           // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       CanHaveEnemies;                                          // 0x0048(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TWZG[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGeneratedRoom>                              Rooms;                                                   // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		float                                                      ResourceMultiplier;                                      // 0x0060(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBeUsedForRoomBasedDistribution;                       // 0x0064(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPT5[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeightedResourceAmount;                                  // 0x0068(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LSAM[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRoomGeneratorItem>                          RoomGenerators;                                          // 0x0070(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T43J[0x60];                                  // 0x0080(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.TunnelPath
	 * Size -> 0x0010
	 */
	struct FTunnelPath
	{
	public:
		TArray<struct FVector>                                     Path;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TunnelNode
	 * Size -> 0x00D8
	 */
	struct FTunnelNode : public FRoomNodeBase
	{
	public:
		int32_t                                                    EntranceRoomID;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExitRoomID;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRoomEntrance                                       Entrance;                                                // 0x0008(0x0020) Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FRoomEntrance                                       Exit;                                                    // 0x0028(0x0020) Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic
		class UTunnelParameters*                                   ParametersOverride;                                      // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTunnelPath                                         Path;                                                    // 0x0050(0x0010) Edit, BlueprintVisible, Transient, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DirtStartLocation;                                       // 0x0064(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AddDirt;                                                 // 0x0070(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAIG[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeightedResourceAmount;                                  // 0x0074(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFHS[0x60];                                  // 0x0078(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CaveInfluence
	 * Size -> 0x0010
	 */
	struct FCaveInfluence
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      range;                                                   // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GeneratedInfluenceSet
	 * Size -> 0x0020
	 */
	struct FGeneratedInfluenceSet
	{
	public:
		class UObject*                                             CaveInfluencer;                                          // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NetworkID;                                               // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQUS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCaveInfluence>                              CaveInfluences;                                          // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GeneratedInfluenceSets
	 * Size -> 0x0018
	 */
	struct FGeneratedInfluenceSets
	{
	public:
		TArray<struct FGeneratedInfluenceSet>                      InfluenceSets;                                           // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       IsValid;                                                 // 0x0010(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78BB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.LevelGenerationCarver
	 * Size -> 0x0080
	 */
	struct FLevelGenerationCarver
	{
	public:
		struct FMatrixWithExactSync                                Transform;                                               // 0x0000(0x0040) NoDestructor, NativeAccessSpecifierPublic
		class USTLMeshCarver*                                      MeshCarver;                                              // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         ConvexCarver;                                            // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshCarver*                                   StaticMeshCarver;                                        // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConvexExpensiveNoise;                                    // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6S7[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelGenerationCarverComponent*                     Componenet;                                              // 0x0060(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarveOptionsCellSize                                      CarveCellSize;                                           // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3390[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTerrainMaterial*                                    TerrainMaterial;                                         // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarveFilterType                                           Filter;                                                  // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ToBeDiscarded;                                           // 0x0079(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_141D[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.LevelGenerationCarverLists
	 * Size -> 0x0010
	 */
	struct FLevelGenerationCarverLists
	{
	public:
		TArray<struct FLevelGenerationCarver>                      Carvers;                                                 // 0x0000(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.LevelCarverPass
	 * Size -> 0x0018
	 */
	struct FLevelCarverPass
	{
	public:
		TArray<struct FLevelGenerationCarverLists>                 Lists;                                                   // 0x0000(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XUY2[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.GeneratedInstantCarvers
	 * Size -> 0x0010
	 */
	struct FGeneratedInstantCarvers
	{
	public:
		TArray<struct FLevelCarverPass>                            LevelCarverPasses;                                       // 0x0000(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct FSD.GeneratedDebris
	 * Size -> 0x0058
	 */
	struct FGeneratedDebris
	{
	public:
		TMap<class UDebrisBase*, class UObject*>                   Debris;                                                  // 0x0000(0x0050) Transient, NativeAccessSpecifierPublic
		bool                                                       IsValid;                                                 // 0x0050(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DF2X[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CaveInfluenceSet
	 * Size -> 0x0010
	 */
	struct FCaveInfluenceSet
	{
	public:
		TArray<struct FCaveInfluence>                              CaveInfluences;                                          // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.InfluenceMap
	 * Size -> 0x0050
	 */
	struct FInfluenceMap
	{
	public:
		TMap<class UObject*, struct FCaveInfluenceSet>             CaveInfluences;                                          // 0x0000(0x0050) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.VeinResource
	 * Size -> 0x0030
	 */
	struct FVeinResource
	{
	public:
		class UVeinResourceCreator*                                ResourceCreator;                                         // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VeinLengthToGenerate;                                    // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDTI[0x24];                                  // 0x000C(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ProfileEntry
	 * Size -> 0x0020
	 */
	struct FProfileEntry
	{
	public:
		TWeakObjectPtr<class UObject>                              Context;                                                 // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Category;                                                // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSpent;                                               // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GM9F[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PropHuntContestantState
	 * Size -> 0x0018
	 */
	struct FPropHuntContestantState
	{
	public:
		EPropHuntRole                                              Role;                                                    // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ITW2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           DisguiseSize;                                            // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APlayerCharacter>                     PlayerCharacter;                                         // 0x000C(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Lives;                                                   // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PropHuntManagerState
	 * Size -> 0x0008
	 */
	struct FPropHuntManagerState
	{
	public:
		int32_t                                                    ActiveProps;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActiveHunters;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PropHuntSettingsShouts
	 * Size -> 0x0030
	 */
	struct FPropHuntSettingsShouts
	{
	public:
		class UDialogDataAsset*                                    DrinkHunter;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    DrinkProp;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    PropHit_AsProp;                                          // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    PropHit_AsHunter;                                        // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Attention_Prop;                                          // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogDataAsset*                                    Attention_Hunter;                                        // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RagdollItem
	 * Size -> 0x0028
	 */
	struct FRagdollItem
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInstanceDynamic*>                    Materials;                                               // 0x0008(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            DropshadowMaterial;                                      // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45XJ[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SentryGunMuzzleSetup
	 * Size -> 0x0010
	 */
	struct FSentryGunMuzzleSetup
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        FireMontage;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TutorialHint
	 * Size -> 0x0070
	 */
	struct FTutorialHint
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                TaskText;                                                // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0030(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              Image[0x28];                                             // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct FSD.PendingRewardsStats
	 * Size -> 0x00B0
	 */
	struct FPendingRewardsStats
	{
	public:
		TMap<class UResourceData*, float>                          AllResources;                                            // 0x0000(0x0050) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		TMap<class UResourceData*, float>                          CollectedResources;                                      // 0x0050(0x0050) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		bool                                                       PrimaryObjectiveCompleted;                               // 0x00A0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SecondaryObjectiveCompleted;                             // 0x00A1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HOLK[0x2];                                   // 0x00A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimePlayed;                                              // 0x00A4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnemiesKilled;                                           // 0x00A8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1356[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CreditsReward
	 * Size -> 0x0020
	 */
	struct FCreditsReward
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Amount;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSHC[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.XPReward
	 * Size -> 0x0020
	 */
	struct FXPReward
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    XP;                                                      // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04HZ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PendingRewards
	 * Size -> 0x0190
	 */
	struct FPendingRewards
	{
	public:
		struct FPendingRewardsStats                                StartStats;                                              // 0x0000(0x00B0) Transient, NativeAccessSpecifierPublic
		struct FPendingRewardsStats                                EndStats;                                                // 0x00B0(0x00B0) Transient, NativeAccessSpecifierPublic
		TArray<struct FCreditsReward>                              CreditsRewardEntries;                                    // 0x0160(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    CreditsReward;                                           // 0x0170(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B87W[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FXPReward>                                   XPRewardEntries;                                         // 0x0178(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    XPReward;                                                // 0x0188(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasData;                                                // 0x018C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRecording;                                            // 0x018D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasRewarded;                                            // 0x018E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I6N2[0x1];                                   // 0x018F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.TextStyleOverride
	 * Size -> 0x0098
	 */
	struct FTextStyleOverride
	{
	public:
		bool                                                       bOverrideFont;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HAYL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0058) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideColor;                                          // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_53Y4[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         Color;                                                   // 0x0068(0x0028) Edit, NativeAccessSpecifierPublic
		bool                                                       bOverrideSize;                                           // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPSY[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SizeScale;                                               // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RandLinePoint
	 * Size -> 0x002C
	 */
	struct FRandLinePoint
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRandRange                                          range;                                                   // 0x000C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRandRange                                          NoiseRange;                                              // 0x0014(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRandRange                                          SkewFactor;                                              // 0x001C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRandRange                                          FillAmount;                                              // 0x0024(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SaveGameStatePerkItem
	 * Size -> 0x0010
	 */
	struct FSaveGameStatePerkItem
	{
	public:
		unsigned char                                              Rank;                                                    // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28GT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPerkAsset*                                          Perk;                                                    // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ActiveCampaingMission
	 * Size -> 0x000C
	 */
	struct FActiveCampaingMission
	{
	public:
		bool                                                       HasMission;                                              // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WPFY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GlobalSeed;                                              // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MissionSeed;                                             // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SchematicType
	 * Size -> 0x0070
	 */
	struct FSchematicType
	{
	public:
		unsigned char                                              Icon[0x28];                                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FLinearColor                                        IconTint;                                                // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Frame[0x28];                                             // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FLinearColor                                        FrameTint;                                               // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SeasonLevel
	 * Size -> 0x0010
	 */
	struct FSeasonLevel
	{
	public:
		class UReward*                                             Reward;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReward*                                             specialReward;                                           // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.UnassignedReward
	 * Size -> 0x0010
	 */
	struct FUnassignedReward
	{
	public:
		class UReward*                                             Reward;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VS16[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SeasonalEventEntry
	 * Size -> 0x0030
	 */
	struct FSeasonalEventEntry
	{
	public:
		class USpecialEvent*                                       SpecialEvent;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMissionTemplate*>                            BannedMissions;                                          // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMutator*>                                    BannedMutators;                                          // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    RequiredMainCampaignProgress;                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GMC[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SeasonalEventEntryChance
	 * Size -> 0x0030
	 */
	struct FSeasonalEventEntryChance
	{
	public:
		class USpecialEvent*                                       SpecialEvent;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnChance;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVHB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMissionTemplate*>                            BannedMissions;                                          // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMutator*>                                    BannedMutators;                                          // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TrackedStatInfo
	 * Size -> 0x0050
	 */
	struct FTrackedStatInfo
	{
	public:
		class UMissionStat*                                        Stat;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              Image[0x28];                                             // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UDataAsset*                                          assetReference;                                          // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ChallengeVariation
	 * Size -> 0x000C
	 */
	struct FChallengeVariation
	{
	public:
		int32_t                                                    NumberOfWins;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XPCompleteGain;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TokenGain;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ChallengeInfo
	 * Size -> 0x00A0
	 */
	struct FChallengeInfo
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          IconOutlined;                                            // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentWins;                                             // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfWins;                                            // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XPCompleteGain;                                          // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TokenGain;                                               // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Stat1Image[0x28];                                        // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Stat2Image[0x28];                                        // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bIsSpecial;                                              // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GA5L[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SeasonEvent
	 * Size -> 0x0020
	 */
	struct FSeasonEvent
	{
	public:
		class USeasonEventData*                                    Event;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q6W7[0x14];                                  // 0x000C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SeasonMissionResult
	 * Size -> 0x0048
	 */
	struct FSeasonMissionResult
	{
	public:
		int32_t                                                    XPFromMission;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XPFromChallenges;                                        // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XPFromRewards;                                           // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XPMultiplier;                                            // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TokenGain;                                               // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LevelIncreased;                                          // 0x0014(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SQM[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FChallengeInfo>                              UpdatedChallenges;                                       // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSeasonEvent>                                CompletedEvents;                                         // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UTexture2D*                                          EndScreenImage;                                          // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          EndScreenResourceIcon;                                   // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SoundMixManagerItem
	 * Size -> 0x0010
	 */
	struct FSoundMixManagerItem
	{
	public:
		class USoundMix*                                           mix;                                                     // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IT4S[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DrinkableBarSlot
	 * Size -> 0x0014
	 */
	struct FDrinkableBarSlot
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class ADrinkableActor>                      DrinkableActor;                                          // 0x000C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.HolidayMeshItems
	 * Size -> 0x0010
	 */
	struct FHolidayMeshItems
	{
	public:
		TArray<class USkeletalMeshComponent*>                      HolidayMeshComponents;                                   // 0x0000(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CablePathSettings
	 * Size -> 0x0010
	 */
	struct FCablePathSettings
	{
	public:
		EDeepPathFinderType                                        PathType;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDeepPathFinderSize                                        PathSize;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDeepPathFinderPreference                                  PathPreference;                                          // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GPPY[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinStepSize;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxStepSize;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxNoiseY;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SplineTrailMaterial
	 * Size -> 0x0038
	 */
	struct FSplineTrailMaterial
	{
	public:
		unsigned char                                              Material[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                slotName;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotIndex;                                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WIDZ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ActiveStatusEffect
	 * Size -> 0x0008
	 */
	struct FActiveStatusEffect
	{
	public:
		TWeakObjectPtr<class AActor>                               Owner;                                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ActiveStatusEffectBank
	 * Size -> 0x0048
	 */
	struct FActiveStatusEffectBank
	{
	public:
		class UStatusEffect*                                       Key;                                                     // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStatusEffect*                                       ActiveEffect;                                            // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOTN[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActiveStatusEffect>                         Effects;                                                 // 0x0038(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TentacleAnimInstanceProxy
	 * Size -> 0x0100 (FullSize[0x0870] - InheritedSize[0x0770])
	 */
	struct FTentacleAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_Q30H[0x100];                                 // 0x0770(0x0100) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.TerminatorShoutState
	 * Size -> 0x0028
	 */
	struct FTerminatorShoutState
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoundCue*>                                   Shouts;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       Loop;                                                    // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YA9T[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxRandomShoutDelay;                                     // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRandomShoutDelay;                                     // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Interruptable;                                           // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PreventSubsequentDuplicate;                              // 0x0025(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVK5[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.TerminatorTalkMaterial
	 * Size -> 0x0010
	 */
	struct FTerminatorTalkMaterial
	{
	public:
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BasePower;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmplitudeMultiplier;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TerminatorTarget
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FTerminatorTarget : public FTentacleTarget
	{
	public:
		TWeakObjectPtr<class AActor>                               TargetActor;                                             // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TerrainPlacementBox
	 * Size -> 0x001C
	 */
	struct FTerrainPlacementBox
	{
	public:
		struct FVector                                             Min;                                                     // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Max;                                                     // 0x000C(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETerrainPlacementBoxType                                   PlacementType;                                           // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QMU7[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DebrisCapsule
	 * Size -> 0x0020
	 */
	struct FDebrisCapsule
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Start;                                                   // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             End;                                                     // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TextCounterEntry
	 * Size -> 0x0028
	 */
	struct FTextCounterEntry
	{
	public:
		class UTextBlock*                                          TextBlock;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Format;                                                  // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2WXT[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PipelineMovementData
	 * Size -> 0x001C
	 */
	struct FPipelineMovementData
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UpToSpeed;                                               // 0x000C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8OQ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Acceleration;                                            // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APipelineSegment>                     PipelineSegment;                                         // 0x0014(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SpecialChanceEventItem
	 * Size -> 0x0010
	 */
	struct FSpecialChanceEventItem
	{
	public:
		class USpecialEvent*                                       Event;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseChance;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanSpawnInDeepDive;                                      // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80SO[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.VanityNode
	 * Size -> 0x0030
	 */
	struct FVanityNode
	{
	public:
		class UReward*                                             Reward;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NodeID;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RQ0B[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ConnectedNodes;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsBig;                                                  // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsStartingNode;                                         // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E61H[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Position;                                                // 0x0024(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6R4[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.TunnelSettingItem
	 * Size -> 0x0010
	 */
	struct FTunnelSettingItem
	{
	public:
		class UTunnelSegmentSetting*                               SegmentSetting;                                          // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInt32Interval                                      SegmentSize;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.HeightenedSenseTracker
	 * Size -> 0x0020
	 */
	struct FHeightenedSenseTracker
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UHealthComponentBase>                 HealthComponent;                                         // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AttackingPoint[0x10];                                    // 0x0010(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	};

	/**
	 * ScriptStruct FSD.UpgradeTier
	 * Size -> 0x0018
	 */
	struct FUpgradeTier
	{
	public:
		TArray<class UItemUpgrade*>                                upgrades;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    RequiredCharacterLevel;                                  // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredPlayerRank;                                      // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.MasteryItem
	 * Size -> 0x0018
	 */
	struct FMasteryItem
	{
	public:
		int32_t                                                    NeededMastery;                                           // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQSS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUnlockReward*>                               Unlocks;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.UpgradeCostItem
	 * Size -> 0x0010
	 */
	struct FUpgradeCostItem
	{
	public:
		TArray<int32_t>                                            Amounts;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.MovementModeCombo
	 * Size -> 0x0002
	 */
	struct FMovementModeCombo
	{
	public:
		EMovementMode                                              Mode;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovementCustomMode                                        CustomMode;                                              // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.VanityAnimEffect
	 * Size -> 0x0018
	 */
	struct FVanityAnimEffect
	{
	public:
		class UNiagaraSystem*                                      Effect;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachSocket;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartDelay;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ACY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.VanityTestCharacterItem
	 * Size -> 0x0010
	 */
	struct FVanityTestCharacterItem
	{
	public:
		class USkeletalMesh*                                       Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              AnimBP;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.VanityEventSource
	 * Size -> 0x0020
	 */
	struct FVanityEventSource
	{
	public:
		class FText                                                EventName;                                               // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          EventIcon;                                               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SchematicBankItem
	 * Size -> 0x0020
	 */
	struct FSchematicBankItem
	{
	public:
		class USchematicPricingTier*                               PricingTier;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USchematicRarity*                                    Rarity;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USchematic*>                                  Schematics;                                              // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.VanityMasterySettings
	 * Size -> 0x0014
	 */
	struct FVanityMasterySettings
	{
	public:
		int32_t                                                    TotalMasteryLevels;                                      // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XP_RequiredPerLevel;                                     // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XP_ForCreditSpent;                                       // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XP_ForMineralSpent;                                      // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FashionitesLevelUpReward;                                // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.VanitySlotStore
	 * Size -> 0x0010
	 */
	struct FVanitySlotStore
	{
	public:
		TArray<class UVanityItem*>                                 VanityItems;                                             // 0x0000(0x0010) Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.VanitySlotCharacter
	 * Size -> 0x0050
	 */
	struct FVanitySlotCharacter
	{
	public:
		TMap<class UPlayerCharacterID*, struct FVanitySlotStore>   Characters;                                              // 0x0000(0x0050) Edit, Transient, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FakeSawMover
	 * Size -> 0x0070
	 */
	struct FFakeSawMover
	{
	public:
		struct FVector                                             PrevPos;                                                 // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NextPos;                                                 // 0x000C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0018(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5N6[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlane                                              Plane;                                                   // 0x0030(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         VelOverTime;                                             // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedCof;                                                // 0x0048(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickRate;                                                // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickTime;                                                // 0x0050(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedTime;                                         // 0x0054(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalTime;                                               // 0x0058(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Moving;                                                  // 0x005C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXL2[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GravityTimer;                                            // 0x0060(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_58IF[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SawFakeMoveState
	 * Size -> 0x0004 (FullSize[0x0028] - InheritedSize[0x0024])
	 */
	struct FSawFakeMoveState : public FFakeMoveState
	{
	public:
		float                                                      GravityTimer;                                            // 0x0024(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.WeakpointChannel
	 * Size -> 0x0030
	 */
	struct FWeakpointChannel
	{
	public:
		unsigned char                                              UnknownData_BBFF[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFSDPhysicalMaterial*                                WeakPointMaterial;                                       // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BoneIndex;                                               // 0x0018(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AXHF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            Mid;                                                     // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5AYC[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.BumpPlayerHit
	 * Size -> 0x0018
	 */
	struct FBumpPlayerHit
	{
	public:
		struct FVector_NetQuantize                                 force;                                                   // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RHF6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerCharacter*                                    Player;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ZipLineConnectorHandler
	 * Size -> 0x0030
	 */
	struct FZipLineConnectorHandler
	{
	public:
		unsigned char                                              ConnectorClass[0x28];                                    // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class AZipLineConnector*                                   Connector;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct FSD.ZipLine
	 * Size -> 0x0038
	 */
	struct FZipLine
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             End;                                                     // 0x000C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A3C3[0x20];                                  // 0x0018(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.LaserPointerTarget
	 * Size -> 0x00B0
	 */
	struct FLaserPointerTarget
	{
	public:
		struct FHitResult                                          HitInfo;                                                 // 0x0000(0x0088) IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWIY[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Target;                                                  // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ExtraTarget;                                             // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADF5[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.EnhancedTrace
	 * Size -> 0x0034
	 */
	struct FEnhancedTrace
	{
	public:
		TWeakObjectPtr<class UHitscanBaseComponent>                Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APlayerCharacter>                     Instigator;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Origin;                                                  // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitPoint;                                                // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DamageDataBase
	 * Size -> 0x0030
	 */
	struct FDamageDataBase
	{
	public:
		class UFSDPhysicalMaterial*                                PhysMaterial;                                            // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPrimitiveComponent>                  Component;                                               // 0x0008(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BoneIndex;                                               // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageImpulse*                                      DamageImpulseOverride;                                   // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsRadial;                                                // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1K4G[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DamageData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FDamageData : public FDamageDataBase
	{
	public:
		class UDamageClass*                                        DamageClass;                                             // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AController>                          Instigator;                                              // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               DamageCauser;                                            // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageModifier;                                          // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmorPenetration;                                        // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CharacterViewInfo
	 * Size -> 0x0038
	 */
	struct FCharacterViewInfo
	{
	public:
		class UClass*                                              CharacterClass;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEquippedVanity                                     EquippedVanity;                                          // 0x0008(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       SurvivedInPod;                                           // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QI13[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVictoryPose*                                        VictoryPose;                                             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CharacterViewScene
	 * Size -> 0x0018
	 */
	struct FCharacterViewScene
	{
	public:
		TArray<struct FCharacterViewInfo>                          Characters;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       MissionSuccess;                                          // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJOB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.NetworkConnectionInfo
	 * Size -> 0x0020
	 */
	struct FNetworkConnectionInfo
	{
	public:
		class AFSDPlayerController*                                PlayerController;                                        // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PacketLossIn;                                            // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PacketLossOut;                                           // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ping;                                                    // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Jitter;                                                  // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValid;                                                 // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBEX[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.FSDChatMessage
	 * Size -> 0x0060
	 */
	struct FFSDChatMessage
	{
	public:
		unsigned char                                              UnknownData_PNPI[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EChatMessageType                                           MsgType;                                                 // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3WV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Sender;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChatSenderType                                            SenderType;                                              // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YQRK[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Msg;                                                     // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUniqueNetIdRepl                                    SenderNetID;                                             // 0x0038(0x0028) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.VanityMasteryResult
	 * Size -> 0x0024
	 */
	struct FVanityMasteryResult
	{
	public:
		struct FVanityMasterySave                                  Previous;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FVanityMasterySave                                  Current;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    FashionitesRewarded;                                     // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.BackendNotificationEvent
	 * Size -> 0x0040
	 */
	struct FBackendNotificationEvent
	{
	public:
		class FString                                              MessageType;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Header;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Link;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.UpgradeValues
	 * Size -> 0x001C
	 */
	struct FUpgradeValues
	{
	public:
		float                                                      BaseValue;                                               // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpgradedValue;                                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpgradedPercentageValue;                                 // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OldUpgradedValue;                                        // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OldUpgradedPercentageValue;                              // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentValue;                                            // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUpgradeCalucationType                                     CalculationType;                                         // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemPreviewStatus                                         PreviewStatus;                                           // 0x0019(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZZ9[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CraftingCost
	 * Size -> 0x0010
	 */
	struct FCraftingCost
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Amount;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9C86[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ObjectiveMissionIcon
	 * Size -> 0x0018
	 */
	struct FObjectiveMissionIcon
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Tint;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.YesNoPromptSettings
	 * Size -> 0x0040
	 */
	struct FYesNoPromptSettings
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ZOrder;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_10EV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Message;                                                 // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.BulletPathSegment
	 * Size -> 0x001C
	 */
	struct FBulletPathSegment
	{
	public:
		unsigned char                                              UnknownData_BNZN[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.LockCounter
	 * Size -> 0x000C
	 */
	struct FLockCounter
	{
	public:
		int32_t                                                    LockCount;                                               // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               LockedActor;                                             // 0x0004(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DiscordServerData
	 * Size -> 0x0008
	 */
	struct FDiscordServerData
	{
	public:
		int32_t                                                    presenceCount;                                           // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    memberCount;                                             // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SizeBoxSettings
	 * Size -> 0x0020
	 */
	struct FSizeBoxSettings
	{
	public:
		float                                                      WidthOverride;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightOverride;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredWidth;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredHeight;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDesiredWidth;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDesiredHeight;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAspectRatio;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAspectRatio;                                          // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.WidgetAnimationSettings
	 * Size -> 0x0008
	 */
	struct FWidgetAnimationSettings
	{
	public:
		float                                                      PlaybackSpeed;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUMGSequencePlayMode                                       PlayMode;                                                // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRestoreState;                                           // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TUWJ[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PushPoint
	 * Size -> 0x0010
	 */
	struct FPushPoint
	{
	public:
		class USphereComponent*                                    collider;                                                // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerCharacter*                                    Character;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CustomUsable
	 * Size -> 0x0010
	 */
	struct FCustomUsable
	{
	public:
		class UUsableComponentBase*                                Usable;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECustomUsableType                                          TerminationType;                                         // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1N0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CloudSaveRequest
	 * Size -> 0x0048
	 */
	struct FCloudSaveRequest
	{
	public:
		class FString                                              SteamTicket;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PSTicket;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerRank;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SaveToDiskCounter;                                       // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RawData;                                                 // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Branch;                                                  // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CloudLoadEntry
	 * Size -> 0x0020
	 */
	struct FCloudLoadEntry
	{
	public:
		class FString                                              RawData;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TimeUTC;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CloudLoadAllResponse
	 * Size -> 0x0010
	 */
	struct FCloudLoadAllResponse
	{
	public:
		TArray<struct FCloudLoadEntry>                             savegames;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CloudLoadRequest
	 * Size -> 0x0038
	 */
	struct FCloudLoadRequest
	{
	public:
		class FString                                              SteamTicket;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PSTicket;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Branch;                                                  // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Offset;                                                  // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXWT[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ExampleStruct
	 * Size -> 0x0004
	 */
	struct FExampleStruct
	{
	public:
		float                                                      Field;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CoilgunCoil
	 * Size -> 0x0008
	 */
	struct FCoilgunCoil
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CoilgunAfflictionEntry
	 * Size -> 0x0020
	 */
	struct FCoilgunAfflictionEntry
	{
	public:
		TArray<class UClass*>                                      PushedAfflictions;                                       // 0x0000(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic
		class UStatusEffectsComponent*                             Target;                                                  // 0x0010(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZLVR[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ShotMultiplier
	 * Size -> 0x000C
	 */
	struct FShotMultiplier
	{
	public:
		float                                                      Undercharge;                                             // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Overcharge;                                              // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TriBurst;                                                // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNDL[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CommunityRewardNotification
	 * Size -> 0x0040
	 */
	struct FCommunityRewardNotification
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        IconColor;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CommunityFactionResponse
	 * Size -> 0x0030
	 */
	struct FCommunityFactionResponse
	{
	public:
		TArray<class FString>                                      Goals;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Values;                                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Members;                                                 // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CommunityGoalStateResponse
	 * Size -> 0x0010
	 */
	struct FCommunityGoalStateResponse
	{
	public:
		bool                                                       isGoal;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isRecruitment;                                           // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FreeBeers;                                               // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJXA[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeLeftSeconds;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastUpdateGoalsID;                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentGoalPeriodID;                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CommunityGoalTierResponse
	 * Size -> 0x0028
	 */
	struct FCommunityGoalTierResponse
	{
	public:
		bool                                                       Found;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHCP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GoalID;                                                  // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FirstTierGoal;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondTierGoal;                                          // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThirdTierGoal;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZBT[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CommunityGoalIncrementResponse
	 * Size -> 0x0001
	 */
	struct FCommunityGoalIncrementResponse
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CommunityGoalTierDataRequest
	 * Size -> 0x0010
	 */
	struct FCommunityGoalTierDataRequest
	{
	public:
		class FString                                              GoalID;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CommunityGoalRequest
	 * Size -> 0x0038
	 */
	struct FCommunityGoalRequest
	{
	public:
		class FString                                              GoalID;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FactionID;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SteamTicket;                                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Branch;                                                  // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PricingTierEntry
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FPricingTierEntry : public FTableRowBase
	{
	public:
		struct FIRandRange                                         CreditCost;                                              // 0x0008(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FIRandRange                                         Material1;                                               // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FIRandRange                                         Material2;                                               // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FIRandRange                                         Material3;                                               // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DailyDeal
	 * Size -> 0x0018
	 */
	struct FDailyDeal
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDealType                                                  DealType;                                                // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7E13[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ResourceAmount;                                          // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Credits;                                                 // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChangePercent;                                           // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.CSGRaycastHitInfo
	 * Size -> 0x001C
	 */
	struct FCSGRaycastHitInfo
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x000C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Material;                                                // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TerrainLateJoinIteration
	 * Size -> 0x0034
	 */
	struct FTerrainLateJoinIteration
	{
	public:
		int32_t                                                    DrillsIndex;                                             // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeltsIndex;                                              // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PickAxeIndex;                                            // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FloatingIndex;                                           // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColliderCarvesIndex;                                     // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeshCarvesIndex;                                         // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplosionsIndex;                                         // 0x0018(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SplineIndex;                                             // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CSGIndex;                                                // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnDebrisIndex;                                        // 0x0024(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LateJoinIndex;                                           // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DebrisIndex;                                             // 0x002C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChunkVisibilityIndex;                                    // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DiscordFactionRoleRequest
	 * Size -> 0x0028
	 */
	struct FDiscordFactionRoleRequest
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FactionID;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A326[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SteamTicket;                                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DiscordUserInfoRequest
	 * Size -> 0x0010
	 */
	struct FDiscordUserInfoRequest
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.DiscordFSDRichPresence
	 * Size -> 0x0080
	 */
	struct FDiscordFSDRichPresence
	{
	public:
		class FString                                              State;                                                   // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              details;                                                 // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              matchSecret;                                             // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              joinSecret;                                              // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              partyId;                                                 // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              smallImageText;                                          // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LargeImageText;                                          // 0x0060(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    startTimestamp;                                          // 0x0070(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    partySize;                                               // 0x0074(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDiscordBiomeType                                          BiomeType;                                               // 0x0078(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDiscordMissionType                                        MissionType;                                             // 0x0079(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPureSolo;                                             // 0x007A(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NZW[0x5];                                   // 0x007B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DroneLightSetting
	 * Size -> 0x000C
	 */
	struct FDroneLightSetting
	{
	public:
		struct FColor                                              Color;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PlayerStatsAnalyticInfo
	 * Size -> 0x0010
	 */
	struct FPlayerStatsAnalyticInfo
	{
	public:
		unsigned char                                              UnknownData_D7FT[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SchematicAnalyticInfo
	 * Size -> 0x0020
	 */
	struct FSchematicAnalyticInfo
	{
	public:
		unsigned char                                              UnknownData_ABN3[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.CharacterLoadoutAnalyticInfo
	 * Size -> 0x0030
	 */
	struct FCharacterLoadoutAnalyticInfo
	{
	public:
		unsigned char                                              UnknownData_PBDD[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.WeaponAnalyticInfo
	 * Size -> 0x0060
	 */
	struct FWeaponAnalyticInfo
	{
	public:
		unsigned char                                              UnknownData_8E53[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.UserStatsAnalyticInfo
	 * Size -> 0x0030
	 */
	struct FUserStatsAnalyticInfo
	{
	public:
		unsigned char                                              UnknownData_JRTS[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.MissionAnalyticInfo
	 * Size -> 0x0098
	 */
	struct FMissionAnalyticInfo
	{
	public:
		unsigned char                                              UnknownData_HD38[0x98];                                  // 0x0000(0x0098) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.EnemyGroupDescriptorSpawnItem
	 * Size -> 0x0010
	 */
	struct FEnemyGroupDescriptorSpawnItem
	{
	public:
		class UEnemyDescriptor*                                    enemy;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N43M[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.EnemySpawnItem
	 * Size -> 0x0010
	 */
	struct FEnemySpawnItem
	{
	public:
		class UEnemyDescriptor*                                    enemy;                                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VeteranComposition;                                      // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.MUSTBEHERETOCOMPILE
	 * Size -> 0x0001
	 */
	struct FMUSTBEHERETOCOMPILE
	{
	public:
		unsigned char                                              UnknownData_F4GM[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.EscortMulePath
	 * Size -> 0x0018
	 */
	struct FEscortMulePath
	{
	public:
		TArray<struct FVector>                                     Path;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CQG[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.FSDDeepDiveResponse
	 * Size -> 0x0018
	 */
	struct FFSDDeepDiveResponse
	{
	public:
		uint32_t                                                   SeedV2;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJX5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ExpirationTime;                                          // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FSDWeeklySeedResponse
	 * Size -> 0x0018
	 */
	struct FFSDWeeklySeedResponse
	{
	public:
		uint32_t                                                   Seed;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_666Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ExpirationTime;                                          // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.BackendNotification
	 * Size -> 0x0050
	 */
	struct FBackendNotification
	{
	public:
		class FString                                              Platform;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Header;                                                  // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MessageType;                                             // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Link;                                                    // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FSDEventsResponse
	 * Size -> 0x0020
	 */
	struct FFSDEventsResponse
	{
	public:
		TArray<struct FBackendNotification>                        Notifications;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFSDEventWithEnd>                            ActiveEventsWithEnd;                                     // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FSDSeasonExpiryResponse
	 * Size -> 0x0030
	 */
	struct FFSDSeasonExpiryResponse
	{
	public:
		class FString                                              SeasonExpirationTimeSteam;                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SeasonExpirationTimeSony;                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SeasonExpirationTimeGDK;                                 // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SmartSpawnEntry
	 * Size -> 0x0018
	 */
	struct FSmartSpawnEntry
	{
	public:
		unsigned char                                              UnknownData_8YWT[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.FacilityGeneratorEnounter
	 * Size -> 0x0028
	 */
	struct FFacilityGeneratorEnounter
	{
	public:
		TArray<class UEnemyDescriptor*>                            Enemies;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Difficulty;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XVE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRandInterval                                       Diversity;                                               // 0x0018(0x0010) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ForgingResult
	 * Size -> 0x000C
	 */
	struct FForgingResult
	{
	public:
		bool                                                       LevelledUp;                                              // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K59S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RewardLevel;                                             // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RewardSeed;                                              // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.Formation
	 * Size -> 0x0020
	 */
	struct FFormation
	{
	public:
		unsigned char                                              UnknownData_ZR9A[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFormationData*                                      FormationData;                                           // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FormationID
	 * Size -> 0x0008
	 */
	struct FFormationID
	{
	public:
		unsigned char                                              UnknownData_NBPN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DelegateStruct
	 * Size -> 0x0001
	 */
	struct FDelegateStruct
	{
	public:
		unsigned char                                              UnknownData_LGIG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.FSDPlatformHelper
	 * Size -> 0x0001
	 */
	struct FFSDPlatformHelper
	{
	public:
		unsigned char                                              UnknownData_PB25[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.FSDServicesEndpoints
	 * Size -> 0x0100
	 */
	struct FFSDServicesEndpoints
	{
	public:
		unsigned char                                              UnknownData_AHJM[0x100];                                 // 0x0000(0x0100) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SplineHitResult
	 * Size -> 0x0098
	 */
	struct FSplineHitResult
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      SplineDistance;                                          // 0x0088(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SplineTangent;                                           // 0x008C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.Curve2DAppearance
	 * Size -> 0x0028
	 */
	struct FCurve2DAppearance
	{
	public:
		float                                                      Thickness;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Tint;                                                    // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutlineThickness;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        OutlineTint;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SplineSegment
	 * Size -> 0x0030
	 */
	struct FSplineSegment
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartTangent;                                            // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndLocation;                                             // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndTangent;                                              // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TesterName
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FTesterName : public FTableRowBase
	{
	public:
		class FString                                              SteamID;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SteamProfileName;                                        // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TipsTableRow
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FTipsTableRow : public FTableRowBase
	{
	public:
		class FText                                                Header;                                                  // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                InputText;                                               // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                InputTextControllerOverride;                             // 0x0050(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      TimeToDisplay;                                           // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I4TM[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.InputDisplay
	 * Size -> 0x0040
	 */
	struct FInputDisplay
	{
	public:
		EInputInteraction                                          Interaction;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1SZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                InputText;                                               // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLinearColor                                        TextTint;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IconTintable;                                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_95EM[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ItemSkinOwners
	 * Size -> 0x0010
	 */
	struct FItemSkinOwners
	{
	public:
		TArray<class UItemID*>                                     Items;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GearStatEntry
	 * Size -> 0x0068
	 */
	struct FGearStatEntry
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018) BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                Value;                                                   // 0x0018(0x0018) BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                BaseValue;                                               // 0x0030(0x0018) BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                UpgradeValue;                                            // 0x0048(0x0018) BlueprintVisible, Transient, NativeAccessSpecifierPublic
		EItemPreviewStatus                                         PreviewStatus;                                           // 0x0060(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFOY[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SpriteRect
	 * Size -> 0x0010
	 */
	struct FSpriteRect
	{
	public:
		float                                                      Left;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Right;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bottom;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.JettyBootsReplay
	 * Size -> 0x001C
	 */
	struct FJettyBootsReplay
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Position;                                                // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              State;                                                   // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GDM[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Lives;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.LoadoutCopy
	 * Size -> 0x0180
	 */
	struct FLoadoutCopy
	{
	public:
		struct FItemLoadout                                        ItemLoadout;                                             // 0x0000(0x0084) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4GUU[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUpgradeLoadout                                     UpgradeLoadout;                                          // 0x0088(0x0050) NativeAccessSpecifierPublic
		struct FCharacterPerksSave                                 PerkLoadout;                                             // 0x00D8(0x0010) NativeAccessSpecifierPublic
		struct FCharacterVanityLoadout                             VanityLoadout;                                           // 0x00E8(0x0098) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.LocalizedLanguageInfo
	 * Size -> 0x0038
	 */
	struct FLocalizedLanguageInfo
	{
	public:
		class FString                                              EnglishName;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NativeName;                                              // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CodeName;                                                // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CommunityTranslated;                                     // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6LU[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TranslatedPercent;                                       // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FSDLocalizedChatMessage
	 * Size -> 0x0048
	 */
	struct FFSDLocalizedChatMessage
	{
	public:
		unsigned char                                              UnknownData_PBT9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EChatMessageType                                           MsgType;                                                 // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZNW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Sender;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Msg;                                                     // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<class FText>                                        Arguments;                                               // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.MissionStepDescription
	 * Size -> 0x0038
	 */
	struct FMissionStepDescription
	{
	public:
		class FText                                                Headline;                                                // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                RichDescription;                                         // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UTexture2D*                                          Image;                                                   // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.MinersManualDescription
	 * Size -> 0x0040
	 */
	struct FMinersManualDescription
	{
	public:
		class FText                                                Headline;                                                // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                RichDescription;                                         // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UTexture2D*                                          ImageFront;                                              // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          ImageBackground;                                         // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PlanetZoneItem
	 * Size -> 0x0030
	 */
	struct FPlanetZoneItem
	{
	public:
		TArray<class UBiome*>                                      Biomes;                                                  // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UGeneratedMission*>                           missions;                                                // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class UPlanetZone*                                         Zone;                                                    // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasSpecialEvent;                                         // 0x0028(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WouldHaveSpecialEvent;                                   // 0x0029(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSIA[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PathCell
	 * Size -> 0x0010
	 */
	struct FPathCell
	{
	public:
		unsigned char                                              UnknownData_ND70[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.PathDebugNode
	 * Size -> 0x0020
	 */
	struct FPathDebugNode
	{
	public:
		unsigned char                                              UnknownData_SVQ9[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ShardStage
	 * Size -> 0x0010
	 */
	struct FShardStage
	{
	public:
		TArray<class UStaticMesh*>                                 Shards;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RejoinFloat
	 * Size -> 0x001C
	 */
	struct FRejoinFloat
	{
	public:
		struct FGuid                                               ItemKey;                                                 // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ValueKey;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RejoinInt
	 * Size -> 0x001C
	 */
	struct FRejoinInt
	{
	public:
		struct FGuid                                               ItemKey;                                                 // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ValueKey;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PostDataModel
	 * Size -> 0x0010
	 */
	struct FPostDataModel
	{
	public:
		unsigned char                                              UnknownData_IKGX[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DebrisVeinResource
	 * Size -> 0x0018
	 */
	struct FDebrisVeinResource
	{
	public:
		class UDebrisVeinComponent*                                Debris;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RC5C[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.TerrainPlacementDebugItem
	 * Size -> 0x0070
	 */
	struct FTerrainPlacementDebugItem
	{
	public:
		TArray<struct FTerrainPlacementBox>                        TerrainCheckers;                                         // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       BoxGood;                                                 // 0x0010(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CapsuleGood;                                             // 0x0011(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDebrisColliderType                                        CapsuleType;                                             // 0x0012(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHII[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDebrisCapsule                                      Capsule;                                                 // 0x0014(0x0020) Transient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XV7N[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0040(0x0030) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.GeneratedDebrisItem
	 * Size -> 0x0010
	 */
	struct FGeneratedDebrisItem
	{
	public:
		class UDebrisBase*                                         Debris;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Influencer;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.PLSResource
	 * Size -> 0x0010
	 */
	struct FPLSResource
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmountToGenerate;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6KG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.InfluenceSphere
	 * Size -> 0x0010
	 */
	struct FInfluenceSphere
	{
	public:
		class UCaveInfluencer*                                     Influencer;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EKVY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ProfileCategoryTiming
	 * Size -> 0x0018
	 */
	struct FProfileCategoryTiming
	{
	public:
		class FString                                              CategoryName;                                            // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CategoryTime;                                            // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQGU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.DormantComponentState
	 * Size -> 0x0018
	 */
	struct FDormantComponentState
	{
	public:
		TWeakObjectPtr<class UActorComponent>                      Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionEnabled                                          Collision;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UM1T[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CollisionProfileName;                                    // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Active : 1;                                              // 0x0014(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Visible : 1;                                             // 0x0014(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZWG[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ExposedProperty
	 * Size -> 0x0000
	 */
	struct FExposedProperty
	{	};

	/**
	 * ScriptStruct FSD.ExposedFloat
	 * Size -> 0x0028
	 */
	struct FExposedFloat : public FExposedProperty
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ExposableFloat
	 * Size -> 0x0028
	 */
	struct FExposableFloat
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Exposed;                                                 // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P84I[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RecoilImpulse
	 * Size -> 0x000C
	 */
	struct FRecoilImpulse
	{
	public:
		float                                                      Rotation;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Impulse;                                                 // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ScanPath
	 * Size -> 0x0018
	 */
	struct FScanPath
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             End;                                                     // 0x000C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ReflectiveHitscanHit
	 * Size -> 0x0038
	 */
	struct FReflectiveHitscanHit
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BoneIndex;                                               // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZJV[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BoneName;                                                // 0x000C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 HitLocation;                                             // 0x0014(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           ImpactNormal;                                            // 0x0020(0x000C) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NT7[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFSDPhysicalMaterial*                                PhysMat;                                                 // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ReflectionTraceResult
	 * Size -> 0x0048
	 */
	struct FReflectionTraceResult
	{
	public:
		TArray<struct FScanPath>                                   Path;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FReflectiveHitscanHit                               FinalHit;                                                // 0x0010(0x0038) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.ResourceInitalizer
	 * Size -> 0x0010
	 */
	struct FResourceInitalizer
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAmount;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I045[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.ResourcePouchItem
	 * Size -> 0x0010
	 */
	struct FResourcePouchItem
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KSBO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.RichTextToken
	 * Size -> 0x0020
	 */
	struct FRichTextToken
	{
	public:
		class FString                                              Tag;                                                     // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Text;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RichTextParseResult
	 * Size -> 0x0040
	 */
	struct FRichTextParseResult
	{
	public:
		class FText                                                SourceText;                                              // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              UnformattedString;                                       // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UnformattedLength;                                       // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDE7[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRichTextToken>                              Tokens;                                                  // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RoomGeneratorGroupInstance
	 * Size -> 0x0010
	 */
	struct FRoomGeneratorGroupInstance
	{
	public:
		TArray<class URoomGenerator*>                              Rooms;                                                   // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SaveGameSnapShot
	 * Size -> 0x00C8
	 */
	struct FSaveGameSnapShot
	{
	public:
		TWeakObjectPtr<class UFSDSaveGame>                         SaveGame;                                                // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsObsolete;                                              // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7MT1[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VersionNumber;                                           // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Credits;                                                 // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NUDL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, int32_t>                               CharacterLevels;                                         // 0x0028(0x0050) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		TMap<class UClass*, int32_t>                               Resources;                                               // 0x0078(0x0050) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SchematicGADataEntry
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FSchematicGADataEntry : public FTableRowBase
	{
	public:
		unsigned char                                              UnknownData_T1ED[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SchematicGAID;                                           // 0x0018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q1ZZ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SchematicName;                                           // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FSDServerListEntryModModel
	 * Size -> 0x0028
	 */
	struct FFSDServerListEntryModModel
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Category;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TR12[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Version;                                                 // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FSDServerListEntryModel
	 * Size -> 0x00D8
	 */
	struct FFSDServerListEntryModel
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DRG_SERVERNAME;                                          // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DRG_SERVERNAME_SAN;                                      // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DRG_GLOBALMISSION_SEED;                                  // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DRG_MISSION_SEED;                                        // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DRG_DIFF;                                                // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DRG_GAMESTATE;                                           // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DRG_PWREQUIRED;                                          // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DRG_PRIVATE;                                             // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DRG_NUMPLAYERS;                                          // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SUM[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DRG_CLASSES;                                             // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DRG_CLASSLOCK;                                           // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DRG_FULL;                                                // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DRG_REGION;                                              // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DRG_START;                                               // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DRG_VERSION;                                             // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NOBL[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HostUserID;                                              // 0x0090(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DRG_MISSIONSTRUCTURE;                                    // 0x00A0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              P2PAddr;                                                 // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    P2PPORT;                                                 // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFSDServerListEntryModModel>                 Mods;                                                    // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FSDServerListResponse
	 * Size -> 0x0010
	 */
	struct FFSDServerListResponse
	{
	public:
		TArray<struct FFSDServerListEntryModel>                    Lobbies;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FSDServerListRequest
	 * Size -> 0x0078
	 */
	struct FFSDServerListRequest
	{
	public:
		unsigned char                                              UnknownData_VAUN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AuthenticationTicket;                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IgnoreId;                                                // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Distance;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DRG_PWREQUIRED;                                          // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DRG_REGION;                                              // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DRG_VERSION;                                             // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DifficultyBitset;                                        // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MissionSeed;                                             // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GlobalMissionSeed;                                       // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SearchString;                                            // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DeepDive;                                                // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJ7N[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Platform;                                                // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FSDSteamServerListRequest
	 * Size -> 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
	 */
	struct FFSDSteamServerListRequest : public FFSDServerListRequest
	{
	public:
		class FString                                              SteamTicket;                                             // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SteamPingLoc;                                            // 0x0088(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            GameTypes;                                               // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.FriendInfo
	 * Size -> 0x0060
	 */
	struct FFriendInfo
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RealName;                                                // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserId;                                                  // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOnline;                                                // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPlaying;                                               // 0x0031(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPlayingThisGame;                                       // 0x0032(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsJoinable;                                              // 0x0033(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YSEL[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              sessionId;                                               // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasVoiceSupport;                                         // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8FSP[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PresenceStatus;                                          // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.LookupSessionResponse
	 * Size -> 0x0030
	 */
	struct FLookupSessionResponse
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0JQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              P2PAddr;                                                 // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    P2PPORT;                                                 // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QHNW[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.LookupSessionRequest
	 * Size -> 0x0010
	 */
	struct FLookupSessionRequest
	{
	public:
		class FString                                              SessionKey;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.StopSessionResponse
	 * Size -> 0x0001
	 */
	struct FStopSessionResponse
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.StopSessionRequest
	 * Size -> 0x0010
	 */
	struct FStopSessionRequest
	{
	public:
		class FString                                              SessionKey;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SessionUpdateResponse
	 * Size -> 0x0001
	 */
	struct FSessionUpdateResponse
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.SessionUpdateRequest
	 * Size -> 0x0018
	 */
	struct FSessionUpdateRequest
	{
	public:
		class FString                                              SessionKey;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPlayers;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QS2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.RegisterSessionResponse
	 * Size -> 0x0010
	 */
	struct FRegisterSessionResponse
	{
	public:
		class FString                                              SessionKey;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.RegisterSessionRequest
	 * Size -> 0x0040
	 */
	struct FRegisterSessionRequest
	{
	public:
		class FString                                              ServerName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPlayers;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOMW[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              P2PAddr;                                                 // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    P2PPORT;                                                 // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FW6[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SoundClassManagerItem
	 * Size -> 0x000C
	 */
	struct FSoundClassManagerItem
	{
	public:
		unsigned char                                              UnknownData_2RL7[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.SpiderAnimInstanceProxy
	 * Size -> 0x0000 (FullSize[0x0770] - InheritedSize[0x0770])
	 */
	struct FSpiderAnimInstanceProxy : public FAnimInstanceProxy
	{	};

	/**
	 * ScriptStruct FSD.HookData
	 * Size -> 0x0010
	 */
	struct FHookData
	{
	public:
		struct FVector_NetQuantize                                 TargetLocation;                                          // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsExtending;                                             // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0GZ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.AnimNode_Tentacle
	 * Size -> 0x0108 (FullSize[0x01D0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_Tentacle : public FAnimNode_SkeletalControlBase
	{
	public:
		TArray<struct FBoneReference>                              BonesToModify;                                           // 0x00C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DWL[0xF8];                                  // 0x00D8(0x00F8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.TestTerrainMaterialDecalItem
	 * Size -> 0x0020
	 */
	struct FTestTerrainMaterialDecalItem
	{
	public:
		TArray<class UTerrainMaterial*>                            Materials;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  Decals;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.TestTerrainMaterialItem
	 * Size -> 0x00B0
	 */
	struct FTestTerrainMaterialItem
	{
	public:
		TArray<class UTerrainMaterial*>                            Materials;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              DigParticles[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PartialDigParticles[0x28];                               // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CrumbleSound[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PartialMineSound[0x28];                                  // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct FSD.TetherMessageSettings
	 * Size -> 0x0010
	 */
	struct FTetherMessageSettings
	{
	public:
		unsigned char                                              UnknownData_PXXX[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.TrackMovement
	 * Size -> 0x000C
	 */
	struct FTrackMovement
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.InfectionPoint
	 * Size -> 0x0002
	 */
	struct FInfectionPoint
	{
	public:
		bool                                                       IsInfected;                                              // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsVacuumed;                                              // 0x0001(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.WeakpointTask
	 * Size -> 0x0110
	 */
	struct FWeakpointTask
	{
	public:
		struct FRichCurve                                          GrowCurve;                                               // 0x0000(0x0080) Transient, NativeAccessSpecifierPublic
		struct FRichCurve                                          FadeCurve;                                               // 0x0080(0x0080) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6SY7[0x10];                                  // 0x0100(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.WeaponHitCounterEffectItem
	 * Size -> 0x0008
	 */
	struct FWeaponHitCounterEffectItem
	{
	public:
		TWeakObjectPtr<class AActor>                               Target;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.WeightedRoomSelectorItem
	 * Size -> 0x0010
	 */
	struct FWeightedRoomSelectorItem
	{
	public:
		class URoomGenerator*                                      Room;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39BK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSD.WeightedRoomSelector
	 * Size -> 0x0010
	 */
	struct FWeightedRoomSelector
	{
	public:
		TArray<struct FWeightedRoomSelectorItem>                   Items;                                                   // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSD.XPSettings
	 * Size -> 0x000C
	 */
	struct FXPSettings
	{
	public:
		float                                                      XP_PerGold;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XP_PerKill;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XP_OnSurvivedLevel;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
