include std.sci
include disp_idle.sci
include bgame.sci
include NPC_Birdmask.sci

maintask TBirdmask : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN12_Burah_TBirdmask{actor};
	}
}
