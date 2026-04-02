include region_follower.sci
include retreat.sci
include dgame.sci
include NPC_wasted_male.sci

var bool g_bQuestCompleted;
var bool g_bD4_Danko_wasted_male01, g_bD4_Danko_wasted_male02;

void PerformPostInit()
{
	g_bD4_Danko_wasted_male01 = false;
	g_bD4_Danko_wasted_male02 = false;
	g_bQuestCompleted = false;
}

void PerformPostUse(object actor)
{
	if (!g_bQuestCompleted) {
		if (!g_bD4_Danko_wasted_male01) {
			int iRet = TDlg_D4_Danko_wasted_male01{actor};
			D4_Danko_Quest01_WastedMaleAction();
			g_bD4_Danko_wasted_male01 = true;
			
			if (iRet == 1) {
				if (FollowInRegion(actor, true)) {
					g_bQuestCompleted = true;
					if (TFollowPlayer{actor, true}) {
						TDlg_D4_Danko_wasted_male02{actor};
						g_bD4_Danko_wasted_male02 = true;
						TRetreatPlayerAndDie{actor, true};
					}
				}
			}
			return;
		}
	}
	else {
		if (!g_bD4_Danko_wasted_male02) {
			TDlg_D4_Danko_wasted_male02{actor};
			g_bD4_Danko_wasted_male02 = true;
			D4_Danko_Quest01_WastedMaleAction();
			TRetreatPlayerAndDie{actor, true};
		}
	}
}

void citHandleUnload(void)
{
	if (IsDay(4)) {
		TWaitForLoad{};
		return;
	}

	@Trace("d4 wasted male was removed");
	@SetDeathStateAndRemove();
	@Hold();	
}


