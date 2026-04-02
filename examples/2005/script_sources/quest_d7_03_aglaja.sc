include std.sci
include NPC_base_disp.sci
include dgame.sci
include NPC_Aglaja.sci

maintask TDisp : TNPCSmartIdleBaseDisp
{
	void PerformUse(object actor) {
		TDlg_DN7_Danko_AglajaPetr{actor};
	}
}
