include std.sci
include death_base.sci
include attack_melee.sci
include std_melee_attack.sci
include kgame.sci

void HandleDeath(object actor)
{
	if (IsPlayerActor(actor))
		PlayerModReputation(actor, 0.05);
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

maintask TWastedMale
{
	void init(void) {
		@SensePlayerOnly(true);
		TAttack{};
		for (;;) {
			@Hold();
		}
	}
	
	void OnAttacked(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer)
			TAttack{};
	}
	
	void OnUnload(void) {
		@RemoveActor(self());
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

task TDeath : TDeathDirHoldBase
{
	void OnUnload(void) {
		@RemoveActor(self());
	}
}
