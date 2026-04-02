include std.sci
include idle.sci
include retreat.sci
include attack_melee.sci
include std2_melee_attack.sci
include death_base.sci
include NPC_Grabitel.sci
include kgame.sci

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
	TriggerActor("quest_k4_01", "grabitel_entrance_dead");
	HandleDeath(actor);
}

bool FilterAttacked(object actor)
{
	return IsAccessible(actor);
}

void HandleAttacked(object actor)
{
	TAttack{actor, true};
}

maintask TGrabitel : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			@Sleep(3);
			super.init(300, 100);
		}
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN4_Klara_GrabitelEntrance{actor};
	}
}

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
		GenerateGrabitelItems();
		super.init(actor);
	}
}
