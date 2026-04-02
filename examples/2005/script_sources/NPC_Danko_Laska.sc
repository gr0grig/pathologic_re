include std.sci
include NPC_idle_base.sci
include NPC_Laska.sci
include dgame.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
/*	if (!IsActiveDialogState()) {
		//TDlg_Fl_Danko_Laska{actor};
		return;
	}*/
	
	int iMeeting;
	@GetVariable("mt_laska", iMeeting);
	
	// meeting and first game dialog
	if (!iMeeting) {
		TDlg_Mt_Danko_Laska{actor};
		@SetVariable("mt_laska", 1);
	}
	
	if (IsDay(2)) {
		TDlg_DN2_Danko_Laska{actor}; 
		return;
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Danko_Laska{actor}; 
		return;
	}	
	
	if (IsDay(6)) {
		TDlg_DN6_Danko_Laska{actor}; 
		return;
	}	

	if (IsDay(11)) {
		TDlg_DN11_Danko_Laska{actor}; 
		return;
	}
		
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}	
	
	TDlg_Gag_Danko_Woman{actor};		
}