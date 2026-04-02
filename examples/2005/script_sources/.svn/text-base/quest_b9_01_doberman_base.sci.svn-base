include std.sci
include attack_melee.sci
include std2_melee_attack.sci
include death_base.sci
include item_base.sci

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

task TQuestPatrol
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnUse(object actor) {
		if (HasDialog()) {
			DoDialog(actor);
		}
	}
	
	bool HasDialog(void) {return true;}
	
	// void DoDialog(object actor) {}

	void OnAttacked(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			TriggerActor("quest_b9_01", "factory_fight");
		}
	}
	
	void OnTrigger(string name)
	{
		if (name == "attack") {
			TAttack{};
		}
	}
}

task TAttack : TAttackMeleeBase
{
	void init(void) {
		object player;
		@FindActor(player, "player");
		if (!player)
			return;
		super.init(player, true, c_fAttackDistance + 30);
	}

	float GetDamageAmount(object actor, int iAttackType) {return 0.3;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
}

task TDeath : TDeathDirBase
{
	void init(object actor) {
		TriggerActor("quest_b9_01", "doberman_dead");
		super.init(actor);
		@SetRTEnvelope(50, 40);
		AddOrgans();
		if (IsPlayerActor(actor))
			PlayerModReputation(actor, -0.03);
		for (;;) {
			@Hold();
		}
	}
	
	void OnUse(object actor) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive)
			HumanBarter(actor);
	}
	
	void OnUnload(void) {
		@RemoveActor(self());
		@Hold();
	}
}
