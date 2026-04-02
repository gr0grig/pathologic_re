include std.sci
include actor_sdisp_base.sci
include dgame.sci

maintask TGirl : TSDispBase
{
	var bool bDiary;
	void OnUse(object actor) {
		@SetVariable("d5q02KnowNudeIsDead", 1);

		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive)
			@Barter(actor);
			
		if (CanBeRemoved() && !bDiary) {
			AddDiaryEntry_d5q01HeartGotoRubin();
			bDiary = true;
		}
	}

	bool CanBeRemoved(void) {
		int iCount;
		@GetItemCountOfType(iCount, "d5q01_heart");
		if (!iCount)
			return true;
		int iState;
		@GetVariable("d5q01", iState);
		return !IsNormalQuestState(iState);
	}
}
