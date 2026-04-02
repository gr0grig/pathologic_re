include std.sci
include idle.sci
include attack_melee.sci
include std2_melee_attack.sci
include death_base.sci

void OnUnload() {
	@RemoveActor(self());
	@Hold();
}

void HandleDeath(object actor)
{
	object scene;
	@GetScene(scene);
	AddOrgans();
	TDeath{actor};
}

void OnHit(object actor, int iHitType, float fDamage, float fHit)
{
	StdHandleHit(actor, iHitType, fDamage);
}

void OnHit2(object actor, int iHitType, float fDamage, float fHit, Vector vPos, Vector vDir)
{
	StdHandleHit2(actor, iHitType, fDamage, vPos, vDir);
}

void OnPropertyChange(object actor, string strProp)
{
	if (strProp == "health") {
		float fHealth;
		@GetProperty("health", fHealth);
		if (fHealth <= 0) {
			@SignalDeath(actor);
		}
	}
}

void OnDeath(object actor)
{
	HandleDeath(actor);
}

task TMorlokIdle : TIdleBaseLookAsync 
{
	void init(void) {
		while (true) {
			super.init(300, 100);
		}
	}
	
	void OnSee(object actor) {
		if (IsPlayerActor(actor) && IsAccessible(actor)) {
			CancelActivity();
			TAttack{actor};
		}
	}
	
	void OnHear(object actor) {
		if (IsPlayerActor(actor) && IsAccessible(actor)) {
			CancelActivity();
			TAttack{actor};
		}
	}
}

maintask TMorlok
{
	var bool m_bCancel;
	
	void OnLoad(void) {
		@StopGroup0();
	}
	
	void init(void) {
		@Hold();
	
		object scene;
		@GetMainOutdoorScene(scene);
		
		int iCount = 0;
		Vector vPos, vDir;
		while (true) {
			iCount++;
			bool bFound;
			scene->GetLocator("pt_d1q01_morlok_run_path" + iCount, bFound, vPos, vDir);
			if (!bFound)
				break;
				
			@Trace("pt_d1q01_morlok_run_path" + iCount);
			
			object path = FindPathTo(vPos);
			if (!path) {
				@Trace("Can't find path to point " + iCount);
				break;
			}
			else {
				bool bSuccess;
				@RotatePath(path, bSuccess);
				if (bSuccess) {
					@FollowPath(path, true, bSuccess);
					path = null;
					if (!bSuccess)
						break;
				}
				else {
					@Trace("Error rotating path" + iCount);
				}
			}
		}
		
		if (!m_bCancel) {
			@RotateAsync(vDir.x, vDir.z);
			TMorlokIdle{};
		}
		else {
			while(true) @Hold();
		}
	}
	
	object FindPathTo(Vector vDestPosition) {
		object path;
		@FindPathTo(path, vDestPosition);
		return path;
	}
	
	void CancelActivity() {
		m_bCancel = true;
		@Stop();
		@StopGroup0();
		@StopAsync();
	}
	
	void OnAttacked(object actor) {
		CancelActivity();
		TAttack{actor};
	}
}

task TAttack : TAttackMeleeBase
{
	void init(object actor) {
		for (;;) {
			super.init(actor, true, c_fAttackDistance + 30);
			@Sleep(1);
		}
	}
	
	float GetDamageAmount(object actor, int iAttackType) {return 0.2;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
}

task TDeath : TDeathDirUsableBase
{
}
