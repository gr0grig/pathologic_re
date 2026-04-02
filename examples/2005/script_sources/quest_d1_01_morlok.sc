include std.sci
include disp_idle.sci
include attack_melee.sci
include std2_melee_attack.sci
include death_base.sci
include dgame.sci
include NPC_Morlok.sci

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

void OnUnload(void)
{
	@RemoveActor(self());
	@Hold();
}

maintask TWorker : TDispIdle
{
	void OnUse(object actor) {
		CancelActivity();
		TDlg_CS_D1Eva_Morlok{actor};
	}

	void OnAttacked(object actor) {
//		CancelActivity();
//		Remove();
//		TAttack{actor};
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			TriggerActor("quest_d1_01", "attack");
		}
	}
	
	void OnTrigger(string name)
	{
		if (name == "attack") {
			CancelActivity();
			TAttack{GetPlayerActor()};
		}
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
