include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Boy;
	var object m_Samopal, m_SamopalAmmo;
	var object m_Grabitels;

	void init(void) {
		@SetVariable("b4q02", c_iQuestEnabled);
		m_Grabitels = CreateObjectVector();
		super.init(4);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_boy") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Boy = SpawnStationaryActor(scene, "pt_b4q02_boy", "pers_boy", "b4q02_boy.xml");
			
			@GetSceneByName(scene, "house5_unoin03r");
			m_Samopal = SpawnActorByType(scene, "pt_b4q02_samopal", "scripted_container", "b4q02_samopal.xml");
			m_SamopalAmmo = SpawnActorByType(scene, "pt_b4q02_samopal_ammo", "scripted_container", "b4q02_samopal_ammo.xml");
		}
		else if (name == "boy_run") {
			object actor;

			object scene;
			@GetMainOutdoorScene(scene);
			for (int i = 1; ; ++i) {
				bool bFound;
				Vector vPos, vDir;
				scene->GetLocator("pt_b4q02_grabitel" + i, bFound, vPos, vDir);
				if (!bFound)
					break;
				scene->AddStationaryActor(actor, vPos, vDir, "pers_grabitel", "b4q02_grabitel.xml", true);
				m_Grabitels->add(actor);
			}

			m_Boy->GetActor(actor);
			if (!actor)
				m_Boy->Remove();
			else
				@Trigger(actor, "run");
		}
		else if (name == "house_load") {
			AddDiaryEntry_b4q02Completed();
			Completed();
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
		@GetVariable("b4q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b4q02", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b4q02", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		
		if (m_Boy)
			m_Boy->Remove();
		if (m_Samopal)
			@Trigger(m_Samopal, "cleanup");
		if (m_SamopalAmmo)
			@Trigger(m_SamopalAmmo, "cleanup");
		RemoveStationaryActorsFromVector(m_Grabitels);
		
		@RemoveActor(self());
	}
}
