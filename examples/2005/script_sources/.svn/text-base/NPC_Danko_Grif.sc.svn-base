include std.sci
include NPC_idle_base.sci
include NPC_Grif.sci
include dgame.sci

var bool bMeeting;
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
		TDlg_Fl_Danko_Grif{actor};
		return;
	}	*/

	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Danko_Grif{actor}; bMeeting = true;
	}
	
	if (IsDay(1)) {
		if (1000 == TDlg_DN1_Danko_Grif{actor})
			GrifTrade(actor);
		return;
	}
	
	if (IsDay(2)) {
		if (1000 == TDlg_DN2_Danko_Grif{actor})
			GrifTrade(actor);		
		return;
	}	

	if (IsDay(3)) {
		if (1000 == TDlg_DN3_Danko_Grif{actor})
			GrifTrade(actor);
		return;
	}	

	if (IsDay(4)) {
		if (1000 == TDlg_DN4_Danko_Grif{actor})
			GrifTrade(actor);
		return;
	}	

	if (IsDay(5)) {
		if (1000 == TDlg_DN5_Danko_Grif{actor})
			GrifTrade(actor);
		return;
	}	

	if (IsDay(6)) {
		if (1000 == TDlg_DN6_Danko_Grif{actor})
			GrifTrade(actor);
		return;
	}			
	
	if (IsDay(7)) {
		if (1000 == TDlg_DN7_Danko_Grif{actor})
			GrifTrade(actor);
		return;
	}		
	
	if (IsDay(8)) {
		if (1000 == TDlg_DN8_Danko_Grif{actor})
			GrifTrade(actor);
		return;
	}		
	
	if (IsDay(9)) {
		if (1000 == TDlg_DN9_Danko_Grif{actor})
			GrifTrade(actor);
		return;
	}		
	
	if (IsDay(10)) {
		if (1000 == TDlg_DN10_Danko_Grif{actor})
			GrifTrade(actor);
		return;
	}		
	
	if (IsDay(11)) {
		if (1000 == TDlg_DN11_Danko_Grif{actor})
			GrifTrade(actor);
		return;
	}		
	
	if (IsDay(12)) {
		TDlg_VolonteerSmirennik{actor};
		return;
	}		
}