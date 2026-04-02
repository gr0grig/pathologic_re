include std.sci
include game_ext.sci
include player_steps.sci

// CONSTANTS
const float c_fBackstabAngle = 60 * PI / 180;
const float c_fHeadDamageMultiplier = 3;
// CONSTANTS

const int c_iHeadMaterial = 4;

var object g_AttackList;
var object g_Enemies, g_AttackedEnemies;

bool IsSneaking(void)
{
	bool bSneak;
	@IsSneaking(bSneak);
	return bSneak;
}

bool ReloadWeapon(string strAmmoName, int iMaxAmmo)
{
	bool bHas;
	int iAmmo;
	@GetWeaponProperty(bHas, "ammo", iAmmo);
	if (bHas && iAmmo >= iMaxAmmo)
		return false;

	int iAmmoItemID;
	@GetInvItemByName(iAmmoItemID, strAmmoName);
	for (; iAmmo < iMaxAmmo; ++iAmmo) {
		bool bHas;
		@RemoveItemByType(bHas, iAmmoItemID, 1);
		if (!bHas)
			break;
	}
	if (!iAmmo)
		return false;
	@SetWeaponProperty(bHas, "ammo", iAmmo);
	return true;
}

float GetWeaponDurability(void)
{
	bool bHas;
	int iDurability;
	@GetWeaponProperty(bHas, "durability", iDurability);
	return (bHas)? iDurability / 100.0 : 1.0;
}

void DecayWeapon(int iAmount)
{
	bool bHas;
	int iDurability;
	@GetWeaponProperty(bHas, "durability", iDurability);
	if (!bHas)
		iDurability = 100;
	iDurability = clampi(iDurability - iAmount, 0, 100);
	@SetWeaponProperty(bHas, "durability", iDurability);
}

float GetWeaponDamageDurabilityMod(float fMinFactor)
{
	return fMinFactor + GetWeaponDurability() * (1 - fMinFactor);
}

bool HandleGlobalTimer(int id)
{
	return HandleStepsTimer(id);
}

void OnTimer(int id)
{
	HandleGlobalTimer(id);
}

void OnTrigger(string strCmd)
{
	if (strCmd == "die") {
		HandleDeath();
	}
}

void OnPlayerEnemy(object actor)
{
	if (!actor)
		return;
	bool bInAttackedEnemySet;
	g_AttackedEnemies->in(bInAttackedEnemySet, actor);
	if (!bInAttackedEnemySet) {
		g_Enemies->add(actor);
	}
}

void OnPropertyChange(object actor, string strProp) {
	if (strProp == "health") {
		float fHealth;
		@GetProperty("health", fHealth);
		if (fHealth < 0.001) {
			@SignalDeath(actor);
		}
	}
	else if (strProp == "reputation") {
		object scene;
		@GetScene(scene);
		@BroadcastMessage("prc", self(), scene);
	}
	
	object data;
	@CreateStringVector(data);
	data->add(strProp);
	@SendWorldWndMessage(c_iWM_PlayerPropChange, data);
}

void OnDeath(object actor)
{
	if (!IsGodMode())
		HandleDeath();
}

void OnReputationChange(object actor, float fMod, bool bForce)
{
	if (!actor)
		return;
	bool bIn;
	g_Enemies->in(bIn, actor);
	if (bIn) {
		@Trace("Reputation is not changed for enemy: " + actor);
		return;
	}
	if (!bForce) {
		g_AttackList->in(bIn, actor);
		if (bIn)
			return;
	}
	g_AttackList->add(actor);
	PlayerModReputation(self(), fMod);
}

void OnPlayerLand(void)
{
	ResetIdle();
	EnableATimer();
}

void OnAttacked(object actor)
{
}

void OnFallDamage(float fSpeedChange)
{
	const float c_fMinSpeed = 770;

	if (fSpeedChange > c_fMinSpeed) {
		@Trace(fSpeedChange);
		float fHit = (fSpeedChange - c_fMinSpeed) * (0.35 / 100);
		float fDamage = Damage(self(), fHit, c_iDamageTypePhysical);
		@ReportHit(self(), c_iHitTypePhysical, fDamage, fHit, [0, 0, 0], [0, 0, 0]);
	}
}
	
