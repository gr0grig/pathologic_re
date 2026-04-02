include std.sci
include disp_idle.sci
include bgame.sci
include NPC_Rat_Prophet.sci

maintask TProrok : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN5_Burah_RatProphet{actor};
	}
}
