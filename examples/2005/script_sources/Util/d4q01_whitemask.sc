include region_follower.sci
include retreat.sci
include dgame.sci
include NPC_whitemask.sci

var bool g_bQuestCompleted;
var bool g_bD4_Danko_whitemask01, g_bD4_Danko_whitemask02;

void PerformPostInit()
{
	g_bD4_Danko_whitemask01 = false;
	g_bD4_Danko_whitemask02 = false;
	g_bQuestCompleted = false;
}

void PerformPostUse(object actor)
{
	if (!g_bQuestCompleted) {
		if (!g_bD4_Danko_whitemask01) {
			int iRet = TDlg_D4_Danko_whitemask01{actor};
			D4_Danko_Quest01_WhitemaskAction();
			g_bD4_Danko_whitemask01 = true;
			if (iRet == 1) {
				if (FollowInRegion(actor, true)) {
					if (TFollowPlayer{actor, true}) {
						TDlg_D4_Danko_whitemask02{actor};
						g_bD4_Danko_whitemask02 = true;
						g_bQuestCompleted = true;
					}
				}
			}
			return;
		}
	}
	else {
		if (!g_bD4_Danko_whitemask02) {
			TDlg_D4_Danko_whitemask02{actor};
			g_bD4_Danko_whitemask02 = true;
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

	@Trace("d4 whitemask was removed");
	@SetDeathStateAndRemove();
	@Hold();	
}


