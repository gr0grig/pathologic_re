include std.sci
include NPC_idle_base.sci
include NPC_Mat.sci
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
		//TDlg_Fl_Burah_Mat{actor};
		return;
	}*/
	
	if (!bMeeting) {
		TDlg_Mt_Klara_Mat{actor}; bMeeting = true;
	}
	
	if (IsDay(8)) {
		TDlg_DN8_Klara_Mat{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}		
	
	TDlg_Gag_Klara_Woman{actor};
}