void OnAction(int id)
{
	if (id == 0) {
		@Inventory();
	}
	else if (id == 1) {
		object oscene, scene, map;
		@GetMainOutdoorScene(oscene);
		@GetActiveScene(scene);
		if (oscene == null) {
			@Trace("Can't find main outdoor oscene");
			return;
		}
		oscene->GetMap(map);
		if (map == null) {
			@Trace("Can't find map");
			return;
		}
		
		Vector vPos;
		if (oscene == scene) { // outdoor
			@GetPosition(vPos);
		}
		else { // indoor
			string strName;
			scene->GetName(strName);
			bool bFound;
			Vector vDir;
			oscene->GetLocator("pt_gmap_" + strName, bFound, vPos, vDir);
			if (!bFound) {
				@Trace("FIXME: No map locator for scene : " + strName);
				vPos = [0,0,0];
			}
		}
		
		map->SetMapParams(vPos.x, vPos.z);
		@ShowMap(map);
	}
	else if (id == 2) {
		@Diary();
	}
	else if (id == 3) {
		@ShowMessage();
	}
	else if (id == 4) {
		int iRet;
		@ShowPlayerStats(iRet);
		if (iRet == 1)
			@ShowWindow("people.xml", true);
	}
	else if (id == 5) {
		bool bOn;
		@IsFlashlightOn(bOn);
		if (bOn) {
			@SwitchFlashlight(false);
			@PlaySound("flashlight_off");
		}
		else {
			if (HasFlashlightFuel()) {
				@SwitchFlashlight(true);
				@PlaySound("flashlight_on");
			}
			else {
				@PlaySound("flashlight_nofuel");
			}
		}
	}
	else if (id == 6) {
		if (GetPlayer() != c_iBranchDanko)
			return;
			
		bool bOn;
		@IsVisirOn(bOn);
		if (bOn) {
			@SwitchVisir(false);
			@SendWorldWndMessage(c_iWM_PlayerVisirOff);
		}
		else {
			int iLevel;
			@GetProperty("visir", iLevel);
			if (iLevel) {
				int iCharge;
				@GetProperty("vcharge", iCharge);
				if (iCharge >= 10) {
					@SwitchVisir(true);
					@SendWorldWndMessage(c_iWM_PlayerVisirOn);
				}
				else {
				}
			}
		}
	}
	else if (id == 7) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive) {		
			@ShowWindow("people.xml", true);
		}
	}
}

void ResetIdle(void)
{
	float fWait;
	@rand(fWait, 10, 30);
	@SetTimer(0, fWait);
}

task TPlayerBase
{
	void init(object AdditionalEffects) {
		g_AttackList = CreateObjectSet();
		g_Enemies = CreateObjectSet();
		g_AttackedEnemies = CreateObjectSet();

		bool bHasProp;
		@HasProperty("effects", bHasProp);
		if (!bHasProp) {
			@SetProperty("effects", true);
			@ApplyEffect("player_disease.bin");
			@ApplyEffect("player_stat.bin");
			@ApplyEffect("player_hit.bin");
			@ApplyEffect("player_head.bin");
			@ApplyEffect("player_flashlight.bin");
			@ApplyEffect("player_visir.bin");
			@ApplyEffect("player_vis.bin");
			@ApplyEffect("player_eyes_height.bin");
			@ApplyEffect("player_gifts.bin");
			
			if (AdditionalEffects) {
				int iSize;
				AdditionalEffects->size(iSize);
				for (int i = 0; i < iSize; ++i) {
					string strEffect;
					AdditionalEffects->get(strEffect, i);
					@ApplyEffect(strEffect);
				}
			}
		}
		
		BeginIdle();

		float fHealth;
		@GetProperty("health", fHealth);
		if (fHealth <= 0 && !IsGodMode()) {
			HandleDeath();
			return;
		}

		for (;;) {
			bool bHolstered;
			@IsWeaponHolstered(bHolstered);
			if (!bHolstered) {
				bool bWalking;
				@IsWalking(bWalking);
				if (bWalking) {
					@PlayAnimation("walk");
					@WaitForAnimEnd();
					continue;
				}
			}
			@Sleep(0.1);
		}
	}
	
	void OnPlayerStartShooting(void) {
		bool bHolstered;
		@IsWeaponHolstered(bHolstered);
		if (!bHolstered) {
			EndIdle();
			string strWeapon;
			@GetCurrentWeapon(strWeapon);
			PerformShoot(strWeapon);
			BeginIdle();
			bool bAltShooting;
			@IsAltShooting(bAltShooting);
			if (bAltShooting)
				OnPlayerStartAltShooting();
		}
	}
	
	void OnPlayerStartAltShooting(void) {
		bool bHolstered;
		@IsWeaponHolstered(bHolstered);
		if (!bHolstered) {
			EndIdle();
			string strWeapon;
			@GetCurrentWeapon(strWeapon);
			PerformAltShoot(strWeapon);
			BeginIdle();
			bool bShooting;
			@IsShooting(bShooting);
			if (bShooting)
				OnPlayerStartShooting();
		}
	}

	void OnPlayerHolsterWeapon(void) {
		EndIdle();
		THolster{};
		BeginIdle();
	}

	void OnTimer(int id) {
		if (HandleGlobalTimer(id))
			return;
		
		EndIdle();
		bool bHolstered;
		@IsWeaponHolstered(bHolstered);
		if (!bHolstered) {
			int iIdleCount;
			for (iIdleCount = 0; ; ++iIdleCount) {
				bool bHas;
				@HasAnimation(bHas, "idle" + (iIdleCount + 1));
				if (!bHas)
					break;
			}
			if (iIdleCount) {
				int iIdleType;
				@irand(iIdleType, iIdleCount);
				@PlayAnimation("idle" + (iIdleType + 1));
				@WaitForAnimEnd();
			}
		}
		BeginIdle();
	}
	
	void OnAction(int id) {
		if (id == 11) {
			string strWeapon;
			@GetCurrentWeapon(strWeapon);
			PerformReload(strWeapon);
		}
		else global.OnAction(id);
	}
	
	void BeginIdle(void) {
		ResetIdle();
	}
	
	void EndIdle(void) {
		@KillTimer(0);
	}

	// void PerformShoot(string strWeapon) = 0;
}

