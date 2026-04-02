include std.sci
include NPC_idle_base.sci
include NPC_Anna.sci
include dgame.sci

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
		//TDlg_Fl_Danko_Anna{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Danko_Anna{actor}; bMeeting = true;
	}
	
	if (IsDay(1)) {
		TDlg_DN1_Danko_Anna{actor}; 
		bMeeting = true;
		return;
	}

	if (IsDay(2)) {
		TDlg_DN2_Danko_Anna{actor}; 
		return;
	}
		
	if (IsDay(4)) {
		TDlg_DN4_Danko_Anna{actor}; 
		return;
	}	

	if (IsDay(5)) {
		TDlg_DN5_Danko_Anna{actor}; 
		return;
	}	
		
	if (IsDay(6)) {
		TDlg_DN6_Danko_Anna{actor}; 
		return;
	}	
	
	if (IsDay(9)) {
		TDlg_DN9_Danko_Anna{actor}; 
		return;
	}	

	if (IsDay(12)) {
		TDlg_VolonteerSmirennik{actor}; 
		return;
	}		
	
	TDlg_Gag_Danko_Woman{actor};	
}