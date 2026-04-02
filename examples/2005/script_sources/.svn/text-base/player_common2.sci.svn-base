include player_common.sci

// CONSTANTS
const float c_fFlameLength = 500;
const float c_fCleanBodyRate = 0.1;
const float c_fFireAmount = 0.1;
const float c_fFlameSelfDamageLength = 60;
// CONSTANTS

const int c_iFlameTimer = 20;
const float c_fFlameTimerFreq = 0.1;

void BroadcastShot(void)
{
	object scene;
	@GetScene(scene);
	@BroadcastMessage("player_shot", self(), scene);
}

task THands : TAttack0
{
	string GetSoundPrefix(void) {return "punch";}
	float GetWeaponBaseDamage(bool bBackstab) {
		return (bBackstab)? 0.3 : 0.2;
	}
	int GetWeaponDamageType(void) {return c_iDamageTypePhysical;}
	int GetWeaponHitType(void) {return c_iHitTypePhysical;}
}

task TScalpel : TAttack1
{
	string GetSoundPrefix(void) {return "scalpel";}
	float GetWeaponBaseDamage(bool bBackstab) {
		return 0.6;		// no backstabbing
	}
	float GetWeaponMinDurabilityFactor(void) {return 0.5;}
	int GetWeaponHitDecayFactor(void) {return 2;}
	int GetWeaponDamageType(void) {return c_iDamageTypePhysical;}
	int GetWeaponHitType(void) {return c_iHitTypePhysical2;}
}

task TKnife : TAttack1
{
	bool HasBackstabbingAnimation(void) { return true; }
	string GetSoundPrefix(void) {return "knife";}
	float GetWeaponBaseDamage(bool bBackstab) {
		return (bBackstab)? 0.7 : 0.4;
	}
	float GetWeaponMinDurabilityFactor(void) {return 0.5;}
	int GetWeaponHitDecayFactor(void) {return 4;}
	int GetWeaponDamageType(void) {return c_iDamageTypePhysical;}
	int GetWeaponHitType(void) {return c_iHitTypePhysical2;}
}

