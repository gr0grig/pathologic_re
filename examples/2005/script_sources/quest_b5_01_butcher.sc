include std.sci
include death_base.sci
include attack_melee.sci
include std_melee_attack.sci
include bgame.sci
include idle.sci
include NPC_Butcher.sci

void HandleDeath(object actor)
{
	object scene;
	@GetScene(scene);
	scene->RemoveStationaryActor(self());
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

maintask TButcher : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			@Sleep(3);
			super.init(300, 100);
		}	
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN5_Burah_Butcher{actor};
	}

	void OnAttacked(object actor) {
		TriggerActor("quest_b5_01", "butcher_attack");
	}

	void OnTrigger(string name)
	{
		if (name == "attack") {
			CancelActivity();
			TAttack{};
		}
	}
}

task TAttack : TAttackMeleeBase
{
	void init(void) {
		object scene;
		@GetScene(scene);
		scene->RemoveStationaryActor(self());
		object player;
		@FindActor(player, "player");
		for (;;) {
			super.init(player, true, c_fAttackDistance + 30);
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
