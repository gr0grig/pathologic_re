include std.sci
include disp_idle.sci
include bgame.sci
include NPC_Wasted_Male.sci

maintask TBirdmask : TDispIdle
{
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN7_Burah_WastedMale{actor};
	}
}
