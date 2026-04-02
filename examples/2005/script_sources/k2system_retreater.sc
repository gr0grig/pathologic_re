include std.sci
include idle.sci
include retreat.sci
include attack_melee.sci
include std2_melee_attack.sci
include death_base.sci

void RemoveSelf(void) {
	object scene;
	@GetScene(scene);
	scene->RemoveStationaryActor(self());
}

void HandleDeath(object actor)
{
	if (IsPlayerActor(actor)) {
		PlayerModReputation(actor, -0.1);
	}
	RemoveSelf();
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
/*	if (strProp == "health") {
		float fHealth;
		@GetProperty("health", fHealth);
		if (fHealth <= 0) {
			@SignalDeath(actor);
		}
	}*/
}

void OnDeath(object actor)
{
	HandleDeath(actor);
}

bool FilterAttacked(object actor)
{
	return IsAccessible(actor);
}

void HandleAttacked(object actor)
{
	TAttack{actor, true};
}

maintask TRetreater : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			@Sleep(3);
			super.init(300, 100);
		}
	}
	
	void OnTrigger(string name) {
		if (name == "wonder") {
			@Sleep(1);
			object player;
			@FindActor(player, "player");
			TRetreat{player};
		}
	}
}

task TRetreat : TRetreatBase
{
	void init(object actor) {
		RemoveSelf();
		super.init(actor);
	}
	
	void OnAttacked(object actor) {
		if (FilterAttacked(actor)) {
			CancelActivity();
			HandleAttacked(actor);
		}
	}
}

task TAttack : TAttackMeleeBase
{
	void init(object actor, bool bPrepare) {
		object scene;
		@GetScene(scene);
		scene->RemoveStationaryActor(self());
		for (;;) {
			super.init(actor, bPrepare, c_fAttackDistance + 30);
			@Sleep(1);
		}
	}

	float GetDamageAmount(object actor, int iAttackType) {return 0.03;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
}

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
		super.init(actor);
	}
}