task TRifle : TAttack2
{
	bool ShootBegin(void) {
		bool bHas, bLoaded;
		@GetWeaponProperty(bHas, "ammo", bLoaded);
		if (!bHas || !bLoaded) {
			if (!ReloadWeapon("rifle_ammo", 1)) {
				@PlaySound(GetSoundPrefix() + "_noammo");
				@PlayAnimation("noammo");
				@WaitForAnimEnd();
				return false;
			}
		}
		return true;
	}
	
	int GetRayCount(void) {
		return 1;
	}
	
	float GetShootAngle(void) {
		return PI / 180;
	}
	
	bool CanShootThrough(void) { return true; }

	void PreShoot(void) {
		bool bHas;
		@SetWeaponProperty(bHas, "ammo", false);
		BroadcastShot();
	}
	
	void PostShoot(void) {
		PerformReload();
	}
	
	void PerformReload(void) {
		if (ReloadWeapon("rifle_ammo", 1)) {
			@PlaySound(GetSoundPrefix() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}
	
	string GetSoundPrefix(void) {return "rifle";}
	float GetWeaponBaseDamage(void) {return 1.5;}
	int GetWeaponDamageType(void) {return c_iDamageTypeBullet;}
	int GetWeaponHitType(void) {return c_iHitTypeBullet;}
	int GetWeaponHitDecayFactor(void) { return 2; }
}

task TRifleReload : TReloadTask
{
	void init(void) {
		super.init();
		if (ReloadWeapon("rifle_ammo", 1)) {
			@PlaySound(GetSoundPrefix() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}

	string GetSoundPrefix(void) {return "rifle";}
}

task TRevolver : TAttack2
{
	bool ShootBegin(void) {
		bool bHas, bLoaded;
		@GetWeaponProperty(bHas, "ammo", bLoaded);
		if (!bHas || !bLoaded) {
			if (!ReloadWeapon("revolver_ammo", 6)) {
				@PlaySound(GetSoundPrefix() + "_noammo");
				@PlayAnimation("noammo");
				@WaitForAnimEnd();
				return false;
			}
		}
		return true;
	}

	int GetRayCount(void) {
		return 1;
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
		if (ReloadWeapon("revolver_ammo", 6)) {
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

	string GetSoundPrefix(void) {return "revolver";}
	float GetWeaponBaseDamage(void) {return 0.8;}
	int GetWeaponDamageType(void) {return c_iDamageTypeBullet;}
	int GetWeaponHitType(void) {return c_iHitTypeBullet;}
	int GetWeaponHitDecayFactor(void) { return 2; }
}

task TRevolverReload : TReloadTask
{
	void init(void) {
		super.init();
		if (ReloadWeapon("revolver_ammo", 6)) {
			@PlaySound(GetSoundPrefix() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}

	string GetSoundPrefix(void) {return "revolver";}
}

task TSamopal : TAttack2
{
	bool ShootBegin(void) {
		bool bHas, bLoaded;
		@GetWeaponProperty(bHas, "ammo", bLoaded);
		if (!bHas || !bLoaded) {
			if (!ReloadWeapon("samopal_ammo", 2)) {
				@PlaySound(GetSoundPrefix() + "_noammo");
				@PlayAnimation("noammo");
				@WaitForAnimEnd();
				return false;
			}
		}
		return true;
	}

	int GetRayCount(void) {
		return 5;
	}
	
	float GetShootAngle(void) {
		return PI / 80;
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
		if (ReloadWeapon("samopal_ammo", 2)) {
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

	string GetSoundPrefix(void) {return "samopal";}
	float GetWeaponBaseDamage(void) {return 1.8;}
	int GetWeaponDamageType(void) {return c_iDamageTypeBullet;}
	int GetWeaponHitType(void) {return c_iHitTypeBullet;}
	int GetWeaponHitDecayFactor(void) { return 2; }
}

task TSamopalReload : TReloadTask
{
	void init(void) {
		super.init();
		if (ReloadWeapon("samopal_ammo", 2)) {
			@PlaySound(GetSoundPrefix() + "_reload");
			@PlayAnimation("reload");
			@WaitForAnimEnd();
		}
	}

	string GetSoundPrefix(void) {return "samopal";}
}

task TLockpick
{
	var bool m_bWC;
	var bool m_bEmptyHands;

	void init(void) {
		m_bWC = false;
		m_bEmptyHands = false;

		@PlayAnimation("use_begin");
		@WaitForAnimEnd();
		if (m_bWC) return;
		
		object obj;
		@GetPlayerSelectedObject(obj);

		bool bSuccess = false;
		if (HasProperty(obj, "lp")) {
			bool bUnlockable;
			obj->GetProperty("lp", bUnlockable);
			if (bUnlockable) {
				bool bLocked;
				obj->GetProperty("locked", bLocked);
				if (bLocked) {
					bSuccess = true;
					obj->SetProperty("locked", false);
					bool bHas;
					int iUseCount = 0;
					@GetWeaponProperty(bHas, "uses", iUseCount);
					if (iUseCount <= 1) {
						int iItem;
						@GetWeaponItem(iItem);
						@SelectItem(iItem, false, 0);
						@RemoveItem(iItem, 1, 0);
						m_bEmptyHands = true;
					}
					else {
						@SetWeaponProperty(bHas, "uses", iUseCount - 1);
					}
				}
			}
		}

		if (bSuccess) {
			@PlayAnimation("use_success");
		}
		else {
			@PlayAnimation("use_fail");
		}
		@WaitForAnimEnd();
		if (m_bWC) {
			return;
		}
		if (m_bEmptyHands) {
			@PlayAnimation("holster");
			@WaitForAnimEnd();
			@SetHandsItem(-1);
			if (m_bWC)
				return;
			m_bEmptyHands = false;
			@PlayAnimation("unholster");
			@WaitForAnimEnd();
		}
	}
	
	void OnDispose(void) {
		if (!m_bWC && m_bEmptyHands)
			@SetHandsItem(-1);
	}
}
