include bcitizen_handle_std.sci
include bcitizen_idle_notice.sci
include bcitizen_notice_look.sci
include bcitizen_attack_melee.sci
include bcitizen_pdamage_attack.sci
include bcitizen_use_latent.sci
include bcitizen_unload_none.sci
include bcitizen_steal_attack.sci
include bcitizen_message_none.sci
include bcitizen_unholster_none.sci
include bcitizen_pshot_notice.sci
include bcitizen_battle_none.sci
include bcitizen_heal_none.sci
include item_base.sci
include idle.sci
include game.sci
include worker_logic.sci
include NPC_worker.sci

const float c_fAttackNoticeDist = 500.0;
const float c_fAttackRepChange = -0.03;
const float c_fDeathRepChange = -0.07;
const float c_fMeleeDamage = 0.05;

var bool g_bDead;

void PerformInit() 
{
	g_bDead = false;
	GenerateCitizenItems(true);
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
	else {
		ProcessWorkerUse(actor);
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

bool citProcessPlayerDamage(object player, object actor, bool bEnemy)
{
	return pdamageRobocop(player, actor, c_fAttackNoticeDist, bEnemy);
}

void citHandleDeath(object actor)
{
	if (IsPlayerActor(actor)) { 
		@ReportReputationChange(actor, self(), c_fDeathRepChange, true);
		GenerateCitizenItems(true);
	}	
	
	AddOrgans();	

	g_bDead = true;
	@SetRTEnvelope(50, 40);
}