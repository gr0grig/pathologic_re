include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Trigger;
	var object m_Book;

	void init(void) {
		object scene;
		@GetSceneByName(scene, "house_vlad");
		m_Trigger = SpawnActor(scene, "b8q02_trigger", "b8q02_trigger.xml");
		m_Book = SpawnActorByType(scene, "pt_b8q02_book", "scripted_container", "b8q02_item_book.xml");
		
		LockDoorActor("house_vlad@door2", false);

		super.init(8);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "b8q02_trigger") {
			@PlaySound("door_close");
			LockDoorActor("ihouse_vlad@door2", true);
			
			object scene;
			@GetSceneByName(scene, "house_vlad");

			for (int i = 1; ; ++i) {
				bool bFound;
				Vector vPos, vDir;
				scene->GetLocator("pt_b8q02_grabitel" + i, bFound, vPos, vDir);
				if (!bFound)
					break;
				object actor;
				@AddActor(actor, "pers_grabitel", scene, vPos, vDir, "b8q02_grabitel.xml");
			}
		}
		else if (name == "book_taken") {
			AddDiaryEntry_b8q02BookGotoMladVlad();
			@PlaySound("door_open");
			LockDoorActor("ihouse_vlad@door2", false);
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}
	
	void Limit(void) {
		int iState;
		@GetVariable("b8q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b8q02", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b8q02", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;

		if (m_Trigger)
			@RemoveActor(m_Trigger);
		if (m_Book)
			@Trigger(m_Book, "cleanup");
		LockDoorActor("ihouse_vlad@door2", false);
		LockDoorActor("house_vlad@door2", true);

		@RemoveActor(self());
	}
}
