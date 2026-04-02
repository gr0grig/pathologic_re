include std.sci
include NPC_idle_base.sci
include NPC_BigVlad.sci
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
		TDlg_Fl_Burah_BigVlad{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Klara_BigVlad{actor}; bMeeting = true;
	}
	
	if (IsDay(2)) {
		TDlg_DN2_Klara_BigVlad{actor}; 
		return;
	}		
	
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}	
	
	TDlg_Gag_Klara_Man{actor};			
}