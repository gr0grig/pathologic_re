include std.sci
include NPC_wasted_male.sci
include idle.sci
include dgame.sci

maintask TWastedGirl : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			super.init(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object actor) {
		CancelActivity();
		// TDlg_DN11_Danko_Wastedmale{actor};
	}
}
