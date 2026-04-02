include std.sci
include idle.sci
include NPC_Morlok.sci
include bgame.sci

maintask TGatherer : TIdleBaseLookAsync
{
	void init(void) {
		while (true) {
			super.init(300, 100);
		}		
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN2_Burah_Gatherer{actor};
	}
}
