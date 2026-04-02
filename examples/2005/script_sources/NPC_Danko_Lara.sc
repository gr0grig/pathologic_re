include std.sci
include NPC_idle_base.sci
include NPC_Lara.sci
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
		TDlg_Fl_Danko_Lara{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Danko_Lara{actor}; bMeeting = true;
	}
	
	///////////////////// nights /////////////////////
	if (IsNight(2)) {
		TDlg_DN2_Danko_LaraNight{actor}; // to prevent initiation of quest d2q03
		return;
	}
	
	if (IsDay(1)) {
		TDlg_DN1_Danko_Lara{actor}; 
		return;
	}

	if (IsDay(2)) {
		TDlg_DN2_Danko_Lara{actor}; 
		return;
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Danko_Lara{actor}; 
		return;
	}	

	if (IsDay(4)) {
		TDlg_DN4_Danko_Lara{actor}; 
		return;
	}

	if (IsDay(5)) {
		TDlg_DN5_Danko_Lara{actor}; 
		return;
	}

	if (IsDay(6)) {
		TDlg_DN6_Danko_Lara{actor}; 
		return;
	}
	
	if (IsDay(8)) {
		TDlg_DN8_Danko_Lara{actor}; 
		return;
	}	
	
	if (IsDay(9)) {
		TDlg_DN9_Danko_Lara{actor}; 
		return;
	}	

	if (IsDay(10)) {
		TDlg_DN10_Danko_Lara{actor}; 
		return;
	}
		
	if (IsDay(12)) {
		TDlg_VolonteerSmirennik{actor}; 
		return;
	}	
	
	TDlg_Gag_Danko_Woman{actor};		
}