include std.sci
include idle.sci
include death_base.sci
include retreat.sci
include bgame.sci
include NPC_gatherer_wife.sci

void HandleDeath(object actor)
{
	object scene;
	@GetScene(scene);
	scene->RemoveStationaryActor(self());
	@SetVariable("b5q01NudeDead", true);
	TriggerActor("quest_b5_01", "gwife_dead");
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

void OnDeath(object actor)
{
	HandleDeath(actor);
}

maintask TVera : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			super.init(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN5_Burah_GathererWife{actor};
	}
	
	void OnAttacked(object actor) {
		@SignalDeath(actor);
	}
	
	void OnTrigger(string name) {
		if (name == "retreat") {
			CancelActivity();
			TRetreat{};
		}
	}
}

task TRetreat : TRetreatBase
{
	void init(void) {
		object scene;
		@GetScene(scene);
		scene->RemoveStationaryActor(self());
		for (;;) {
			super.init(GetPlayerActor());
			@Sleep(1);
		}
	}

	void OnAttacked(object actor) {
		@SignalDeath(actor);
	}
}

task TDeath : TDeathDirUsableBase
{
}
