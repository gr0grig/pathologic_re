include std.sci
include NPC_idle_base.sci
include NPC_Rubin.sci
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
		TDlg_Fl_Danko_Rubin{actor};
		return;
	}*/

	// meeting and first game dialog
	if (IsDay(3)) {
		TDlg_DN3_Klara_Rubin{actor};
		return;
	}

	if (IsDay(5)) {
		TDlg_DN5_Klara_Rubin{actor};
		return;
	}	

	if (IsDay(11)) {
		TDlg_DN11_Klara_Rubin{actor};
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Klara_Rubin{actor}; 
		return;
	}		
	
	TDlg_Gag_Klara_Man{actor};		
}