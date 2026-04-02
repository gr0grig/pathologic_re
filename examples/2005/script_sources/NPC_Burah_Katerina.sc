include std.sci
include NPC_idle_base.sci
include NPC_Katerina.sci
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
		TDlg_Fl_Burah_Katerina{actor};
		return;
	}*/

	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Burah_Katerina{actor}; 
		bMeeting = true;
	}
	
	if (IsDay(2)) {
		TDlg_DN2_Burah_Katerina{actor}; 
		return;
	}
	
	if (IsDay(8)) {
		TDlg_DN8_Burah_Katerina{actor}; 
		return;
	}	
				
	if (IsDay(10)) {
		TDlg_DN10_Burah_Katerina{actor}; 
		return;
	}
	
	if (IsDay(12) && (!bSmirennik)) {
		TDlg_VolonteerSmirennik{actor};
		bSmirennik = true;
		return;
	}	
	
	TDlg_Gag_Burah_Woman{actor};	
}