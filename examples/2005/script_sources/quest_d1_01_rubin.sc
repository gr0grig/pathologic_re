include std.sci
include NPC_base_disp.sci
include bgame.sci
include NPC_Rubin.sci

maintask TDisp : TNPCSmartIdleBaseDisp
{
	void PerformUse(object actor) {
		TDlg_DN1_Danko_RubinViktor{actor}; 
	}
}
