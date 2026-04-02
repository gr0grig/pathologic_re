include std.sci

maintask TFactory2
{
	var bool m_bBurah;
	var object m_Burah;
	
	void init(void) {
		m_bBurah = true;
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (m_bBurah) {
			m_Burah = SpawnActor(self(), "pt_burah", "NPC_Burah", "NPC_Klara_Burah.xml");
		}
	}
	
	void OnUnload(void) {
		if (m_Burah)
			@RemoveActor(m_Burah);
	}
	
	void OnTrigger(string name) {
		if (name == "noburah") {
			m_bBurah = false;
		}
		else
		if (name == "burah") {
			m_bBurah = true;
		}
	}		
}
