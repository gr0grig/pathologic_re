include std.sci
include NPC_Whitemask.sci
include idle.sci
include bgame.sci

maintask TWhitemask : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			super.init(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN1_Burah_WhiteMask{actor};
	}
}
