include std.sci

maintask TCotKaterina
{
	var object m_Klara;
	
	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (IsDay(3)) {
			m_Klara = SpawnActor(self(), "pt_klara", "NPC_Klara", "d3_klara.xml");
		}
	}
	
	void OnUnload(void) {
		if (m_Klara)
			@RemoveActor(m_Klara);
	}
}
