include std.sci
include quest_limited.sci

maintask TQuest : TQuestLimited
{
	var object m_Group;

	void init(void) {
		m_Group = CreateObjectVector();
		object scene;
		@GetMainOutdoorScene(scene);
		m_Group->add(SpawnStationaryActor(scene, "pt_b1q04_grabitel1", "pers_grabitel", "b1q04_grabitel.xml"));
		m_Group->add(SpawnStationaryActor(scene, "pt_b1q04_grabitel2", "pers_grabitel", "b1q04_grabitel2.xml"));
		m_Group->add(SpawnStationaryActor(scene, "pt_b1q04_worker1", "pers_worker", "b1q04_worker.xml"));
		m_Group->add(SpawnStationaryActor(scene, "pt_b1q04_worker2", "pers_worker", "b1q04_worker.xml"));
		super.init(1);
	}
	
	void Limit(void) {
		Cleanup();
	}
	
	void Cleanup(void) {
		if (m_Group) {
			RemoveStationaryActorsFromVector(m_Group);
			m_Group = null;
		}
		@RemoveActor(self());
	}
}
