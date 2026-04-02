include std.sci
include NPC_idle_base.sci
include NPC_Petr.sci
include kgame.sci

var bool bMeeting;

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
		TDlg_Fl_Burah_Petr{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Klara_Petr{actor}; bMeeting = true;
	}
	
	if (IsDay(5)) {
		TDlg_DN5_Klara_Petr{actor}; 
		return;
	}	
	
	if (IsDay(11)) {
		TDlg_DN11_Klara_Petr{actor}; 
		return;
	}		
	
	if (IsDay(12)) {
		TDlg_VolonteerUtopist{actor};
		return;
	}	
	
	TDlg_Gag_Klara_Man{actor};
}