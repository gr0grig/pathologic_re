include std.sci
include actor_sdisp_base.sci
include dgame.sci

maintask TCorpse : TSDispBase
{
	void OnUse(object actor) {
		@SetVariable("d7q02BirdBalahon", 1);
		
		int iState;
		@GetVariable("d7q02", iState);
		if (iState == 4) {
			AddDiaryEntry_d7q02Completed();
			TriggerActor("quest_d7_02", "completed");
		}
		else {
			if (!m_bToBeRemoved)
				AddDiaryEntry_d7q02BalahonTaken();
		}
		
		m_bToBeRemoved = true;
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive)
			@Barter(actor);
	}

	bool CanBeRemoved(void) {
		bool bGotIt;
		@GetVariable("d7q02BirdBalahon", bGotIt);
		return bGotIt;
	}
}
