include std.sci
include quest_d2_02_patrol_base.sci
include dgame.sci
include NPC_Patrol.sci

const string c_strName = "mpatrol";

var bool g_bHadDialog;

maintask TMainPatrol : TQuestPatrol
{
	void init(void) {
		g_bHadDialog = false;
		super.init();
	}

	void DoDialog(object actor) {
		TDlg_DN2_Danko_MainPatrol{actor};
		g_bHadDialog = true;
	}
	
	bool HasDialog(void) {
		return !g_bHadDialog;
	}
}
