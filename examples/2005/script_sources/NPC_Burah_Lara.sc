include std.sci
include NPC_idle_base.sci
include NPC_Lara.sci
include bgame.sci

var bool bMeeting, bSmirennik;

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		bMeeting = false;
		super.init();
	}
}

void PerformUse(object actor)
{
/*	if (!IsActiveDialogState()) {
		TDlg_Fl_Burah_Lara{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Burah_Lara{actor}; 
		bMeeting = true;
	}
	
	if (IsDay(4)) {
		TDlg_DN4_Burah_Lara{actor}; 
		return;
	}	

	if (IsDay(8)) {
		TDlg_DN8_Burah_Lara{actor}; 
		return;
	}	
	
	if (IsDay(10)) {
		TDlg_DN10_Burah_Lara{actor}; 
		return;
	}	
	
	if (IsDay(12) && (!bSmirennik)) {
		TDlg_VolonteerSmirennik{actor};
		bSmirennik = true;
		return;
	}	
	
	TDlg_Gag_Burah_Woman{actor};	
}