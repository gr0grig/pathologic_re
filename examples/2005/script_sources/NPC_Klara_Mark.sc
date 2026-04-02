include std.sci
include NPC_idle_base.sci
include NPC_Mark.sci
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
		TDlg_Fl_Burah_Mark{actor};
		return;
	}*/
	
	int iMeeting;
	@GetVariable("mt_mark", iMeeting);
	
	// meeting and first game dialog
	if (!iMeeting) {
		TDlg_Mt_Klara_Mark{actor}; 
		@SetVariable("mt_mark", 1);
	}
	
	if (IsDay(12)) {
		TDlg_VolonteerUtopist{actor};
		return;
	}		
	
	TDlg_Gag_Klara_Man{actor};	
	
}