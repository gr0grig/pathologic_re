include std.sci
include NPC_idle_base.sci
include NPC_Julia.sci
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
		TDlg_Fl_Burah_Julia{actor};
		return;
	}*/

	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Klara_Julia{actor}; bMeeting = true;
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Klara_Julia{actor}; 
		return;
	}		
	
	if (IsDay(6)) {
		TDlg_DN6_Klara_Julia{actor}; 
		return;
	}	

	if (IsDay(11)) {
		TDlg_DN11_Klara_Julia{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Klara_Julia{actor}; 
		return;
	}			
	
	TDlg_Gag_Klara_Woman{actor};
}