include std.sci
include NPC_idle_base.sci
include NPC_Petr.sci
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
		TDlg_Fl_Burah_Petr{actor};
		return;
	}*/
	
	int iMeeting;
	@GetVariable("mt_petr", iMeeting);
	
	// meeting and first game dialog
	if (!iMeeting) {
		TDlg_Mt_Burah_Petr{actor}; 
		@SetVariable("mt_petr", 1);
	}
	
	if (IsDay(2)) {
		TDlg_DN2_Burah_Petr{actor}; 
		return;
	}	
	
	int i12;
	@GetVariable("d12_petr", i12);
	
	if (IsDay(12) && (i12)) {
		TDlg_VolonteerUtopist{actor};
		@SetVariable("d12_petr", 1);
		return;
	}	
	
	TDlg_Gag_Burah_Man{actor};
}