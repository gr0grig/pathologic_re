include std.sci

maintask TUprava
{
	var object m_Klara;
	
	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		TriggerActor("quest_d11_02", "uprava_load");
		
		if (IsDay(11)) {
			m_Klara = SpawnActor(self(), "pt_d11_klara", "NPC_Klara", "d11_klara.xml");
		}
	}
	
	void OnUnload(void) {
		if (m_Klara)
			@RemoveActor(m_Klara);
	}
}
