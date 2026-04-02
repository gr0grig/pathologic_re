include std.sci
include NPC_idle_base.sci
include NPC_Mat.sci
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
		//TDlg_Fl_Burah_Mat{actor};
		return;
	}*/

	int iMeeting;
	@GetVariable("mt_mat", iMeeting);
	
	if (!iMeeting) {
		TDlg_Mt_Burah_Mat{actor}; 
		@SetVariable("mt_mat", 1);
	}
	
	if (IsDay(7)) {
		TDlg_DN7_Burah_Mat{actor}; 
		return;
	}	

	if (IsDay(8)) {
		TDlg_DN8_Burah_Mat{actor}; 
		return;
	}	

	if (IsDay(10)) {
		TDlg_DN10_Burah_Mat{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Burah_Mat{actor}; 
		return;
	}		
	
	TDlg_Gag_Burah_Woman{actor};	
}