include bcitizen_handle_std.sci
include bcitizen_wanderer_notice.sci
include bcitizen_notice_look.sci
include bcitizen_attack_wretreat.sci
include bcitizen_pdamage_retreat.sci
include bcitizen_steal_none.sci
include bcitizen_message_none.sci
include bcitizen_use_latent.sci
include bcitizen_unload_none.sci
include bcitizen_unholster_none.sci
include bcitizen_pshot_retreat.sci
include bcitizen_battle_none.sci
include bcitizen_heal_none.sci
include item_base.sci
include NPC_dohodyaga.sci

var bool g_bDead, g_bRep;

const float c_fAttackNoticeDist = 700.0;
const float c_fAttackRepChange = -0.02;
const float c_fDeathRepChange = -0.03;

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
	else  {
		if (g_bRep)
			return;
			
		int iReply = TDlg_Ct_Dohodyaga{actor};
		if (iReply == -1)
			return;
			
		g_bRep = true;
		float fChange = iReply / 10000.0;
		int iDay = GetDay();
		if (iDay == 1)
			iReply *= 500 / 150;
		else
		if (iDay == 2)
			fChange *= 500 / 1500;
		else
		if (iDay == 3)
			fChange *= 500 / 750;
		else
		if (iDay == 4)
			fChange *= 500 / 400;
		else
		if (iDay == 5)
			fChange *= 500 / 600;
		else
		if (iDay == 6)
			fChange *= 500 / 1000;
		else
		if (iDay == 7)
			fChange *= 500 / 500;
		else
		if (iDay == 8)
			fChange *= 500 / 600;
		else
		if (iDay == 9)
			fChange *= 500 / 1500;
		else
		if (iDay == 10)
			fChange *= 500 / 1350;
		else
		if (iDay == 11)
			fChange *= 500 / 1200;
		else
		if (iDay == 12)
			fChange *= 500 / 1000;
		
		PlayerModReputation(actor, fChange);
		PlayerAddMoney(actor, -iReply);
	}
}

bool citNeedNoticeLook(void)
{
	return false;
}

bool citProcessPlayerDamage(object player, object actor, bool bEnemy)
{
	return pdamageVictim(player, actor, c_fAttackNoticeDist);
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