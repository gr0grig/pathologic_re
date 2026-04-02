include std.sci
include NPC_idle_base.sci
include NPC_Han.sci
include bgame.sci

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
		TDlg_Fl_Burah_Han{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Burah_Han{actor}; 
		bMeeting = true;
	}
	
	if (IsDay(11)) {
		TDlg_DN11_Burah_Han{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Burah_Han{actor}; 
		return;
	}
	
	TDlg_Gag_Burah_Man{actor};		
}