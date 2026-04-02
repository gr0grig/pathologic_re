include std.sci
include NPC_Base_Walk.sci
include NPC_MladVlad.sci
include kgame.sci

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
		//TDlg_Fl_Burah_MladVlad{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Klara_MladVlad{actor}; bMeeting = true;
	}
	
	if (IsDay(2)) {
		TDlg_DN2_Klara_MladVlad{actor}; 
		return;
	}		

	if (IsDay(3)) {
		TDlg_DN3_Klara_MladVlad{actor}; 
		return;
	}		
	
	if (IsDay(5)) {
		TDlg_DN5_Klara_MladVlad{actor}; 
		return;
	}	
	
	if (IsDay(6)) {
		TDlg_DN6_Klara_MladVlad{actor}; 
		return;
	}
	
	if (IsDay(12)) {
		TDlg_VolonteerUtopist{actor};
		return;
	}	
	
	TDlg_Gag_Klara_Man{actor};		
			
}