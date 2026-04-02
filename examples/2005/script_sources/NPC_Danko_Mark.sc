include std.sci
include NPC_idle_base.sci
include NPC_Mark.sci
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
		TDlg_Fl_Danko_Mark{actor};
		return;
	}*/
	
	int iMeeting;
	@GetVariable("mt_mark", iMeeting);
	
	// meeting and first game dialog
	if (!iMeeting) {
		TDlg_Mt_Danko_Mark{actor}; 
		@SetVariable("mt_mark", 1);
	}
	
	if (IsDay(1)) {
		//TDlg_DN1_Danko_Mark{actor}; 
		return;		
	}

	if (IsDay(2)) {
		TDlg_DN2_Danko_Mark{actor}; 
		return;		
	}	
	
	if (IsDay(4)) {
		TDlg_DN4_Danko_Mark{actor}; 
		return;		
	}		
	
	if (IsDay(7)) {
		TDlg_DN7_Danko_Mark{actor}; 
		return;		
	}		

	if (IsDay(8)) {
		TDlg_DN8_Danko_Mark{actor}; 
		return;		
	}		
	
	if (IsDay(10)) { // d10q03
		TDlg_DN10_Danko_Mark{actor}; 
		return;		
	}	
	
	if (IsDay(12)) { // d10q03
		TDlg_Vol_DN12_Danko_Mark{actor}; 
		return;		
	}		
	
	TDlg_Gag_Danko_Man{actor};	
}