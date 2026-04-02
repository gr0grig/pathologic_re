include std.sci
include disp_idle.sci
include game.sci
include NPC_Morlok.sci
include item_base.sci

maintask TGatherer : TDispIdleLookAsync
{
	var int iPrevDay;
	
	void init(void) {
		iPrevDay = GetDay();
		GenerateOdinaryGathererTradeItems();
		super.init(300, 100);
	}
		
	void OnUse(object actor) {
		CancelActivity();
		int ret;
		if (GetPlayer() == c_iBranchBurah) 
			ret = TDlg_Ct_Burah_Gatherer1{actor};
		else
		if (GetPlayer() == c_iBranchKlara) 
			ret = TDlg_Ct_Klara_Gatherer1{actor};
		else 
			return;
			
		if (1000 == ret) {
			if (!SetTradeCamera(actor, c_fCameraDistance))
				return;
			TTrade{actor};
			UnsetTradeCamera(actor);
		}		
	}
	
	void OnLoad(void) {
		if (iPrevDay != GetDay()) {
			GenerateOdinaryGathererTradeItems();
			iPrevDay = GetDay();
		}
		super.OnLoad();
	}	
}
