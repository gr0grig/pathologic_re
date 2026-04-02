include std.sci
include actor_disp_base.sci
include death_base.sci
include attack_melee.sci
include std_melee_attack.sci

void HandleDeath(object actor)
{
	TriggerActor("quest_d4_03", "death");
	if (IsPlayerActor(actor))
		PlayerModReputation(actor, 0.03);
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

maintask TGrabitel : TDispBase
{
	void init(void) {
		@SensePlayerOnly(true);
		disable OnHear;
		disable OnSee;
		@Sleep(1.5);
		enable OnHear;
		enable OnSee;
		super.init();
	}

	void OnAttacked(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			TriggerActor("quest_d4_03", "gang_attack");
			TAttack{};
		}
	}
	
	void OnSee(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			TriggerActor("quest_d4_03", "gang_attack");
			TAttack{};
		}
	}
	
	void OnHear(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			TriggerActor("quest_d4_03", "gang_attack");
			TAttack{};
		}
	}	

	void OnTrigger(string name)
	{
		if (name == "attack") {
			TAttack{};
		}
		else {
			super.OnTrigger(name);
		}
	}
}

task TAttack : TAttackMeleeBase
{
	void init(void) {
		object player;
		@FindActor(player, "player");
		super.init(player, true, c_fAttackDistance + 30);
	}

	float GetDamageAmount(object actor, int iAttackType) {return 0.1;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical2;}

	void OnUnload(void) {
		@RemoveActor(self());
		@Hold();
	}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
	void OnUnload(void) {
		@RemoveActor(self());
		@Hold();
	}
}

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
		GenerateGrabitelItems();
		super.init(actor);
	}
	
	void OnUnload(void) {
		@RemoveActor(self());
		@Hold();
	}
}

