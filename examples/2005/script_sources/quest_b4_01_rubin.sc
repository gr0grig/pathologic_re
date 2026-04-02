include std.sci
include NPC_Rubin.sci
include disp_idle.sci
include bgame.sci

maintask TRubin : TDispIdle
{
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN4_Burah_Rubin{actor};
	}
}
