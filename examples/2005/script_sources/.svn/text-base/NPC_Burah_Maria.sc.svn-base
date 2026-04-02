include std.sci
include NPC_idle_base.sci
include NPC_Maria.sci
include bgame.sci
include game_finals.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
/*	if (!IsActiveDialogState()) {
		TDlg_Fl_Burah_Maria{actor};
		return;
	}*/
	
	int iMeeting;
	@GetVariable("mt_maria", iMeeting);
	
	// meeting and first game dialog
	if (!iMeeting) {
		TDlg_Mt_Burah_Maria{actor}; 
		@SetVariable("mt_maria", 1);
	}
	
	if (IsDay(6)) {
		TDlg_DN6_Burah_Maria{actor}; 
		return;
	}		
	
	if (IsDay(12)) {
		if (GetFinal() != 0)
			TDlg_DN12_Burah_Maria{actor}; 
		else {
			int i12;
			@GetVariable("d12_maria", i12);
		
			if (!i12) {
				TDlg_VolonteerUtopist{actor};
				@SetVariable("d12_maria", 1);
			}
		}
		return;
	}		
	
	TDlg_Gag_Burah_Woman{actor};	
}