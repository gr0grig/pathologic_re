include std.sci
include NPC_idle_base.sci
include NPC_Block.sci
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
		TDlg_Fl_Danko_Block{actor};
		return;
	}*/
	
	if (IsDay(9)) {
		TDlg_DN9_Danko_Block{actor};
		return;		
	}
	
	if (IsDay(10)) {
		TDlg_DN10_Danko_Block{actor};
		return;		
	}	
	
	if (IsDay(11)) {
		TDlg_DN11_Danko_Block{actor};
		return;		
	}
	
	if (IsDay(12)) {
		TDlg_DN12_Danko_Block{actor};
		return;		
	}	
	
	TDlg_Gag_Danko_Man{actor};	
}