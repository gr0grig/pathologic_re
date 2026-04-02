include std.sci
include NPC_base_disp.sci
include dgame.sci
include NPC_Klara.sci

maintask TKlara : TNPCSmartIdleBaseDisp
{
	void PerformUse(object actor) {
		TDlg_DN11_Danko_Klara{actor};
	}
}
