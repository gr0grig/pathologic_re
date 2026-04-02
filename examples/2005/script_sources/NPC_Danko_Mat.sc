include std.sci
include NPC_idle_base.sci
include NPC_Mat.sci
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
		TDlg_Fl_Danko_Mat{actor};
		return;
	}*/

	if (IsDay(8)) {
		TDlg_DN8_Danko_Mat{actor};
		return;		
	}	
	
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}		
	
	TDlg_Gag_Danko_Woman{actor};	
}