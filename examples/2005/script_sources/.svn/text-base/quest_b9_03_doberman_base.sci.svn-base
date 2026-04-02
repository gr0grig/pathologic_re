include std.sci
include death_base.sci
include attack_melee.sci
include std_melee_attack.sci
include disp_idle.sci
include NPC_Doberman.sci
include item_base.sci

void HandleDeath(object actor)
{
	TriggerActor("quest_b9_03", "doberman_dead");
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

maintask TDoberman : TDispIdleLookAsync
{
	void init(void) {
		@SensePlayerOnly(true);
		super.init(300, 100);
	}
	
	void OnUse(object player) {
		CancelActivity();
		DoDialog(player);
	}
	
	void OnAttacked(object actor) {
		if (IsPlayerActor(actor)) {
			TriggerActor("quest_b9_03", "doberman_attack");
		}
	}
	
	void OnTrigger(string name)
	{
		if (name == "attack") {
			CancelActivity();
			TAttack{};
		}
		else {
			super.OnTrigger(name);
		}
	}
}

task TAttack : TAttackMeleeBase
{
	void init(void) {
		object player;
		@FindActor(player, "player");
		super.init(player, true, c_fAttackDistance + 30);
	}

	float GetDamageAmount(object actor, int iAttackType) {return 0.1;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}
	
	void OnUnload(void) {
		@RemoveActor(self());
	}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
	void OnUnload(void) {
		@RemoveActor(self());
	}
}

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
		GenerateRandomItem("samopal_ammo", 1, 1, 4);
		AddOrgans();
		super.init(actor);
	}
	
	void OnUnload(void) {
		@RemoveActor(self());
	}
}
