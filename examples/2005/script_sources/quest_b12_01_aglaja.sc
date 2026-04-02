include std.sci
include actor_disp_base.sci
include bgame.sci
include NPC_Aglaja.sci

maintask TAglaja : TDispBase
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnUse(object actor) {
		TDlg_DN12_Burah_AglajaSobor{actor};
	}
}
