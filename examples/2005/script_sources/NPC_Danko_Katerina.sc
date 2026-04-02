include std.sci
include NPC_idle_base.sci
include NPC_Katerina.sci
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
		TDlg_Fl_Danko_Katerina{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Danko_Katerina{actor}; bMeeting = true;
	}
	
	if (IsDay(1)) {
		TDlg_DN1_Danko_Katerina{actor}; 
		return;
	}

	if (IsDay(2)) {
		TDlg_DN2_Danko_Katerina{actor}; 
		return;
	}

	if (IsDay(3)) {
		TDlg_DN3_Danko_Katerina{actor}; 
		return;
	}

	if (IsDay(4)) {
		TDlg_DN4_Danko_Katerina{actor}; 
		return;
	}
	
	if (IsDay(5)) {
		TDlg_DN5_Danko_Katerina{actor}; 
		return;
	}	

	if (IsDay(6)) {
		TDlg_DN6_Danko_Katerina{actor}; 
		return;
	}	

	if (IsDay(10)) {
		TDlg_DN10_Danko_Katerina{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_VolonteerSmirennik{actor}; 
		return;
	}	
	
	TDlg_Gag_Danko_Woman{actor};		
}