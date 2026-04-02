include std.sci
include idle.sci
include retreat.sci
include death_base.sci
include bgame.sci
include NPC_gorbun_daughter.sci

void HandleDeath(object actor)
{
	object scene;
	@GetScene(scene);
	scene->RemoveStationaryActor(self());
	if (IsPlayerActor(actor))
		PlayerModReputation(actor, -0.1);
	@SetVariable("b5q01VeraDead", true);
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
		TDlg_DN5_Burah_Vera2{actor};
	}
	
	void OnAttacked(object actor) {
		CancelActivity();
		TRetreat{};
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
}

task TDeath : TDeathDirUsableBase
{
}
