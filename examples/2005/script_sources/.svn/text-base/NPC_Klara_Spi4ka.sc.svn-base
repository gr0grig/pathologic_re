include std.sci
include NPC_idle_base.sci
include NPC_Spi4ka.sci
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
		TDlg_Fl_Burah_Spi4ka{actor};
		return;
	}*/

	int iMeeting;
	@GetVariable("mt_spi4ka", iMeeting);
	
	// meeting and first game dialog
	if (!iMeeting) {
		TDlg_Mt_Klara_Spi4ka{actor}; 
		@SetVariable("mt_spi4ka", 1);
	}
	
	if (IsDay(8)) {
		TDlg_DN8_Klara_Spi4ka{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}
	
	TDlg_Gag_Klara_Man{actor};			
}