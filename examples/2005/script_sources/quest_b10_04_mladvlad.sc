include std.sci
include NPC_base_disp.sci
include bgame.sci
include NPC_MladVlad.sci

maintask TDisp : TNPCSmartIdleBaseDisp
{
	void PerformUse(object actor) {
		TDlg_DN10_Burah_MladVlad{actor};
	}
}
