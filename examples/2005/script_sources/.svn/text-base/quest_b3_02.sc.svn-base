include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Grabitels;

	void init(void) {
		@SetVariable("b3q02", c_iQuestEnabled);
		m_Grabitels = CreateObjectVector();
		super.init(3);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_grabitel1") {
			LockDoorActor("warehouse_notkin@door1", true);
			object scene;
			@GetMainOutdoorScene(scene);
			m_Grabitels->add(SpawnStationaryActor(scene, "pt_b3q02_grabitel1_1", "pers_grabitel", "b3q02_grabitel1.xml"));
			m_Grabitels->add(SpawnStationaryActor(scene, "pt_b3q02_grabitel1_2", "pers_grabitel", "b3q02_grabitel1.xml"));
		}
		else if (name == "remove_grabitel") {
			RemoveStationaryActorsFromVector(m_Grabitels);
		}
		else if (name == "grabitel_attack") {
			bool bAttacked = false;

			int iCount;
			m_Grabitels->size(iCount);
			for (int i = 0; i < iCount; ++i) {
				object actor;
				m_Grabitels->get(actor, i);
				if (actor) {
					object ractor;
					actor->GetActor(ractor);
					if (ractor) {
						@Trigger(ractor, "attack");
						bAttacked = true;
					}
					else {
						actor->Remove();
					}
				}
			}

			if (!bAttacked)
				GrabitelsDead();
		}
		else if (name == "grabitel_dead") {
			int iCount;
			m_Grabitels->size(iCount);
			for (int i = 0; i < iCount; ++i) {
				object actor;
				m_Grabitels->get(actor, i);
				if (actor) {
					object ractor;
					actor->GetActor(ractor);
					if (ractor) {
						bool bDead;
						ractor->IsDead(bDead);
						if (!bDead)
							return;
					}
					else {
						actor->Remove();
					}
				}
			}
			GrabitelsDead();
		}
		else if (name == "place_grabitel2") {
			object scene;
			@GetMainOutdoorScene(scene);
			for (int i = 1; i <= 4; ++i) {
				m_Grabitels->add(SpawnStationaryActor(scene, "pt_b3q02_grabitel2_" + i, "pers_grabitel", "b3q02_grabitel2.xml"));
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
		@GetVariable("b3q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b3q02", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b3q02", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		RemoveStationaryActorsFromVector(m_Grabitels);
		LockDoorActor("warehouse_notkin@door1", false);
		@RemoveActor(self());
	}
	
	void GrabitelsDead(void) {
		int iSize;
		m_Grabitels->size(iSize);
		if (!iSize)
			return;
			
		m_Grabitels->clear();
		AddDiaryEntry_b3q02GrabitelsDead();
		LockDoorActor("warehouse_notkin@door1", false);
		@SetVariable("b3q02Dead", true);
	}
}
