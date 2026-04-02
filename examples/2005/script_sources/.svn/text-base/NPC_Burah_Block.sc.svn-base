include std.sci
include NPC_idle_base.sci
include NPC_Block.sci
include bgame.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
/*	if (!IsActiveDialogState()) {
		TDlg_Fl_Burah_Block{actor};
		return;
	}*/
	
	// meeting and first game dialog
	int iMeeting;
	@GetVariable("mt_block", iMeeting);
	if (!iMeeting) {
		TDlg_Mt_Burah_Block{actor};
		@SetVariable("mt_block", 1);
	}
	
	if (IsDay(9)) {
		TDlg_DN9_Burah_Block{actor}; 
		return;
	}	
	
	if (IsDay(10)) {
		TDlg_DN10_Burah_Block{actor}; 
		return;
	}		
	
	if (IsDay(12)) {
		TDlg_DN12_Burah_Block{actor}; 
		return;
	}
	
	TDlg_Gag_Burah_Man{actor};	
}