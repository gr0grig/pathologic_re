include std.sci
include NPC_idle_base.sci
include NPC_Laska.sci
include bgame.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
/*	if (!IsActiveDialogState()) {
		TDlg_Fl_Burah_Laska{actor};
		return;
	}*/
	
	int iMeeting;
	@GetVariable("mt_laska", iMeeting);
	
	// meeting and first game dialog
	if (!iMeeting) {
		TDlg_Mt_Burah_Laska{actor}; 
		@SetVariable("mt_laska", 1);
	}
	
	if (IsDay(1)) {
		TDlg_DN1_Burah_Laska{actor}; 
		return;
	}
	
	if (IsDay(6)) {
		TDlg_DN6_Burah_Laska{actor}; 
		return;
	}		

	if (IsDay(12)) {
		TDlg_Vol_DN12_Burah_Laska{actor}; 
		return;
	}		
	
	TDlg_Gag_Burah_Woman{actor};	
}
