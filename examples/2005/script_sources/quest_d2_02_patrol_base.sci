include std.sci
include stationary_base.sci
include attack_melee.sci
include std2_melee_attack.sci
include death_base.sci
include item_base.sci

var bool g_bWasAttacked;

void OnAttacked(object actor) {
	if (g_bWasAttacked)
		return;
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	if (bPlayer) {
		g_bWasAttacked = true;
		TriggerActor("quest_d2_02", "player_attack");
	}
}

void OnUnload(void)
{
	TriggerActor("quest_d2_02", c_strName + "_unload");
}

void HandleDeath(object actor)
{
	bool bAdded;
	@AddItem(bAdded, "revolver_ammo", 0, 2);
	@AddItem(bAdded, "alpha_pills", 0, 2);
	if (IsPlayerActor(actor))
		PlayerModReputation(actor, -0.15);
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

task TQuestPatrol : TStationaryBase
{
	void init(void) {
		g_bWasAttacked = false;
		super.init();
	}

	void DoSomething(void) {}
	
	void OnUse(object actor) {
		if (HasDialog()) {
			CancelActivity();
			DoDialog(actor);
		}
	}
	
	void OnTrigger(string name) {
		if (name == "kill_player") {
			TAttack{};
		}
	}
	
	bool HasDialog(void) {return true;}
	
	// void DoDialog(object actor) {}

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
		super.init(actor);
		@SetRTEnvelope(50, 40);
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
}
