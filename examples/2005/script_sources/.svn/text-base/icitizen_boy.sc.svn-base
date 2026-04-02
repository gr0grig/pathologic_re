include bcitizen_handle_std.sci
include bcitizen_wanderer_notice.sci
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
include game.sci
include NPC_boy.sci

const float c_fAttackNoticeDist = 500.0;
const float c_fAttackRepChange = -0.05;
const float c_fDeathRepChange = -0.1;
const float c_fMeleeDamage = 0.03;

var bool g_bDead;

void PerformInit() 
{
	g_bDead = false;
	GenerateTeenagerTradeItems(true);
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
		if (1000 == TDlg_Ct_Boy{actor}) {
			if (!SetTradeCamera(actor))
				return;
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
	}
}

bool citNeedNoticeLook(void)
{
	return false;
}

bool citProcessPlayerDamage(object player, object actor, bool bEnemy)
{
	return pdamageRobocop(player, actor, c_fAttackNoticeDist, bEnemy);
}

void citHandleDeath(object actor)
{
	if (IsPlayerActor(actor)) { 
		@ReportReputationChange(actor, self(), c_fDeathRepChange, true);
		GenerateTeenagerItems(true);
	}
	AddOrgans();

	g_bDead = true;
	@SetRTEnvelope(50, 40);
}