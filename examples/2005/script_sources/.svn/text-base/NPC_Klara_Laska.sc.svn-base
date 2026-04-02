include std.sci
include NPC_idle_base.sci
include NPC_Laska.sci
include kgame.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
/*	if (!IsActiveDialogState()) {
		TDlg_Fl_Burah_Laska{actor};
		return;
	}*/

	int iMeeting;
	@GetVariable("mt_laska", iMeeting);
	
	// meeting and first game dialog
	if (!iMeeting) {
		TDlg_Mt_Klara_Laska{actor}; 
		@SetVariable("mt_laska", 1);
	}
	
	if (IsDay(1)) {
		TDlg_DN1_Klara_Laska{actor}; 
		return;
	}	
	
	if (IsDay(2)) {
		TDlg_DN2_Klara_Laska{actor}; 
		return;
	}		
	
	if (IsDay(5)) {
		TDlg_DN5_Klara_Laska{actor}; 
		return;
	}		

	if (IsDay(6)) {
		TDlg_DN6_Klara_Laska{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}			
	
	TDlg_Gag_Klara_Woman{actor};
}
