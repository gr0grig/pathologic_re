include std.sci
include disp_idle.sci
include bgame.sci
include NPC_Morlok.sci

maintask TDisp : TDispIdle
{
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN7_Burah_Morlok{actor};
	}
}
