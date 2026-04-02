include region_follower.sci
include retreat.sci
include dgame.sci
include NPC_birdmask.sci

var bool g_bD4_Danko_birdmask01;

void PerformPostInit()
{
	g_bD4_Danko_birdmask01 = false;
}

void PerformPostUse(object actor)
{
	if (!IsD4_Sobor_Completed() && !g_bD4_Danko_birdmask01) {
		TDlg_D4_Danko_birdmask01{actor};
		D4_Danko_Quest01_BirdmaskAction();
		g_bD4_Danko_birdmask01 = true;
		TRetreatPlayerAndDie{actor, false};
		return;
	}
	
	TRetreatPlayerAndDie{actor, false};
}

void citHandleUnload(void)
{
	if (IsDay(4)) {
		TWaitForLoad{};
		return;
	}

	@Trace("d4 birdmask was removed");
	@SetDeathStateAndRemove();
	@Hold();	
}