task TBaseAttack
{
	void init(void) {}

	bool IsShooting(void) {
		bool bShooting;
		@IsShooting(bShooting);
		return bShooting;
	}
}

task TReloadTask
{
	void init(void) {}
}

task TAttack0 : TBaseAttack
{
	var bool m_bWC;
	
	void init(void) {
		m_bWC = false;

		int iAttackTypes = 0;
		for (;;) {
			++iAttackTypes;
			string strAttack = GetAttackPrefix() + "attack" + iAttackTypes + "_phase1";
			bool bHas;
			@HasAnimation(bHas, strAttack);
			if (!bHas)
				break;
		}
		
		--iAttackTypes;
		
		if (!iAttackTypes)
			return;

		do {
			string strWeapon;
			@GetCurrentWeapon(strWeapon);
			
			float fDistance;
			@GetAttackDistance(fDistance);
			Vector vDir;
			@GetDirection(vDir);
			object victim;
			int iMaterial;
			Vector vRPos;

			bool bBackstab = false;

			if (HasBackstabbingAnimation()) {
				@GetVictimMaterialExact(victim, iMaterial, vRPos, vDir, fDistance);
				if (victim != null && HasProperty(victim, "health") && !IsDead(victim) && iMaterial == c_iHeadMaterial) {
					if (victim->FuncExist("GetDirection", 1)) {
						Vector vPlayerDir;
						@GetDirection(vPlayerDir);
						Vector vVictimDir;
						victim->GetDirection(vVictimDir);
						bBackstab = (CosAngle2D(vPlayerDir, vVictimDir) >= cos(c_fBackstabAngle));
					}
				}
			}

			string strAttack;
			
			if (bBackstab) {
				strAttack = "battack";
				@PlaySound(GetSoundPrefix() + "_back");
			}
			else {
				int iAttackType;
				@irand(iAttackType, iAttackTypes);
				strAttack = GetAttackPrefix() + "attack" + (iAttackType + 1);
				@PlaySound(GetSoundPrefix() + (iAttackType + 1));
			}

			@SetAttackState(true);
			@PlayAnimation(strAttack + "_phase1");
			@WaitForAnimEnd();
			if (m_bWC)
				return;
			@SetAttackState(false);
			@GetAttackDistance(fDistance);
			@GetDirection(vDir);
			@GetVictimMaterialExact(victim, iMaterial, vRPos, vDir, fDistance);
			if (victim != null) {
				if (victim->FuncExist("GetDirection", 1)) {
					Vector vPlayerDir;
					@GetDirection(vPlayerDir);
					Vector vVictimDir;
					victim->GetDirection(vVictimDir);
					bBackstab = (CosAngle2D(vPlayerDir, vVictimDir) >= cos(c_fBackstabAngle));
				}
				else {
					bBackstab = false;
				}
				float fHit = GetWeaponDamage(bBackstab);
				if (iMaterial == c_iHeadMaterial) {
					fHit *= c_fHeadDamageMultiplier;
				}
				float fDamage = Damage(victim, fHit, GetWeaponDamageType());
				if (fDamage) {
					int iPunchType;
					@irand(iPunchType, 2);
					@PlaySound(GetSoundPrefix() + "_hit" + (iPunchType + 1));
					@ReportAttack(victim);
					@ReportHit(victim, GetWeaponHitType(), fDamage, fHit, vRPos, vDir);
					bool bEnemy;
					g_Enemies->in(bEnemy, victim);
					if (!bEnemy) {
						g_AttackedEnemies->add(victim);
						@BroadcastPlayerDamage(victim, false);
					}
					else {
						@BroadcastPlayerDamage(victim, true);
					}
				}
				OnHitSomething();
			}
			@PlayAnimation(strAttack + "_phase2");
			@WaitForAnimEnd();
			if (m_bWC)
				return;
		} while (IsShooting());
	}
	
	float GetWeaponDamage(bool bBackstab) {
		return GetWeaponBaseDamage(bBackstab);
	}
	
	void OnAction(int id) {
		if (id == 10) {
			m_bWC = true;
		}
		else global.OnAction(id);
	}

	void OnHitSomething(void) {}

	bool HasBackstabbingAnimation(void) { return false; }
	string GetAttackPrefix(void) { return ""; }
	
	// float GetWeaponBaseDamage(void) = 0
}

