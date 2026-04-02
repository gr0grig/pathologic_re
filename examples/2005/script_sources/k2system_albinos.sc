include std.sci
include idle.sci
include kgame.sci
include NPC_Albinos.sci

maintask TQuest : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			@Sleep(1);
			super.init(300, 100);
		}
	}
	
	void OnUse(object actor) {
		CancelActivity();
		int iDay;
		@GetProperty("day", iDay);
		
		if (iDay == GetDay()) {
			int iRet = TDlg_K2System_Albinos{actor};
			if (iRet == 1) {
				// wonder
				TriggerActor("klara2_svita_positioner", "wonder");
			}
			else
			if (iRet == 2) {
				TriggerActor("klara2_svita_positioner", "wrong_wonder");
			}
		}
		else {
			TDlg_K2System_AlbinosLate{actor};
		}
	}
}
