include std.sci
include NPC_idle_base.sci
include NPC_Grif.sci
include kgame.sci

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

	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Klara_Grif{actor}; bMeeting = true;
	}
	
	if (IsDay(1)) {
		if (1000 == TDlg_DN1_Klara_Grif{actor})
			GrifTrade(actor);	
		return;
	}			
	
	if (IsDay(2)) {
		if (1000 == TDlg_DN2_Klara_Grif{actor})
			GrifTrade(actor);	
		return;
	}			

	if (IsDay(3)) {
		if (1000 == TDlg_DN3_Klara_Grif{actor})
			GrifTrade(actor);	
		return;
	}				
	
	if (IsDay(4)) {
		if (1000 == TDlg_DN4_Klara_Grif{actor})
			GrifTrade(actor);	
		return;
	}				

	if (IsDay(5)) {
		if (1000 == TDlg_DN5_Klara_Grif{actor})
			GrifTrade(actor);	
		return;
	}				
	
	if (IsDay(6)) {
		if (1000 == TDlg_DN6_Klara_Grif{actor})
			GrifTrade(actor);	
		return;
	}				
	
	if (IsDay(7)) {
		if (1000 == TDlg_DN7_Klara_Grif{actor})
			GrifTrade(actor);	
		return;
	}				
	
	if (IsDay(8)) {
		if (1000 == TDlg_DN8_Klara_Grif{actor})
			GrifTrade(actor);	
		return;
	}				
	
	if (IsDay(9)) {
		if (1000 == TDlg_DN9_Klara_Grif{actor})
			GrifTrade(actor);	
		return;
	}				

	if (IsDay(10)) {
		if (1000 == TDlg_DN10_Klara_Grif{actor})
			GrifTrade(actor);	
		return;
	}				
	
	if (IsDay(11)) {
		if (1000 == TDlg_DN11_Klara_Grif{actor})
			GrifTrade(actor);	
		return;
	}				
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Klara_Grif{actor}; 
		return;
	}			
}