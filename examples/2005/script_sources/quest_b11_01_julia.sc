include std.sci
include NPC_Base.sci
include NPC_Julia.sci
include bgame.sci

maintask TJulia : TNPCBase
{
	void PerformUse(object actor) {
		TDlg_DN11_Burah_Julia{actor}; 
	}
}
