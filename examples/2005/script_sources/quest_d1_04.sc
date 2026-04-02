include std.sci
include quest_limited.sci
include dgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Powder;

	void init(void) {
		@SetVariable("d1q04", c_iQuestEnabled);
		object scene;
		@GetSceneByName(scene, "r2_house_2_02");
		bool bExist;
		Vector vPos, vDir;
		scene->GetLocator("pt_powder", bExist, vPos, vDir);
		if (!bExist)
			@Trace("Locator doesn't exist for d1_04_powder");
		else
			@AddActorByType(m_Powder, "scripted_container", scene, vPos, vDir, "d1q04_item_powder.xml");
			
		LockDoorActor("r2_house_2_02@door1", false);
		LockDoorActor("r2_house_2_02@door2", false);
		
		super.init(1);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}
	
	void Completed(void) {
		@SetVariable("d1q04", c_iQuestCompleted);
		Cleanup();
	}
	
	void Fail(void) {
		@SetVariable("d1q04", c_iQuestFailed);
		Cleanup();
	}
	
	void Limit(void) {
		int iState;
		@GetVariable("d1q04", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		
		@RemoveActor(self());
	}
}
