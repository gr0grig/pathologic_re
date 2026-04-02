include std.sci
include grabitel_attack.sci
include death_base.sci

void OnUnload(void)
{
	@RemoveActor(self());
	@Hold();
}

void HandleDeath(object actor)
{
	if (IsPlayerActor(actor)) {
		GenerateGrabitelItems();
		PlayerModReputation(actor, 0.03);
	}
	AddOrgans();
	TDeath{actor};
}

void HandleAttackBase(object actor)
{
}

bool FilterPlayerDamage(object player, object actor)
{
	return false;
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

maintask TQuestGrabitel
{
	void init(void) {
		@Hold();
	}
	
	void OnLoad(void) {
		TAttack{};
	}
	
	void OnTrigger(string name) {
		if (name == "cleanup") {
			@RemoveActor(self());
		}
	}
}

task TAttack : TAttackBase
{
	void init(void) {
		object player;
		@FindActor(player, "player");
		if (!player)
			return;
		for (;;) {
			super.init(player);
			@Sleep(1);
		}
	}

	float GetDamageAmount(object actor, int iAttackType) {return 0.3;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}
}

task TDeath : TDeathDirUsableBase
{
}
