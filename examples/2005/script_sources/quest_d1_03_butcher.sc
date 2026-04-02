include std.sci
include death_base.sci
include attack_melee.sci
include std_melee_attack.sci
include dgame.sci
include NPC_Butcher.sci

void FailQuest(void)
{
	@RemoveActor(self());
	TriggerActor("quest_d1_03", "butcher_fail");
}

void HandleDeath(object actor)
{
	TriggerActor("quest_d1_03", "butcher_death");
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

maintask TButcher
{
	var bool m_bToBeRemoved;

	void init(void) {
		m_bToBeRemoved = false;
		@SensePlayerOnly(true);
		for (;;) {
			@Hold();
		}
	}
	
	void OnUse(object player) {
		TDlg_DN1_Danko_Butcher{player};
		TAttack{};
	}
	
	void OnAttacked(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer)
			TAttack{};
	}
	
	void OnTrigger(string name)
	{
		if (name == "cleanup") {
			m_bToBeRemoved = true;
			bool bLoaded;
			@IsLoaded(bLoaded);
			if (!bLoaded)
				@RemoveActor(self());
		}
	}

	void OnUnload(void) {
		if (m_bToBeRemoved)
			@RemoveActor(self());
	}
}

task TAttack : TAttackMeleeBase
{
	void init(void) {
		TriggerActor("quest_d1_03", "butcher_battle");
		object player;
		@FindActor(player, "player");
		super.init(player, true, c_fAttackDistance + 30);
		FailQuest();
	}

	float GetDamageAmount(object actor, int iAttackType) {return 0.1;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}
	
	void OnUnload(void) {
		FailQuest();
		@Hold();
	}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
	void OnUnload(void) {
		FailQuest();
		@Hold();
	}
}

task TDeath : TDeathDirHoldBase
{
	void OnUnload(void) {
		@RemoveActor(self());
	}
}
