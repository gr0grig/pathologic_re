include std.sci
include disp_idle.sci
include kgame.sci
include NPC_Unosha.sci

maintask TFather : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN7_Klara_Father{actor};
	}
}
