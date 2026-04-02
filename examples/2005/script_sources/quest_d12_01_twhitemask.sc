include std.sci
include disp_idle.sci
include dgame.sci
include NPC_Whitemask.sci

maintask TWhitemask : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN12_Danko_TWhitemask{actor};
	}
}
