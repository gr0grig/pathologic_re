include std.sci
include disp_idle.sci
include NPC_Ayyan.sci
include dgame.sci

maintask TNPC : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}
	
	void OnUse(object actor)
	{
		CancelActivity();
		
		if (IsDay(7)) {
			TDlg_DN7_Danko_Nudegirl{actor};
			return;		
		}
		
		TDlg_Gag_Danko_Woman{actor};	
	}	
}
