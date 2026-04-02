include std.sci
include bgame.sci
include NPC_LittleGirl.sci
include disp_idle.sci

maintask TLittleGirl : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN12_Burah_Littlegirl{actor};
	}
}
