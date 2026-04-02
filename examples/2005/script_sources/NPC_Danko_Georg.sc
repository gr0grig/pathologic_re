include std.sci
include NPC_idle_base.sci
include NPC_Georg.sci
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
		TDlg_Fl_Danko_Georg{actor};
		return;
	}*/
	
	if (IsDay(1)) {
		TDlg_DN1_Danko_Georg{actor};
		return;
	}

	if (IsDay(2)) {
		TDlg_DN2_Danko_Georg{actor}; 
		return;
	}	
		
	if (IsDay(3)) {
		TDlg_DN3_Danko_Georg{actor}; 
		return;
	}	
	
	if (IsDay(5)) {
		TDlg_DN5_Danko_Georg{actor}; 
		return;
	}	
	
	if (IsDay(6)) {
		TDlg_DN6_Danko_Georg{actor}; 
		return;
	}	
	
	if (IsDay(8)) {
		TDlg_DN8_Danko_Georg{actor}; 
		return;
	}		
	
	if (IsDay(10)) {
		TDlg_DN10_Danko_Georg{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Danko_Georg{actor}; 
		return;
	}	
	
	TDlg_Gag_Danko_Man{actor};	
}