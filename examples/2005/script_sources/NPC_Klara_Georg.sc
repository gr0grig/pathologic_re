include std.sci
include NPC_idle_base.sci
include NPC_Georg.sci
include kgame.sci

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
		TDlg_Fl_Burah_Georg{actor};
		return;
	}*/

	if (!bMeeting) {
		TDlg_Mt_Klara_Georg{actor}; bMeeting = true;
	}
	
	if (IsDay(1)) {
		TDlg_DN1_Klara_Georg{actor}; 
		return;
	}		

	if (IsDay(3)) {
		TDlg_DN3_Klara_Georg{actor}; 
		return;
	}		
	
	if (IsDay(5)) {
		TDlg_DN5_Klara_Georg{actor}; 
		return;
	}		

	if (IsDay(9)) {
		TDlg_DN9_Klara_Georg{actor}; 
		return;
	}
		
	if (IsDay(10)) {
		TDlg_DN10_Klara_Georg{actor}; 
		return;
	}			
	
	if (IsDay(12)) {
		TDlg_VolonteerUtopist{actor};
		return;
	}
	
	TDlg_Gag_Klara_Man{actor};			
	
}