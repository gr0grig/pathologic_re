include std.sci
include NPC_idle_base.sci
include NPC_Maria.sci
include dgame.sci
include volonteers_danko_base.sci

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
		TDlg_Fl_Danko_Maria{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Danko_Maria{actor}; bMeeting = true;
	}
	
	if (IsDay(1)) {
		if (2000 == TDlg_DN1_Danko_Maria{actor}) {
			@ShowWindow("people.xml", true);
		}
		return;
	}

	if (IsDay(2)) {
		TDlg_DN2_Danko_Maria{actor};
		return;
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Danko_Maria{actor};
		return;
	}	

	if (IsDay(4)) {
		TDlg_DN4_Danko_Maria{actor};
		return;
	}	
	
	if (IsDay(6)) {
		TDlg_DN6_Danko_Maria{actor};
		return;
	}	

	if (IsDay(7)) {
		TDlg_DN7_Danko_Maria{actor};
		return;
	}	
		
	if (IsDay(8)) {
		TDlg_DN8_Danko_Maria{actor};
		return;
	}		

	if (IsDay(10)) {
		TDlg_DN10_Danko_Maria{actor};
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Danko_Maria{actor};
		return;
	}	
	
	TDlg_Gag_Danko_Woman{actor};	
}