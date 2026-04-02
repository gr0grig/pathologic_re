include std.sci
include wanderer_base.sci
include idle.sci
include retreat.sci
include death_base.sci
include dgame.sci
include NPC_littleboy.sci

void HandleDeath(object actor)
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
	HandleDeath(actor);
}

bool FilterAttacked(object actor)
{
	return IsAccessible(actor);
}

void HandleAttacked(object actor)
{
	TRetreat{actor};
}

void OnAttacked(object actor)
{
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	if (bPlayer)
		TriggerActor("quest_d3_03", "boy_attacked");
}

maintask TBoy
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnUse(object actor) {
		TDlg_DN3_Danko_littleboy{actor};
		TWander{};
	}
}

task TWander : TWanderBase
{
	void init(void) {
		TriggerActor("quest_d3_03", "boy_free");
		@SetProperty("noaccess", 0);
		for (;;) {
			super.init();
		}
	}
	
	bool GetFollowRunMode(void) {return true;}
	
	void OnAttacked(object actor) {
		if (FilterAttacked(actor)) {
			CancelActivity();
			HandleAttacked(actor);
		}
	}
}

task TIdle : TIdleBase
{
	void OnAttacked(object actor) {
		if (FilterAttacked(actor)) {
			CancelActivity();
			HandleAttacked(actor);
		}
	}
}

task TRetreat : TRetreatBase
{
}

task TDeath : TDeathDirHoldBase
{
}
