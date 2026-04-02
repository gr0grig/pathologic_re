include std.sci
include NPC_idle_base.sci
include NPC_Mishka.sci
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
		TDlg_Fl_Burah_Mishka{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Burah_Mishka{actor}; 
		bMeeting = true;
	}
	
	if (IsDay(1)) {
		TDlg_DN1_Burah_Mishka{actor}; 
		return;
	}		
	
	if (IsDay(8)) {
		TDlg_DN8_Burah_Mishka{actor}; 
		return;
	}	

	if (IsDay(10)) {
		TDlg_DN10_Burah_Mishka{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Burah_Mishka{actor}; 
		return;
	}		
	
	TDlg_Gag_Burah_Woman{actor};	
}