include std.sci
include death_base.sci
include item_base.sci

void HandleDeathBase(object actor)
{
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
	if (IsPlayerActor(actor)) {
		@ReportReputationChange(actor, self(), c_fDeathRepChange, true);
	}
	HandleDeath(actor);
}

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
		if (IsPlayerActor(actor)) {
			GenerateSoldierItems();
		}
		
		AddOrgans();
		super.init(actor);
	}
}
