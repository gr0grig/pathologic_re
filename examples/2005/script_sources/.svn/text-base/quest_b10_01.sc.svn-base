include std.sci
include bgame.sci

const int c_iMapMarkTextID = 201000;

maintask TQuest
{
	var object m_Butcher1;
	var object m_Butcher2;
	var object m_Butcher3;

	void init(void) {
		object scene;
		@GetSceneByName(scene, "cot_eva");
		LockMovingDoor("icot_eva_door", false);
		@Trigger(scene, "danko");
	
		LockDoorActor("boiny@door1", false);
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "usable_stone") {
			TriggerActor("b10q01_stone", "enable_use");
		}
		else if (name == "place_butchers") {
			object scene;
			@GetMainOutdoorScene(scene);

			m_Butcher1 = SpawnStationaryActor(scene, "pt_b10q01_butcher1", "pers_butcher", "b10q01_butcher.xml");
			m_Butcher2 = SpawnStationaryActor(scene, "pt_b10q01_butcher2", "pers_butcher", "b10q01_butcher.xml");
			m_Butcher3 = SpawnStationaryActor(scene, "pt_b10q01_butcher3", "pers_butcher", "b10q01_butcher.xml");
			
			object map = GetMainMap();
			map->AddMark("b9q01BurahGotoButcher1", "pt_b10q01_butcher1", 1,  101000, GetGameTime());
			map->AddMark("b9q01BurahGotoButcher2", "pt_b10q01_butcher2", 1,  101000, GetGameTime());
			map->AddMark("b9q01BurahGotoButcher3", "pt_b10q01_butcher3", 1,  101000, GetGameTime());
			AddDiaryEntry_b10q01SleepGotoButchers();
		}
		else if (name == "butcher_dead") {
			int iDeadCount;
			@GetVariable("b10q01Butchers", iDeadCount);
			@SetVariable("b10q01Butchers", iDeadCount + 1);
			if (iDeadCount + 1 == 3) {
				AddDiaryEntry_b10q01CorpseGotoStarshina();
				object player;
				@FindActor(player, "player");
				@Trigger(player, "b10q01_stop");
			}
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("b10q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				Cleanup();
			}
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Fail(void) {
		@SetVariable("b10q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("b10q01", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		if (m_Butcher1)
			m_Butcher1->Remove();
		if (m_Butcher2)
			m_Butcher2->Remove();
		if (m_Butcher3)
			m_Butcher3->Remove();
		TriggerActor("b10q01_stone", "disable_use");
		
		object map = GetMainMap();
		object mapmark;
		map->FindMark(mapmark, "b9q01BurahGotoButcher1");
		if (mapmark)
			mapmark->Remove();
		map->FindMark(mapmark, "b9q01BurahGotoButcher2");
		if (mapmark)
			mapmark->Remove();
		map->FindMark(mapmark, "b9q01BurahGotoButcher3");
		if (mapmark)
			mapmark->Remove();
			
		LockDoorActor("boiny@door1", true);
	
		@RemoveActor(self());
	}
}
