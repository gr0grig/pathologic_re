include std.sci
include idle.sci
include stationary_base.sci
include attack_melee.sci
include std2_melee_attack.sci
include death_base.sci
include NPC_Patrol.sci
include bgame.sci

bool IsToAttack(void) {
	int iVal;
	@GetVariable("b1q05ToAttack1", iVal);
	return (iVal != 0);
}

void MarkAttack(void) {
	@SetVariable("b1q05ToAttack1", 1);
}

void HandleDeath(object actor)
{
	object scene;
	@GetScene(scene);
	scene->RemoveStationaryActor(self());
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

maintask TPatrol : TIdleBaseLookAsync
{
	void init(void) {
		while (true)
			super.init(300, 100);
	}

	void OnUse(object actor) {
		CancelActivity();
		if (IsToAttack()) {
			TAttack{actor};
		}
		TDlg_DN1_Burah_PatrolGroup{actor};
		TriggerActor("quest_b1_05", "attack");
	}
	
	void OnSee(object actor) {
		if (IsToAttack() && IsPlayerActor(actor)) {
			TriggerActor("quest_b1_05", "attack");
		}
	}
	
	void OnHear(object actor) {
		if (IsToAttack() && IsPlayerActor(actor)) {
			TriggerActor("quest_b1_05", "attack");
		}
	}

	void OnAttacked(object actor) {
		TriggerActor("quest_b1_05", "attack");
	}
	
	void OnTrigger(string name) {
		if (name == "attack") {
			CancelActivity();
			MarkAttack();
			object actor;
			@FindActor(actor, "player");
			if (IsAccessible(actor))
				TAttack{actor};
		}
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
	
	float GetDamageAmount(object actor, int iAttackType) {return 0.1;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
}

task TDeath : TDeathDirUsableBase
{
}
