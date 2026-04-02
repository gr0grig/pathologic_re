include std.sci
include NPC_idle_base.sci
include NPC_Block.sci
include kgame.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
	if (IsDay(10)) {
		TDlg_DN10_Klara_Block{actor};
		return;		
	}
	
	if (IsDay(9)) {
		TDlg_DN9_Klara_Block{actor};
		return;		
	}	

	if (IsDay(11)) {
		TDlg_DN11_Klara_Block{actor};
		return;		
	}
	
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}	
	
	TDlg_Gag_Klara_Man{actor};	
}