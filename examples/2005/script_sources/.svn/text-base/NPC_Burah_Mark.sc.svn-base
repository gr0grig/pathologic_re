include std.sci
include NPC_idle_base.sci
include NPC_Mark.sci
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
		TDlg_Fl_Burah_Mark{actor};
		return;
	}*/
	
	int iMeeting;
	@GetVariable("mt_mark", iMeeting);
	
	// meeting and first game dialog
	if (!iMeeting) {
		TDlg_Mt_Burah_Mark{actor}; 
		@SetVariable("mt_mark", 1);
	}
	
	int i12;
	@GetVariable("d12_mark", i12);
	
	if (IsDay(12) && (!i12)) {
		TDlg_VolonteerUtopist{actor};
		@SetVariable("d12_mark", 1);
		return;
	}	
	
	TDlg_Gag_Burah_Man{actor};	
}