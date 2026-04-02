include std.sci
include disp_idle.sci
include bgame.sci
include NPC_Doberman.sci

maintask TDisp : TDispIdle
{
	void OnUse(object actor) {
		TDlg_DN9_Burah_MDoberman{actor};
	}
}
