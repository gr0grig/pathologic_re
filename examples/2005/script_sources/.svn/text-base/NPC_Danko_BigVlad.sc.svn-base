include std.sci
include NPC_base.sci
include NPC_BigVlad.sci
include dgame.sci

var bool bMeeting;

maintask TNPC : TNPCBase
{
	void init(void) {
		bMeeting = false;
		super.init();
	}
}

void PerformUse(object actor)
{
/*	if (!IsActiveDialogState()) {
		TDlg_Fl_Danko_BigVlad{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Danko_BigVlad{actor}; bMeeting = true;
	}
	
	///////////////////// nights /////////////////////
	if (IsNight(4)) {
		TDlg_DN4_Danko_BigVladNight{actor};
		return;
	}
	///////////////////// nights /////////////////////
	
	
	if (IsDay(1)) {
		TDlg_DN1_Danko_BigVlad{actor}; 
		return;
	}
	
	if (IsDay(2)) {
		TDlg_DN2_Danko_BigVlad{actor}; 
		return;
	}		
	
	if (IsDay(3)) {
		TDlg_DN3_Danko_BigVlad{actor}; 
		return;
	}	

	if (IsDay(4)) {
		TDlg_DN4_Danko_BigVlad{actor}; 
		return;
	}	
	
	if (IsDay(5)) {
		TDlg_DN5_Danko_BigVlad{actor}; 
		return;
	}	
	
	if (IsDay(6)) {
		TDlg_DN6_Danko_BigVlad{actor}; 
		return;
	}		
	
	if (IsDay(8)) {
		TDlg_DN8_Danko_BigVlad{actor}; 
		return;
	}	

	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}	
	
	TDlg_Gag_Danko_Man{actor};	
}