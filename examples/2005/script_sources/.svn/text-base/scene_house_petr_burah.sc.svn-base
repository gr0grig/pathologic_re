include std.sci

maintask TCotEva
{
	var bool m_bPetr;
	var object m_Petr;
	
	void init(void) {
		m_bPetr = true;
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (m_bPetr) {
			m_Petr = SpawnActor(self(), "pt_petr", "NPC_Petr", "NPC_Burah_Petr.xml");
		}
	}
	
	void OnUnload(void) {
		if (m_Petr)
			@RemoveActor(m_Petr);
	}
	
	void OnTrigger(string name) {
		if (name == "nopetr") {
			m_bPetr = false;
		}
		else
		if (name == "petr") {
			m_bPetr = true;
		}
	}		
}
