include bcitizen_handle_std.sci
include bcitizen_idle_notice.sci
include bcitizen_notice_look.sci
include bcitizen_attack_wretreat.sci
include bcitizen_pdamage_retreat.sci
include bcitizen_use_latent.sci
include follow.sci
include idle.sci

var bool g_bDead, g_bRegionReached;
var int g_iRegionID;

void citPerformIdle()
{
	int iIdleCount = GetIdleAnimationCount();
	if (!iIdleCount)
		return;

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
	g_iRegionID = GetActorRegion();
	PerformPostInit();
}

bool FollowInRegion(object actor, bool bRun)
{
	while (!g_bRegionReached) {
		TFollowPlayerInRegion{actor, bRun};
	}
	
	return true;
}

void PerformUse(object actor) 
{
	if (g_bDead) {
		@WorkWithCorpse(actor);
		return;
	}
	
	PerformPostUse(actor);
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
	return false;
}

void citHandleDeath(object actor)
{
	g_bDead = true;
	@SetRTEnvelope(50, 40);	
}	

task TFollowPlayerInRegion : TFollowBase
{
	void init(object actor, bool bRun) {
		@Sleep(1);
		super.init(actor, 200, 6000, bRun, true);
	}

	bool ContinueFollow(object actor) {
		if (!IsAccessible(actor))
			return false;
		if (g_iRegionID != GetActorRegion() && GetActorRegion() != -1) {
			g_bRegionReached = true;
			return false;
		}
		return true;
	}
	
	void OnUnload() {
		CancelActivity();
		TWaitForLoad{};
	}
}

task TFollowPlayer: TFollowBase
{
	bool init(object actor, bool bRun) {
		@Sleep(0.5);
		return super.init(actor, 200, 6000, bRun, true);
	}

	void OnUnload() {
		CancelActivity();
		TWaitForLoad{};
	}
}


task TRetreatPlayerAndDie : TRetreatBase
{
	void init(object actor, bool bRun) {
		super.init(actor);
	}
	
	void OnUnload() {
		@SetDeathStateAndRemove();
		CancelActivity();
		@Hold();
	}
}