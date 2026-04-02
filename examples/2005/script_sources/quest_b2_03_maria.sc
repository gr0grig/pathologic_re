include std.sci
include NPC_base_disp.sci
include bgame.sci
include NPC_Maria.sci

maintask TDisp : TNPCSmartIdleBaseDisp
{
	void PerformUse(object actor) {
		TDlg_DN2_Burah_MariaKabak{actor}; 
	}
}
