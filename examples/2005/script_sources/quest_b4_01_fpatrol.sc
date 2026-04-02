include std.sci
include path_follower.sci
include attack_melee.sci
include std2_melee_attack.sci
include death_base.sci
include item_base.sci

void OnUnload(void)
{
	@RemoveActor(self());
	@Hold();
}

void HandleDeath(object actor)
{
	TriggerActor("quest_b4_01", "patrol_dead");
	bool bAdded;
	@AddItem(bAdded, "revolver_ammo", 0, 4);
	@AddItem(bAdded, "meradorm", 0, 1);
	@AddItem(bAdded, "morfin", 0, 1);
	GenerateRandomItem("alpha_pills", 2, 3, 5);
	GenerateRandomItem("beta_pills", 2, 3, 4);
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

maintask TQuestPatrol : TPathFollower
{
	void init(void) {
		if (!IsLoaded())
			TWaitForLoad{};
		super.init(GetPropertyString("path"), 1);
	}
	
	void OnTrigger(string name) {
		if (name == "attack") {
			CancelActivity();
			TAttack{};
		}
	}
	
	void OnAttacked(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer)
			TriggerActor("quest_b4_01", "patrol_attack");
	}
}

task TAttack : TAttackMeleeBase
{
	void init(void) {
		object player;
		@FindActor(player, "player");
		if (!player)
			return;
		for (;;) {
			super.init(player, true, c_fAttackDistance + 30);
			@Sleep(1);
		}
	}

	float GetDamageAmount(object actor, int iAttackType) {return 0.2;}
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
