include std.sci
include NPC_idle_base.sci
include NPC_Lara.sci
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
		TDlg_Fl_Burah_Lara{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Klara_Lara{actor}; bMeeting = true;
	}
	
	if (IsDay(2)) {
		TDlg_DN2_Klara_Lara{actor}; 
		return;
	}	

	if (IsDay(4)) {
		TDlg_DN4_Klara_Lara{actor}; 
		return;
	}	
	
	if (IsDay(6)) {
		TDlg_DN6_Klara_Lara{actor}; 
		return;
	}		
	
	if (IsDay(11)) {
		TDlg_DN11_Klara_Lara{actor}; 
		return;
	}
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Klara_Lara{actor}; 
		return;
	}			
	
	TDlg_Gag_Klara_Woman{actor};
}