include std.sci
include NPC_idle_base.sci
include NPC_Spi4ka.sci
include meetings_burah.sci

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
	
	MeetingSpi4ka(actor);
	
	if (IsDay(4)) {
		TDlg_DN4_Burah_Spi4ka{actor}; 
		return;
	}	
	
	if (IsDay(10)) {
		TDlg_DN10_Burah_Spi4ka{actor}; 
		return;
	}		

	if (IsDay(12)) {
		TDlg_Vol_DN12_Burah_Spi4ka{actor}; 
		return;
	}		
	
	TDlg_Gag_Burah_Man{actor};
}