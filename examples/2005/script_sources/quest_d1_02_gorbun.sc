include std.sci
include NPC_Gorbun.sci
include disp_idle.sci
include dgame.sci

maintask TGorbun : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN1_Danko_GorbunLaska{actor};
	}
}
