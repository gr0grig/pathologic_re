include std.sci
include player_base.sci
include player_common2.sci

const string c_strPlayerName = "klara";

maintask TPlayer : TPlayerBase
{
	void init(void) {
		object Effects;
		@CreateStringVector(Effects);
		Effects->add("player_reputation_decrease.bin");
		Effects->add("player_klara_dream.bin");
		
		int iVal;
		@GetVariable("player_init", iVal);
		if (!iVal) {
			//@Diary();
			@SetVariable("player_init", 1);	
		}
				
		super.init(Effects);
	}

	void PerformShoot(string strWeapon) {
		if (strWeapon == "empty") {
			THandsAttack{};
		}
		else if (strWeapon == "scalpel") {
			TScalpel{};
		}
		else if (strWeapon == "lockpick") {
			TLockpick{};
		}
		else if (strWeapon == "gun") {
			TGun{};
		}
	}
	
	void PerformReload(string strWeapon) {
		if (strWeapon == "gun") {
			TGunReload{};
		}
	}

	void PerformAltShoot(string strWeapon) {}
}

task THandsAttack : TBaseAttack
{
	var bool m_bWC;
	
	void init(void) {
		m_bWC = false;

		int iAttackTypes = 0;
		for (;;) {
			++iAttackTypes;
			string strAttack = "attack" + iAttackTypes + "_phase1";
			bool bHas;
			@HasAnimation(bHas, strAttack);
			if (!bHas)
				break;
		}
		
		--iAttackTypes;
		
		if (!iAttackTypes)
			return;

		do {
			float fDistance;
			@GetAttackDistance(fDistance);
			fDistance *= 350.0 / 160.0;
			Vector vDir;
			@GetDirection(vDir);
			object victim;
			int iMaterial;
			Vector vRPos;
			@GetVictimMaterialExact(victim, iMaterial, vRPos, vDir, fDistance);
			if (victim != null) {
				if (HasProperty(victim, "healable")) {
					@PlaySound("heal");
					@PlayAnimation("heal_phase1");
					@WaitForAnimEnd();
					if (m_bWC)
						return;
					if (IsInCurrentScene(victim))
						@Trigger(victim, "heal");
					@PlayAnimation("heal_phase2");
					@WaitForAnimEnd();
					if (m_bWC)
						return;
					continue;
				}
			}

			bool bBackstab;
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

			string strAttack;

			if (bBackstab) {
				strAttack = "battack";
				@PlaySound("punch_back");
			}
			else {
				int iAttackType;
				@irand(iAttackType, iAttackTypes);
				strAttack = "attack" + (iAttackType + 1);
				@PlaySound("punch" + (iAttackType + 1));
			}
			
			@PlayAnimation(strAttack + "_phase1");
			@WaitForAnimEnd();
			if (m_bWC)
				return;
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
				float fDamage = Damage(victim, fHit, c_iDamageTypePhysical);
				if (fDamage) {
					int iPunchType;
					@irand(iPunchType, 2);
					@PlaySound("punch_hit" + (iPunchType + 1));
					@ReportAttack(victim);
					@ReportHit(victim, c_iHitTypePhysical, fDamage, fHit, vRPos, vDir);
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
			}
			@PlayAnimation(strAttack + "_phase2");
			@WaitForAnimEnd();
			if (m_bWC)
				return;
		} while (IsShooting());
	}
	
	void OnAction(int id) {
		if (id == 10) {
			m_bWC = true;
		}
		else global.OnAction(id);
	}

	float GetWeaponDamage(bool bBackstab) {
		return (bBackstab)? 0.4 : 0.2;
	}
}

task TGun : TAttack2
{
	bool ShootBegin(void) {
		bool bHas, bLoaded;
		@GetWeaponProperty(bHas, "ammo", bLoaded);
		if (!bHas || !bLoaded) {
			if (!ReloadWeapon("revolver_ammo", 2)) {
				@PlaySound(GetSoundPrefix() + "_noammo");
				@PlayAnimation("noammo");
				@WaitForAnimEnd();
				return false;
			}
		}
		return true;
	}

	int GetRayCount(void) {
		return 3;
	}
	
	float GetShootAngle(void) {
		return PI / 120;
	}

	void PreShoot(void) {
		bool bHas;
		int iAmmoCount;
		@GetWeaponProperty(bHas, "ammo", iAmmoCount);
		@SetWeaponProperty(bHas, "ammo", iAmmoCount - 1);
		BroadcastShot();
	}

	void PostShoot(void) {
		bool bHas, bLoaded;
		@GetWeaponProperty(bHas, "ammo", bLoaded);
		if (!bHas || !bLoaded) {
			PerformReload();
		}
	}
	
	void PerformReload(void) {
		if (ReloadWeapon("revolver_ammo", 2)) {
			@PlaySound(GetSoundPrefix() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}

	void OnAction(int id) {
		if (id == 11) {
			PerformReload();
		}
		global.OnAction(id);
	}

	string GetSoundPrefix(void) {return "gun";}
	float GetWeaponBaseDamage(void) {return 1.3;}
	int GetWeaponDamageType(void) {return c_iDamageTypeBullet;}
	int GetWeaponHitType(void) {return c_iHitTypeBullet;}
	int GetWeaponHitDecayFactor(void) { return 2; }
}

task TGunReload : TReloadTask
{
	void init(void) {
		super.init();
		if (ReloadWeapon("revolver_ammo", 2)) {
			@PlaySound(GetSoundPrefix() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}

	string GetSoundPrefix(void) {return "gun";}
}