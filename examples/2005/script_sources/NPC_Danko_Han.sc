include std.sci
include NPC_idle_base.sci
include NPC_Han.sci
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
		TDlg_Fl_Danko_Han{actor};
		return;
	}*/
	
	// meeting and first game dialog
	int iMeeting;
	@GetVariable("mt_han", iMeeting);
	
	
	// meeting and first game dialog
	if (!iMeeting) {
		TDlg_Mt_Danko_Han{actor};
		@SetVariable("mt_han", 1);
	}

	if (IsDay(1)) {
		return;		
	}

	if (IsDay(3)) {
		TDlg_DN3_Danko_Han{actor};
		return;		
	}

	if (IsDay(7)) {
		TDlg_DN7_Danko_Han{actor};
		return;		
	}
		
	if (IsDay(8)) {
		TDlg_DN8_Danko_Han{actor};
		return;		
	}	
	
	if (IsDay(9)) {
		TDlg_DN9_Danko_Han{actor};
		return;		
	}		
	
	if (IsDay(11)) {
		TDlg_DN11_Danko_Han{actor}; 
		return;
	}		
	
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}	
	
	TDlg_Gag_Danko_Man{actor};	
}