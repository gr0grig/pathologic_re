include std.sci
include disp_idle.sci
include NPC_Sanitar.sci
include bgame.sci

maintask TGirl : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN11_Burah_SanitarMain{actor};
	}
}
