include std.sci
include NPC_idle_base.sci
include NPC_Eva.sci
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
		TDlg_Fl_Danko_Eva{actor};
		return;
	}*/
	
	if (IsDay(1)) {
		TDlg_DN1_Danko_Eva{actor}; 
		return;
	}

	if (IsDay(2)) {
		TDlg_DN2_Danko_Eva{actor}; 
		return;
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Danko_Eva{actor}; 
		return;
	}	

	if (IsDay(4)) {
		TDlg_DN4_Danko_Eva{actor}; 
		return;
	}	

	if (IsDay(6)) {
		TDlg_DN6_Danko_Eva{actor}; 
		return;
	}
	
	TDlg_Gag_Danko_Woman{actor};	
}
