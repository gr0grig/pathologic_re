include std.sci
include idle.sci
include NPC_Littlegirl.sci
include dgame.sci

maintask TLittleGirl : TIdleBaseLookAsync
{
	void init(void) {
		while (true) {
			@Sleep(1);
			super.init(300, 100);
		}		
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN6_Danko_littlegirl{actor};
	}
}
