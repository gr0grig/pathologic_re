include std.sci
include NPC_idle_base.sci
include NPC_Grif.sci
include bgame.sci

var bool bMeeting, bSmirennik;
var int iLastUpdate;

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		bMeeting = false;
		iLastUpdate = -1;
		super.init();
	}
}

void GrifTrade(object actor)
{
	if (!SetTradeCamera(actor))
		return;
			
	TLSHTrade{actor};
	UnsetTradeCamera(actor);
}

void PerformUse(object actor)
{
	if (iLastUpdate != GetDay()) {
		GenerateGrifTradeItems();
		iLastUpdate = GetDay();
	}

/*	if (!IsActiveDialogState()) {
		TDlg_Fl_Burah_Grif{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Burah_Grif{actor}; 
		bMeeting = true;
	}
	
	if (IsDay(1)) {
		if (1000 == TDlg_DN1_Burah_Grif{actor})
			GrifTrade(actor);
		return;
	}

	if (IsDay(2)) {
		if (1000 == TDlg_DN2_Burah_Grif{actor})
			GrifTrade(actor);
		return;
	}

	if (IsDay(3)) {
		if (1000 == TDlg_DN3_Burah_Grif{actor})
			GrifTrade(actor);
		return;
	}
	
	if (IsDay(4)) {
		if (1000 == TDlg_DN4_Burah_Grif{actor})
			GrifTrade(actor);
		return;
	}	
	
	if (IsDay(5)) {
		if (1000 == TDlg_DN5_Burah_Grif{actor})
			GrifTrade(actor);
		return;
	}	
	
	if (IsDay(6)) {
		if (1000 == TDlg_DN6_Burah_Grif{actor})
			GrifTrade(actor);
		return;
	}	
	
	if (IsDay(7)) {
		if (1000 == TDlg_DN7_Burah_Grif{actor})
			GrifTrade(actor);
		return;
	}	
	
	if (IsDay(8)) {
		if (1000 == TDlg_DN8_Burah_Grif{actor})
			GrifTrade(actor);
		return;
	}	
	
	if (IsDay(9)) {
		if (1000 == TDlg_DN9_Burah_Grif{actor})
			GrifTrade(actor);
		return;
	}	
	
	if (IsDay(10)) {
		if (1000 == TDlg_DN10_Burah_Grif{actor})
			GrifTrade(actor);
		return;
	}	
	
	if (IsDay(11)) {
		if (1000 == TDlg_DN11_Burah_Grif{actor})
			GrifTrade(actor);
		return;
	}	
	
	if (IsDay(12) && (!bSmirennik)) {
		TDlg_VolonteerSmirennik{actor};
		bSmirennik = true;
		return;
	}	
}