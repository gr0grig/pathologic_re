include std.sci

maintask TCotKapella
{
	var bool m_bKapella, m_bHan;
	var object m_Kapella, m_Han;
	
	void init(void) {
		m_bKapella = true;
		m_bHan = false;
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (m_bKapella) {
			m_Kapella = SpawnActor(self(), "pt_kapella", "NPC_Kapella", "NPC_Burah_Kapella.xml");
		}
		if (m_bHan) {
			m_Han = SpawnActor(self(), "pt_han", "NPC_Han", "NPC_Burah_Han.xml");
		}
	}
	
	void OnUnload(void) {
		if (m_Kapella)
			@RemoveActor(m_Kapella);
		if (m_Han)
			@RemoveActor(m_Han);
	}
	
	void OnTrigger(string name) {
		if (name == "nokapella") {
			m_bKapella = false;
		}
		else
		if (name == "kapella") {
			m_bKapella = true;
		}
		else
		if (name == "nohan") {
			m_bHan = false;
		}
		else
		if (name == "han") {
			m_bHan = true;
		}
	}		
}
