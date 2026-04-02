include std.sci
include NPC_idle_base.sci
include NPC_Julia.sci
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
		TDlg_Fl_Burah_Julia{actor};
		return;
	}*/

	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Burah_Julia{actor}; 
		bMeeting = true;
	}
	
	if (IsDay(12) && (!bSmirennik)) {
		TDlg_VolonteerSmirennik{actor};
		bSmirennik = true;
		return;
	}	
	
	TDlg_Gag_Burah_Woman{actor};	
}