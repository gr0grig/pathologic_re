include std.sci
include NPC_idle_base.sci
include NPC_Spi4ka.sci
include dgame.sci

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
		TDlg_Fl_Danko_Spi4ka{actor};
		return;
	}*/
	
	int iMeeting;
	@GetVariable("mt_spi4ka", iMeeting);
	
	// meeting and first game dialog
	if (!iMeeting) {
		TDlg_Mt_Danko_Spi4ka{actor};
		@SetVariable("mt_spi4ka", 1);
	}
	
	if (IsDay(2)) {
		TDlg_DN2_Danko_Spi4ka{actor}; 
		return;
	}

	if (IsDay(4)) {
		TDlg_DN4_Danko_Spi4ka{actor}; 
		return;
	}
	
	if (IsDay(6)) {
		TDlg_DN6_Danko_Spi4ka{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}	
	
	TDlg_Gag_Danko_Man{actor};	
}