include std.sci
include NPC_idle_base.sci
include NPC_Rubin.sci
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
		TDlg_Fl_Danko_Rubin{actor};
		return;
	}*/

	if (IsDay(3)) {
		TDlg_DN3_Danko_Rubin{actor};
		return;
	}

	if (IsDay(4)) {
		TDlg_DN4_Danko_Rubin{actor};
		return;
	}
	
	if (IsDay(5)) {
		TDlg_DN5_Danko_Rubin{actor};
		return;
	}	
	
	if (IsDay(6)) {
		TDlg_DN6_Danko_Rubin{actor};
		return;
	}		
	
	if (IsDay(10)) {
		TDlg_DN10_Danko_Rubin{actor};
		return;
	}		
	
	if (IsDay(12)) {
		TDlg_VolonteerSmirennik{actor}; 
		return;
	}	
	
	TDlg_Gag_Danko_Man{actor};	
}