task TAttack1 : TAttack0
{
	float GetWeaponDamage(bool bBackstab) {
		return GetWeaponBaseDamage(bBackstab) * GetWeaponDamageDurabilityMod(GetWeaponMinDurabilityFactor());
	}

	void OnHitSomething(void) {
		DecayWeapon(GetWeaponHitDecayFactor());
	}

	// float GetMinDurabilityFactor(void) = 0
	// int GetWeaponHitDecayFactor(void) = 0
}

task TAttack2 : TBaseAttack
{
	var bool m_bWC;
	
	void init(void) {
		m_bWC = false;

		do {
			if (!ShootBegin())
				break;
			string strWeapon;
			@GetCurrentWeapon(strWeapon);
			string strAttack = "attack1";
			@SetAttackState(true);
			PreShoot();
			@PlayAnimation(strAttack + "_phase1");
			@WaitForAnimEnd();
			if (m_bWC)
				return;
			@TriggerWeapon("shot");
			@PlaySound(GetSoundPrefix() + "_shot");
			DecayWeapon(GetWeaponHitDecayFactor());
			InShoot();
			@SetAttackState(false);

			int iRayCount = GetRayCount();

			bool bRicocheted = false;
			float fWeaponDamage = GetWeaponBaseDamage() / iRayCount;
			float fAngle = 1.0 / (1.5 + (1.0 / GetShootAngle() - 1.5) * GetWeaponDurability());
			Vector vDir;
			@GetDirection(vDir);

			object victims = CreateObjectVector();
			for (int i = 0; i < iRayCount; ++i) {
				Vector vShootDir;
				@RandVecCone3D(vShootDir, vDir, fAngle);
				object victim;
				int iMaterial;
				Vector vRPos;
				@GetVictimMaterialExact(victim, iMaterial, vRPos, vShootDir, 10000);
				if (victim) {
					float fHit = fWeaponDamage;
					if (iMaterial == c_iHeadMaterial) {
						fHit *= c_fHeadDamageMultiplier;
					}
					float fDamage = Damage(victim, fHit, GetWeaponDamageType());
					if (fDamage) {
						victims->add(victim);
						@ReportHit(victim, GetWeaponHitType(), fDamage, fHit, vRPos, vShootDir);
						if (CanShootThrough()) {
							float fHealth;
							victim->GetProperty("health", fHealth);
							if (!fHealth) {
								object victim2;
								@GetVictimMaterialExact(victim2, iMaterial, vRPos, vShootDir, 10000, victim);
								if (victim2 && victim2 != victim) {
									float fDamage = Damage(victim2, fHit * 0.75, GetWeaponDamageType());
									if (fDamage) {
										victims->add(victim2);
										@ReportHit(victim2, GetWeaponHitType(), fDamage, fHit, vRPos, vShootDir);
									}
								}
							}
						}
					}
					else if (iMaterial != -1) {
						if (!bRicocheted) {
							object scene;
							@GetScene(scene);
							object ricochet;
							@AddActorByType(ricochet, "scripted", scene, vRPos, [0, 0, 1], "richochet.xml");
							ricochet->SetScriptProperty("Material", iMaterial);
							bRicocheted = true;
						}
					}
				}
			}
			int nVictims;
			victims->size(nVictims);
			for (int i = 0; i < nVictims; ++i) {
				object victim;
				victims->get(victim, i);
				@ReportAttack(victim);
				bool bEnemy;
				g_Enemies->in(bEnemy, victim);
				if (!bEnemy) {
					g_AttackedEnemies->add(victim);
					@BroadcastPlayerDamage(victim, false);
				}
				else {
					@BroadcastPlayerDamage(victim, true);
				}
			}

			@PlayAnimation(strAttack + "_phase2");
			@WaitForAnimEnd();
			if (m_bWC)
				return;
			PostShoot();
		} while (IsShooting());
	}

	void OnAction(int id) {
		if (id == 10) {
			m_bWC = true;
		}
		else global.OnAction(id);
	}

	void PreShoot(void) {}
	void InShoot(void) {}
	
	bool CanShootThrough(void) { return false; }
	
	// bool ShootBegin(void) = 0
	
	// void PostShoot(void) = 0
	
	// return number of rays
	// int GetRayCount(void) = 0
	
	// return angle
	// float GetShootAngle(void) = 0

	// int GetWeaponHitDecayFactor(void) = 0
}

