include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Toy, m_Blood;
	void init(void) {
		LockDoorActor("vagon_mishka@door1", false);
		super.init(10);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_doll") {
			object scene;
			@GetMainOutdoorScene(scene);
			
			bool bFound;
			Vector vPos, vDir;
			
			int iPlantCount;
			for (iPlantCount = 0; ; ++iPlantCount) {
				scene->GetLocator("pt_b10q03_plant" + (iPlantCount + 1), bFound, vPos, vDir);
				if (!bFound)
					break;
					
				string item_name;
				@RandOneOf(item_name, 1, 1, 1, 2, 2, "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
				object actor;
				scene->AddStationaryActorByType(actor, vPos, vDir, "scripted", "item_" + item_name + "_stat.xml");
				@Trace("New b10q03 plant: \"" + item_name + "\" at location #" + (iPlantCount + 1));
			}
			@Trace("Total b10q03 plants: " + iPlantCount);

			scene->GetLocator("pt_b10q03_toy", bFound, vPos, vDir);
			if (bFound)
				scene->AddStationaryActorByType(m_Toy, vPos, vDir, "scripted", "b10q03_toy_burah.xml");
			else
				@Trace("pt_b10q03_toy locator not found");
		}
		else
		if (name == "place_blood") {
			object scene;
			@GetMainOutdoorScene(scene);
			object actor;
			@AddActor(actor, "b10q03_blood", scene, [0, 0, 0], [0, 0, 1]);
			@AddActor(m_Blood, "b10q03_blood_sel", scene, [0, 0, 0], [0, 0, 1], "b10q03_blood.xml");
		}
		else 
		if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}
	
	void Limit(void) {
		int iState;
		@GetVariable("b10q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b10q03", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b10q03", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		
		if (m_Toy)
			m_Toy->Remove();

		@RemoveActor(self());
	}
}
