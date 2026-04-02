include std.sci
include quest_limited.sci
include game.sci

maintask TQuest : TQuestLimited
{
	var object m_LittleGirl, m_LittleBoy;
	var object m_Trigger;
	var object m_Soldiers;
	var object m_Victims;
	var bool m_bActorsPlaced;
	var bool m_bExecuting;
	var int m_iRemoveAllOnUnload;
	var bool m_bDestroy;

	void init(void) {
		m_Soldiers = CreateObjectVector();
		m_Victims = CreateObjectVector();
		m_bActorsPlaced = false;
		m_bExecuting = false;
		m_iRemoveAllOnUnload = 0;
		m_bDestroy = false;
		super.init(11);
	}
	
	void PlaceActors(void) {
		object scene;
		@GetSceneByName(scene, "uprava_admin");
		m_LittleGirl = SpawnActor(scene, "pt_d11q02_girl", "pers_littlegirl", "d11q02_littlegirl.xml");
		m_LittleBoy = SpawnActor(scene, "pt_d11q02_boy", "pers_littleboy", "d11q02_littleboy.xml");

		m_bActorsPlaced = true;
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "uprava_load") {
			if (!m_bActorsPlaced)
				PlaceActors();
		}
		else if (name == "init_graveyard") {
			@SetVariable("d11q02", c_iQuestEnabled);
			object scene;
			@GetMainOutdoorScene(scene);
			@AddActor(m_Trigger, "d11q02_trigger", scene, [0, 0, 0], [0, 0, 1], "d11q02_trigger.xml");
			for (int i = 1; i <= 4; ++i)
				m_Soldiers->add(SpawnActor(scene, "pt_d11q02_soldier" + i, "pers_soldat", "d11q02_soldier.xml"));
			m_Victims->add(SpawnActor(scene, "pt_d11q02_victim1", "pers_worker", "d11q02_victim1.xml"));
			m_Victims->add(SpawnActor(scene, "pt_d11q02_victim2", "pers_worker", "d11q02_victim2.xml"));
			m_Victims->add(SpawnActor(scene, "pt_d11q02_victim3", "pers_unosha", "d11q02_victim3.xml"));
			m_Victims->add(SpawnActor(scene, "pt_d11q02_victim4", "pers_unosha", "d11q02_victim4.xml"));
		}
		else if (name == "d11q02_trigger") {
			TriggerActorsInVector(m_Soldiers, "execute");
			m_bExecuting = true;
		}
		else if (name == "execute") {
			TriggerActorsInVector(m_Victims, "execute");
			m_bExecuting = false;
			Fail();
		}
		else if (name == "soldier_attack") {
			TriggerActorsInVector(m_Soldiers, "attack");
		}
		else if (name == "actor_unload") {
			if (m_iRemoveAllOnUnload) {
				if (m_iRemoveAllOnUnload == 1)
					RemoveActors();
			}
			else if (m_bExecuting) {
				m_bExecuting = false;
				Fail();
				RemoveActors();
			}
		}
		else if (name == "soldier_dead") {
			int iCount;
			m_Soldiers->size(iCount);
			int i;
			for (i = 0; i < iCount; ++i) {
				object actor;
				m_Soldiers->get(actor, i);
				if (actor) {
					bool bDead;
					actor->IsDead(bDead);
					if (!bDead)
						break;
				}
			}
			if (i == iCount) {
				@SetVariable("d11q02", 2);
				if (!m_iRemoveAllOnUnload)
					m_iRemoveAllOnUnload = 1;
			}
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
		@GetVariable("d11q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("d11q02", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("d11q02", c_iQuestCompleted);
		Cleanup();
	}
	
	void RemoveActors(void) {
		RemoveActorsFromVector(m_Soldiers);
		RemoveActorsFromVector(m_Victims);
		if (m_bDestroy)
			@RemoveActor(self());
		m_iRemoveAllOnUnload = 2;
	}

	void Cleanup(void) {
		if (m_LittleGirl)
			@Trigger(m_LittleGirl, "cleanup");
		if (m_LittleBoy)
			@Trigger(m_LittleBoy, "cleanup");
		if (m_Trigger)
			@RemoveActor(m_Trigger);
		if (m_iRemoveAllOnUnload == 2)
			@RemoveActor(self());
		else
			m_iRemoveAllOnUnload = 1;
		m_bDestroy = true;
	}
}
