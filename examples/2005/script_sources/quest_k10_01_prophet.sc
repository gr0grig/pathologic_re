include std.sci
include NPC_rat_prophet.sci
include idle.sci
include kgame.sci

maintask TProphet : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			super.init(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN10_Klara_RatProphet{actor};
	}
}

