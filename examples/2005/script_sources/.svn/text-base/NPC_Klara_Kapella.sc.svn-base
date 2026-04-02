include std.sci
include NPC_idle_base.sci
include NPC_Kapella.sci
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
		TDlg_Fl_Burah_Kapella{actor};
		return;
	}*/

	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Klara_Kapella{actor}; bMeeting = true;
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Klara_Kapella{actor}; 
		return;
	}		
	
	if (IsDay(5)) {
		TDlg_DN5_Klara_Kapella{actor}; 
		return;
	}	
	
	if (IsDay(6)) {
		TDlg_DN6_Klara_Kapella{actor}; 
		return;
	}		
	
	if (IsDay(7)) {
		TDlg_DN7_Klara_Kapella{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}			
	
	TDlg_Gag_Klara_Woman{actor};
}