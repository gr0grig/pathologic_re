include std.sci
include game.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_Patrols;
	var object m_Corpses;
	var object m_Graveyard;
	var object m_GraveyardFire;
	
	var bool m_bTimerInit;
	
	void init(void) {
		m_bTimerInit = false;

		m_Patrols = CreateObjectVector();
		m_Graveyard = CreateObjectVector();
		m_Corpses = CreateObjectVector();

		for (;;) {
			@Hold();
		}
	}

	void InitActors(void) {
		object scene;
		@GetMainOutdoorScene(scene);
		int iLoc;
		@irand(iLoc, 3);
		@Trace("Patrol location: " + iLoc);
		m_Patrols->add(SpawnStationaryActor(scene, "pt_d3q01_patrol" + (iLoc + 1), "pers_patrool", "d3q01_cpatrol.xml"));
		m_Patrols->add(SpawnStationaryActor(scene, "pt_d3q01_patrol" + ((iLoc + 1) % 3 + 1), "pers_patrool", "d3q01_patrol.xml"));
		m_Patrols->add(SpawnStationaryActor(scene, "pt_d3q01_patrol" + ((iLoc + 2) % 3 + 1), "pers_patrool", "d3q01_patrol.xml"));
		object actor;
		@AddScriptedActor(actor, "d3q01_corpse1", "actor_disp.bin", scene, [0, 0, 0]);
		m_Corpses->add(actor);
		@AddScriptedActor(actor, "d3q01_corpse2", "actor_disp.bin", scene, [0, 0, 0]);
		m_Corpses->add(actor);
		@AddScriptedActor(actor, "d3q01_corpse3", "actor_disp.bin", scene, [0, 0, 0]);
		m_Corpses->add(actor);
	}

	void InitGraveyardActors(void) {
		object scene;
		@GetMainOutdoorScene(scene);
		m_Graveyard->add(SpawnStationaryActor(scene, "pt_d3q01_gpatrol1", "pers_patrool", "d3q01_gpatrol.xml"));
		m_Graveyard->add(SpawnStationaryActor(scene, "pt_d3q01_gpatrol2", "pers_patrool", "d3q01_gpatrol.xml"));
		m_Graveyard->add(SpawnStationaryActor(scene, "pt_d3q01_gpatrol3", "pers_patrool", "d3q01_gpatrol.xml"));
		@AddActor(m_GraveyardFire, "d3q01_graveyard_fire", scene, [0, 0, 0], [0, 0, 1], "d3q01_graveyard_fire.xml");
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_butchers") {
			InitActors();
		}
		else if (name == "patrol_talk") {
			InitGraveyardActors();
		}
		else if (name == "gpatrol_attack") {
			if (!m_bTimerInit) {
				m_bTimerInit = true;
				AddQuestActor("quest_d3_01_teleport");
			}

			int iCount;
			m_Graveyard->size(iCount);
			for (int i = 0; i < iCount; ++i) {
				object actor;
				m_Graveyard->get(actor, i);
				object actor1;
				actor->GetActor(actor1);
				if (actor1)
					@Trigger(actor1, "kill_player");
			}
			
			@Trigger(m_GraveyardFire, "put_item");
			
			RemoveActors();
		}
		else if (name == "gpatrol_talk") {
			@Trigger(m_GraveyardFire, "put_item");
			
			int iCount;
			m_Graveyard->size(iCount);
			for (int i = 0; i < iCount; ++i) {
				object actor;
				m_Graveyard->get(actor, i);
				object actor1;
				actor->GetActor(actor1);
				if (actor1)
					@Trigger(actor1, "talk_player");
			}

			RemoveActors();
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("d3q01", iState);
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
		@SetVariable("d3q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("d3q01", c_iQuestCompleted);
		Cleanup();
	}

	void RemoveActors(void) {
		RemoveStationaryActorsFromVector(m_Patrols);
		TriggerActorsInVector(m_Corpses, "cleanup"); m_Corpses = null;
		RemoveStationaryActorsFromVector(m_Graveyard);
		if (m_GraveyardFire)
			@Trigger(m_GraveyardFire, "cleanup");
	}

	void Cleanup(void) {
		disable OnTrigger;
		RemoveActors();
		@RemoveActor(self());
	}
}
