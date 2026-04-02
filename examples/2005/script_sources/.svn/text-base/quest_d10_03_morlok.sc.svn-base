include std.sci
include disp_idle.sci
include dgame.sci
include NPC_Morlok.sci

maintask TMorlok : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN10_Danko_Morlok{actor};
	}
}
