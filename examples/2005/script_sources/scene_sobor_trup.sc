include std.sci

maintask TSobor
{
	var object m_People;
	
	void init(void) {
		@CreateObjectVector(m_People);
		for (;;) {
			@Hold();
		}
	}
	
	void OnTrigger(string name) {
		if (name == "noaglaja") {
			@SetVariable("sobor_aglaja", 0);
		}
		else
		if (name == "aglaja") {
			@SetVariable("sobor_aglaja", 1);
		}
	}	
	
	void OnLoad(void) {
		m_People->add(SpawnActor(self(), "pt_d6q01_boy", "pers_boy", "d6q01_boy.xml"));
		m_People->add(SpawnActor(self(), "pt_d6q01_girl", "pers_girl", "d6q01_girl.xml"));
		m_People->add(SpawnActor(self(), "pt_d6q01_unosha", "pers_unosha", "d6q01_unosha.xml"));
		m_People->add(SpawnActor(self(), "pt_d6q01_wasted_male", "pers_wasted_male", "d6q01_wasted_male.xml"));
		m_People->add(SpawnActor(self(), "pt_d6q01_wasted_woman", "pers_wasted_girl", "d6q01_wasted_woman.xml"));
		m_People->add(SpawnActor(self(), "pt_d6q01_woman", "pers_woman", "d6q01_woman.xml"));
		m_People->add(SpawnActor(self(), "pt_d6q01_worker", "pers_worker", "d6q01_worker.xml"));
	}
	
	
	void OnUnload(void) {
		RemoveActorsFromVector(m_People);
	}
}
