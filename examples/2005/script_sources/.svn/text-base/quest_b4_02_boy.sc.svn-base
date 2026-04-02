include std.sci
include NPC_Boy.sci
include idle.sci
include death_base.sci
include points_follower.sci
include attack_melee.sci
include std2_melee_attack.sci
include bgame.sci

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
	if (IsPlayerActor(actor))
		PlayerModReputation(actor, -0.1);
	HandleDeath(actor);	
}

maintask TBoy : TIdleBase
{
	void init(void) {
		for (;;) {
			super.init();
			@Sleep(3);
		}
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN4_Burah_Boy{actor};
	}
	
	void OnTrigger(string name) {
		if (name == "run") {
			TRun{};
		}
	}
	
	void OnAttacked(object actor) {
		CancelActivity();
		TAttack{actor};
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
}

task TRun : TPointsFollower
{
	void init(void) {
		object scene;
		@GetScene(scene);
		scene->RemoveStationaryActor(self());
		super.init("pt_b4q02_boy_path", 0, true);
	}

	void OnAttacked(object actor) {
		CancelActivity();
		TAttack{actor};
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
}

task TAttack : TAttackMeleeBase
{
	void init(object actor) {
		object scene;
		@GetScene(scene);
		scene->RemoveStationaryActor(self());
		for (;;) {
			super.init(actor, true, c_fAttackDistance + 30);
			@Sleep(1);
		}
	}
	
	float GetDamageAmount(object actor, int iAttackType) {return 0.03;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
}

task TDeath : TDeathDirUsableBase
{
}