task THolster
{
	void init(void) {
		string strWeapon;
		@GetCurrentWeapon(strWeapon);

		bool bHolstered;
		@IsWeaponHolstered(bHolstered);
		object scene;
		@GetScene(scene);
		if (bHolstered) {
			@BroadcastMessage("unholster", self(), scene);
			PlaySoundIfExists(strWeapon + "_unholster");
			@SetWeaponHolster(false);
			@PlayAnimation("unholster");
			@WaitForAnimEnd();
		}
		else {
			@BroadcastMessage("holster", self(), scene);
			PlaySoundIfExists(strWeapon + "_holster");
			@PlayAnimation("holster");
			@WaitForAnimEnd();
			@SetWeaponHolster(true);
		}
	}
}

task TBlock
{
	var bool m_bWC;
	var bool m_bInLoop;
	var float m_fArmor;

	void init(float fArmor) {
		m_bWC = false;
		m_bInLoop = false;
		m_fArmor = fArmor;
		
		do {
			@PlayAnimation("block");
			@WaitForAnimEnd();
			if (m_bWC)
				return;

			EnableBlocking();

			m_bInLoop = true;
			while(IsBlocking() && !m_bWC) {
				@PlayAnimation("walkblock");
				@WaitForAnimEnd();
			}
			m_bInLoop = false;

			DisableBlocking();				

			if (m_bWC)
				return;

			@PlayAnimation("unblock");
			@WaitForAnimEnd();

			if (m_bWC)
				return;
		} while (IsBlocking());
	}
	
	void EnableBlocking(void) {
		ModPropertyF("armor_phys", m_fArmor);
		@SetProperty("blocking", true);
	}
	
	void DisableBlocking(void) {
		@SetProperty("blocking", false);
		ModPropertyF("armor_phys", -m_fArmor);
	}
	
	bool IsBlocking(void) {
		bool bBlocking;
		@IsAltShooting(bBlocking);
		return bBlocking;
	}

	void OnPlayerStopAltShooting(void) {
		if (m_bInLoop)
			@StopAnimation();
	}
	
	void OnPlayerStartShooting(void) {
		DisableBlocking();				
		if (TBlockAttack{}) {
			m_bWC = true;
		}
		else {
			EnableBlocking();
		}
	}

	void OnAction(int id) {
		if (id == 10) {
			m_bWC = true;
			if (m_bInLoop)
				@StopAnimation();
		}
		else global.OnAction(id);
	}

	void OnHit(object actor, int iHitType, float fDamage, float fHit) {
		if (m_bInLoop) {
			@PlayAnimation("hitblock");
		}
	}

	void OnDispose(void) {
		if (m_bInLoop) {
			ModPropertyF("armor_phys", -m_fArmor);
			@SetProperty("blocking", false);
		}
	}
}

task TBlockAttack : TAttack0
{
	bool init(void) {
		super.init();
		return m_bWC;
	}

	string GetSoundPrefix(void) {return "punch";}
	float GetWeaponBaseDamage(bool bBackstab) {
		return (bBackstab)? 0.2 : 0.1;
	}
	int GetWeaponDamageType(void) {return c_iDamageTypePhysical;}
	int GetWeaponHitType(void) {return c_iHitTypePhysical;}

	string GetAttackPrefix(void) { return "b"; }
}