include std.sci
include actor_disp_base.sci
include dgame.sci
include NPC_Birdmask.sci

maintask TBirdmask : TDispBase
{
	void OnUse(object actor) {
		if (TDlg_DN5_Danko_Birdmask{actor} == 1) {
			TriggerActor("quest_d5_03", "completed");
		}
	}
}
