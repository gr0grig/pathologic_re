include std.sci
include idle.sci
include NPC_Unosha.sci
include dgame.sci

maintask TUnosha : TIdleBaseLookAsync
{
	void init(void) {
		while (true) {
			@Sleep(1);
			super.init(300, 100);
		}		
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN6_Danko_unosha{actor};
	}
}
