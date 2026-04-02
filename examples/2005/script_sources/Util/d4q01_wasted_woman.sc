include region_follower.sci
include retreat.sci
include dgame.sci
include NPC_wasted_woman.sci

var bool g_bD4_Danko_wasted_woman01;

void PerformPostInit()
{
	g_bD4_Danko_wasted_woman01 = false;
}

void PerformPostUse(object actor)
{
	if (!IsD4_Sobor_Completed() && !g_bD4_Danko_wasted_woman01) {
		TDlg_D4_Danko_wasted_woman01{actor};
		D4_Danko_Quest01_WastedWomanAction();
		g_bD4_Danko_wasted_woman01 = true;
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

	@Trace("d4 wasted woman was removed");
	@SetDeathStateAndRemove();
	@Hold();	
}

