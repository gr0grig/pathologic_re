include std.sci
include disp_idle.sci
include NPC_officer.sci
include bgame.sci

maintask TOfficer : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN11_Burah_Officer{actor};
	}
}
