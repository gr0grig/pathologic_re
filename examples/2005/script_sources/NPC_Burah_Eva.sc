include std.sci
include NPC_idle_base.sci
include NPC_Eva.sci
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
		TDlg_Fl_Burah_Eva{actor};
		return;
	}*/
	
	int iMeeting;
	@GetVariable("mt_eva", iMeeting);

	if (!iMeeting) {
		TDlg_Mt_Burah_Eva{actor}; 
		@SetVariable("mt_eva", 1);
	}
	
	if (IsDay(1)) {
		TDlg_DN1_Burah_Eva{actor}; 
		return;
	}		

	if (IsDay(2)) {
		TDlg_DN2_Burah_Eva{actor}; 
		return;
	}	
	
	if (IsDay(9)) {
		TDlg_DN9_Burah_Eva{actor}; 
		return;
	}
	
	TDlg_Gag_Burah_Woman{actor};			
}
