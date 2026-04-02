include std.sci
include idle.sci
include attack_melee.sci
include std2_melee_attack.sci
include death_base.sci
include NPC_Patrol.sci
include dgame.sci

var bool g_bUndying;

void HandleDeath(object actor)
{
	object scene;
	@GetScene(scene);
	scene->RemoveStationaryActor(self());
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
	if (g_bUndying)
		return;
		
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

maintask TPatrol : TIdleBaseLookAsync
{
	void init(void) {
		g_bUndying = false;
		while (true)
			super.init(300, 100);
	}
	
	void OnUse(object actor) {
		CancelActivity();
		int iRet = TDlg_DN11_Danko_Officer{actor};
		if (iRet == 0) {
			g_bUndying = true;
			bool bSuccess;
			@PlayAnimation("all", "attack_begin2");
			@WaitForAnimEnd(bSuccess);
			@PlayAnimation("all", "attack_end2");
			@WaitForAnimEnd(bSuccess);
			TriggerActor("quest_d11_01", "teleport");
		}
	}
	
	void OnAttacked(object actor) {
		CancelActivity();
		TriggerActor("quest_d11_01", "soldier_attack");
		TAttack{actor};
	}
}

task TAttack : TAttackMeleeBase
{
	void init(object actor) {
		for (;;) {
			super.init(actor, true, c_fAttackDistance + 30);
			@Sleep(1);
		}
	}
	
	float GetDamageAmount(object actor, int iAttackType) {return 0.1;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
}

task TDeath : TDeathDirUsableBase
{
}
