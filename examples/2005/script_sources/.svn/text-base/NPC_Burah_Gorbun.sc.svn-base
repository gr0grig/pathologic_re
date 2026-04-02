include std.sci
include NPC_Base_Walk_disp.sci
include NPC_Gorbun.sci
include bgame.sci

void OnGameTime(int iID, float fTime)
{
	if (iID == 0) {
		OnTrigger("cleanup");
	}
}

maintask TNPC : TNPCBaseWalk
{
	void init(void) {
		@SetTimeEvent(0, 6 * 24);
		super.init();
	}
}

void PerformUse(object actor)
{
	if (IsDay(1)) {
		TDlg_DN1_Burah_Gorbun{actor}; 
		return;
	}
	
	TDlg_Gag_Burah_Man{actor};	
}
