include std.sci
include NPC_Base_Walk.sci
include NPC_MladVlad.sci
include bgame.sci

var bool bMeeting, bUtopist;

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
		TDlg_Mt_Burah_MladVlad{actor}; 
		bMeeting = true;
	}
	
	if (IsDay(1)) {
		TDlg_DN1_Burah_MladVlad{actor}; 
		return;
	}		
	
	if (IsDay(2)) {
		TDlg_DN2_Burah_MladVlad{actor}; 
		return;
	}		
	
	if (IsDay(5)) {
		TDlg_DN5_Burah_MladVlad{actor}; 
		return;
	}	

	if (IsDay(6)) {
		TDlg_DN6_Burah_MladVlad{actor}; 
		return;
	}	

	if (IsDay(8)) {
		TDlg_DN8_Burah_MladVlad{actor}; 
		return;
	}	

	if (IsDay(11)) {
		TDlg_DN11_Burah_MladVlad{actor}; 
		return;
	}		
	
	if (IsDay(12) && (!bUtopist)) {
		TDlg_VolonteerUtopist{actor};
		bUtopist = true;
		return;
	}	
	
	TDlg_Gag_Burah_Man{actor};
}