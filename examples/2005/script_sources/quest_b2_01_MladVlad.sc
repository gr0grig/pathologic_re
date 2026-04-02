include std.sci
include NPC_base_disp.sci
include bgame.sci
include NPC_MladVlad.sci

maintask TBurah : TNPCSmartIdleBaseDisp
{
	void PerformUse(object actor) {
		TDlg_DN2_Burah_MladVladFactory{actor};
	}
}
