include std.sci
include NPC_idle_base.sci
include kgame.sci
include NPC_Notkin.sci

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
		TDlg_Fl_Burah_Notkin{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Klara_Notkin{actor}; bMeeting = true;
	}
	
	if (IsDay(1)) {
		TDlg_DN1_Klara_Notkin{actor}; 
		return;
	}		

	if (IsDay(4)) {
		TDlg_DN4_Klara_Notkin{actor}; 
		return;
	}		
	
	if (IsDay(10)) {
		TDlg_DN10_Klara_Notkin{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}	
	
	TDlg_Gag_Klara_Man{actor};		
}