include std.sci
include NPC_idle_base.sci
include NPC_Mishka.sci
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
		TDlg_Fl_Burah_Mishka{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Klara_Mishka{actor}; bMeeting = true;
	}
	
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}		
	
	TDlg_Gag_Klara_Woman{actor};
}