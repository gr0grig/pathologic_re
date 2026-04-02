include std.sci
include disp_idle.sci
include NPC_Patrol.sci
include bgame.sci

maintask TPatrol : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN1_Danko_IsidorPatrol{actor};
	}
}
