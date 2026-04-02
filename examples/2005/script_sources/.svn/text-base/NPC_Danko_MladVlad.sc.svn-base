include std.sci
include NPC_Base_Walk.sci
include NPC_MladVlad.sci
include dgame.sci

var bool bMeeting;

maintask TNPC : TNPCBaseWalk
{
	void init(void) {
		bMeeting = false;
		super.init();
	}
}

void PerformUse(object actor)
{
/*	if (!IsActiveDialogState()) {
		TDlg_Fl_Danko_MladVlad{actor};
		return;
	}*/

	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Danko_MladVlad{actor}; bMeeting = true;
	}
	
	if (IsDay(1)) {
		TDlg_DN1_Danko_MladVlad{actor}; 
		return;
	}

	if (IsDay(2)) {
		TDlg_DN2_Danko_MladVlad{actor}; 
		return;
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Danko_MladVlad{actor}; 
		return;
	}	

	if (IsDay(4)) {
		TDlg_DN4_Danko_MladVlad{actor}; 
		return;
	}	
	
	if (IsDay(5)) {
		TDlg_DN5_Danko_MladVlad{actor}; 
		return;
	}	
		
	if (IsDay(6)) {
		TDlg_DN6_Danko_MladVlad{actor}; 
		return;
	}			
	
	if (IsDay(7)) {
		TDlg_DN7_Danko_MladVlad{actor}; 
		return;
	}		
	
	if (IsDay(8)) {
		TDlg_DN8_Danko_MladVlad{actor}; 
		return;
	}	
	
	if (IsDay(9)) {
		TDlg_DN9_Danko_MladVlad{actor}; 
		return;
	}		
	
	if (IsDay(10)) {
		TDlg_DN10_Danko_MladVlad{actor}; 
		return;
	}		
	
	if (IsDay(11)) {
		TDlg_DN11_Danko_MladVlad{actor}; 
		return;
	}		
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Danko_MladVlad{actor}; 
		return;
	}	
	
	TDlg_Gag_Danko_Man{actor};		
}