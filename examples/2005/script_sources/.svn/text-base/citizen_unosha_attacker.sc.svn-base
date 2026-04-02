include bcitizen_handle_std.sci
include bcitizen_wanderer_notice.sci
include bcitizen_notice_attack.sci
include bcitizen_attack_melee.sci
include bcitizen_pdamage_attack.sci
include bcitizen_steal_none.sci
include bcitizen_message_std.sci
include bcitizen_message_killme_attack.sci
include bcitizen_use_latent.sci
include bcitizen_unload_none.sci
include bcitizen_unholster_none.sci
include bcitizen_pshot_none.sci
include bcitizen_battle_none.sci
include bcitizen_heal_none.sci
include item_base.sci
include game.sci
include NPC_unosha.sci

const float c_fAttackNoticeDist = 700.0;
const float c_fAttackRepChange = -0.01;
const float c_fDeathRepChange = -0.04;
const float c_fMeleeDamage = 0.05;
const float c_fRepThreshold = 0.4;

var bool g_bDead;

void PerformInit() 
{
	g_bDead = false;
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
		if (!citIsNoticeEnemy(actor)) {
			if (1000 == TDlg_Ct_Unosha{actor}) {
				if (!SetTradeCamera(actor))
					return;
				TTrade{actor};
				UnsetTradeCamera(actor);
			}	
		}
	}
}

bool citIsNoticeEnemy(object actor)
{
	if (IsPlayerActor(actor)) {
		float fRep;
		actor->GetProperty("reputation", fRep);
		if (fRep < c_fRepThreshold)
			return true;
	}
	return false;
}

bool citNeedKillmeAttack(object actor) {
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