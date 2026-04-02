include std.sci
include idle.sci
include NPC_Girl.sci
include dgame.sci

maintask TGirl : TIdleBaseLookAsync
{
	void init(void) {
		while (true) {
			@Sleep(1);
			super.init(300, 100);
		}		
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN6_Danko_girl{actor};
	}
}
