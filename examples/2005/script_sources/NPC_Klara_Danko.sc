include std.sci
include NPC_idle_base.sci
include NPC_Danko.sci
include kgame.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
/*	if (!IsActiveDialogState()) {
		TDlg_Fl_Burah_Danko{actor};
		return;
	}*/
	
	// meeting and first game dialog
	int iMeeting;
	@GetVariable("mt_danko", iMeeting);
	
	if (!iMeeting) {
		TDlg_Mt_Klara_Danko{actor};
		@SetVariable("mt_danko", 1);
	}
	
	if (IsDay(5)) {
		TDlg_DN5_Klara_Danko{actor}; 
		return;
	}		
	
	if (IsDay(6)) {
		TDlg_DN6_Klara_Danko{actor}; 
		return;
	}		

	if (IsDay(7)) {
		TDlg_DN7_Klara_Danko{actor}; 
		return;
	}		
	
	if (IsDay(12)) {
		TDlg_DN12_Klara_Danko{actor}; 
		return;
	}	
	
	TDlg_Gag_Klara_Man{actor};	
}
