include std.sci
include NPC_Base.sci
include NPC_Lara.sci
include bgame.sci

maintask TLara : TNPCBase
{
	void PerformUse(object actor) {
		TDlg_DN11_Burah_Lara{actor}; 
	}
}
