include std.sci
include disp_idle.sci
include death_base.sci
include attack_melee.sci
include std_melee_attack.sci

void HandleDeath(object actor)
{
	TriggerActor("quest_d1_03", "butcher_death");
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

maintask TButcher : TDispIdleLookAsync
{
	void init(void) {
		@SensePlayerOnly(true);
		super.init(300, 100);
	}

	void OnAttacked(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer)
			TAttack{};
	}

	void OnTrigger(string name)
	{
		if (name == "trigger") {
			float fEyesHeight;
			@GetEyesHeight(fEyesHeight);
			Vector vOffset;
			vOffset.y += fEyesHeight;
			@PlayGlobalSound("growl", vOffset);
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
		@Hold();
	}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
	void OnUnload(void) {
		@RemoveActor(self());
		@Hold();
	}
}

task TDeath : TDeathDirHoldBase
{
}
