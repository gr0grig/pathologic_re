include std.sci
include NPC_base_disp.sci
include NPC_Klara.sci
include kgame.sci

maintask TNPC : TNPCSmartIdleBaseDisp
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
/*	if (!IsActiveDialogState()) {
		TDlg_Fl_Danko_Andrei{actor};
		return;
	}*/
	
	// meeting and first game dialog
	int iMeeting;
	@GetVariable("mt_klara2", iMeeting);
	
	if (!iMeeting) {
		TDlg_Mt_Klara_Klara2{actor}; 
		@SetVariable("mt_klara2", 1);
	}
	
	int iDay;
	@GetProperty("day", iDay);
	if (iDay == GetDay()) {
		TDlg_K2System_Klara2{actor};
	}
	else {
		TDlg_K2System_Klara2Late{actor};
	}
}