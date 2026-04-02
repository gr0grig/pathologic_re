include std.sci
include NPC_base_disp.sci
include kgame.sci
include NPC_Burah.sci

maintask TBurah : TNPCSmartIdleBaseDisp
{
	void PerformUse(object actor) {
		TDlg_DN9_Klara_BurahTermitnik2{actor};
	}
}
