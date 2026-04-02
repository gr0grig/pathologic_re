include std.sci
include NPC_Morlok.sci
include idle.sci
include kgame.sci

maintask TGatherer : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			super.init(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN7_Klara_Gatherer{actor};
	}
}

