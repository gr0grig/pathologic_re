include std.sci
include NPC_idle_base.sci
include bgame.sci
include NPC_Notkin.sci

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
		TDlg_Fl_Burah_Notkin{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Burah_Notkin{actor}; 
		bMeeting = true;
	}

	if (IsDay(1)) {
		TDlg_DN1_Burah_Notkin{actor}; 
		return;
	}

	if (IsDay(2)) {
		TDlg_DN2_Burah_Notkin{actor}; 
		return;
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Burah_Notkin{actor}; 
		return;
	}
	
	if (IsDay(4)) {
		TDlg_DN4_Burah_Notkin{actor}; 
		return;
	}	

	if (IsDay(5)) {
		TDlg_DN5_Burah_Notkin{actor}; 
		return;
	}	

	if (IsDay(6)) {
		TDlg_DN6_Burah_Notkin{actor}; 
		return;
	}	
	
	if (IsDay(7)) {
		TDlg_DN7_Burah_Notkin{actor}; 
		return;
	}	
	
	if (IsDay(8)) {
		TDlg_DN8_Burah_Notkin{actor}; 
		return;
	}	
	
	if (IsDay(9)) {
		TDlg_DN9_Burah_Notkin{actor}; 
		return;
	}	
	
	if (IsDay(10)) {
		TDlg_DN10_Burah_Notkin{actor}; 
		return;
	}		
	
	if (IsDay(11)) {
		TDlg_DN11_Burah_Notkin{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Burah_Notkin{actor}; 
		return;
	}	
	
	TDlg_Gag_Burah_Man{actor};
}