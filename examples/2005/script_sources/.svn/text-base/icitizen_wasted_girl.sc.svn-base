include bcitizen_handle_std.sci
include bcitizen_idle_notice.sci
include bcitizen_notice_look.sci
include bcitizen_attack_wretreat.sci
include bcitizen_pdamage_retreat.sci
include bcitizen_use_latent.sci
include bcitizen_unload_none.sci
include bcitizen_steal_attack.sci
include bcitizen_message_none.sci
include bcitizen_unholster_retreat.sci
include bcitizen_pshot_retreat.sci
include bcitizen_battle_pshot.sci
include bcitizen_heal_none.sci
include item_base.sci
include idle.sci
include game.sci
include NPC_wasted_woman.sci

const float c_fAttackNoticeDist = 500.0;
const float c_fAttackRepChange = -0.05;
const float c_fDeathRepChange = -0.1;

var bool g_bDead;

void PerformInit() 
{
	g_bDead = false;
	GenerateCitizenItems(false);
}

void PerformUse(object actor) 
{
	if (g_bDead) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive)
			HumanBarter(actor);
		return;
	}
}

void citPerformIdle()
{
	int iIdleCount = 0;
	for (;;) {
		bool bExist;
		@HasAnimation(bExist, "all", GetIdleAnimation(iIdleCount));
		if (!bExist) break;
		++iIdleCount;
	}	
	
	int nAnim;
	@irand(nAnim, iIdleCount);
	@PlayAnimation("all", GetIdleAnimation(nAnim));
	@WaitForAnimEnd();
}

void citStopIdle()
{
	@StopAnimation();
}

bool citNeedNoticeLook(void)
{
	return true;
}

bool citIsZombieEnemy(object actor)
{
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	return bPlayer;
}

int citFilterZombieAttacked(object actor)
{
	return 0;
}

void citHandleZombieAttacked(object actor)
{
}

bool citProcessPlayerDamage(object player, object actor, bool bEnemy)
{
	if (pdamageVictim(player, actor, c_fAttackNoticeDist)) {
		@SetProperty("ToDie", true);
		return true;
	}
	return false;
}

void citHandleDeath(object actor)
{
	if (IsPlayerActor(actor)) { 
		@ReportReputationChange(actor, self(), c_fDeathRepChange, true);
		GenerateCitizenItems(false);
	}	
	AddOrgans();

	g_bDead = true;
	@SetRTEnvelope(50, 40);	
}

