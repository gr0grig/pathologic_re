include std.sci
include disp_idle.sci
include bgame.sci
include NPC_Birdmask.sci

maintask TDisp : TDispIdle
{
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN7_Burah_Birdmask{actor};
	}
}
