include std.sci
include death_base.sci

void HandleDeath(object actor)
{
	TDeath{actor};
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

void OnHit(object actor, int iHitType, float fDamage, float fHit) {
	StdHandleHit(actor, iHitType, fDamage);
}

void OnHit2(object actor, int iHitType, float fDamage, float fHit, Vector vPos, Vector vDir)
{
	StdHandleHit2(actor, iHitType, fDamage, vPos, vDir);
}

task TDeath : TDeathDirBase
{
	void init(object actor) {
		disable OnUse;
		super.init(actor);
		citHandleDeath(actor);
		enable OnUse;
		for (;;) {
			@Hold();
		}
	}
	
	void OnUse(object actor) {
		int iReaction = citFilterUse(actor);
		if (iReaction > 0) {
			citHandleUse(actor);
		}
	}

	void OnUnload(void) {
		citHandleUnload();
	}
}
