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
	@SetProperty("dead", 1);
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

maintask TMorlokIdle : TIdleBase 
{
	void init(void) {
		disable OnSee;
		disable OnHear;
		@Sleep(3);
		enable OnSee;
		enable OnHear;		
		while (true) {
			super.init();
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
