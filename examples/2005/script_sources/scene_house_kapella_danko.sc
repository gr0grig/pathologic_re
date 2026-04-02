include std.sci

maintask TCotKapella
{
	var bool m_bKapella;
	var object m_Kapella;
	
	void init(void) {
		m_bKapella = true;
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (m_bKapella) {
			m_Kapella = SpawnActor(self(), "pt_kapella", "NPC_Kapella", "NPC_Danko_Kapella.xml");
		}
	}
	
	void OnUnload(void) {
		if (m_Kapella)
			@RemoveActor(m_Kapella);
	}
	
	void OnTrigger(string name) {
		if (name == "nokapella") {
			m_bKapella = false;
		}
		else
		if (name == "kapella") {
			m_bKapella = true;
		}
	}		
}
