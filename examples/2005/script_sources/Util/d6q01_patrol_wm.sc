include bcitizen_handle_std.sci
include bcitizen_idle_notice.sci
include bcitizen_notice_look.sci
include bcitizen_attack_melee.sci
include bcitizen_pdamage_attack.sci
include bcitizen_use_latent.sci
include idle.sci
include dgame.sci
include NPC_Patrol.sci

var bool g_bDead;

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
			@WorkWithCorpse(actor);
		return;
	}
	//TDlg_D6_Danko_wasted_male01{actor};
}

bool citNeedNoticeLook(void)
{
	return true;
}

void citHandleUnload(void)
{
	if (IsDay(6)) {
		TWaitForLoad{};
		return;
	}

	@Trace("d6 patrol wasted male was removed");
	@SetDeathStateAndRemove();
	@Hold();	
}

void citHandleDeath(object actor)
{
	g_bDead = true;
	@SetRTEnvelope(50, 40);	
}	

bool citProcessPlayerDamage(object player, object actor, bool bEnemy)
{
	string strClass;
	if (HasProperty(actor, "d6q01_patrol_ww"))
		return true;
	
	return false;
}