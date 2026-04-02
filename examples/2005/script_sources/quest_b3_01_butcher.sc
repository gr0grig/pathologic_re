include std.sci
include NPC_Butcher.sci
include disp_idle.sci
include bgame.sci

maintask TButcher : TDispIdle
{
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN3_Burah_Butcher{actor};
	}
}
