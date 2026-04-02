include std.sci

maintask TCotEva
{
	var bool m_bLaska;
	var object m_Laska;
	
	void init(void) {
		m_bLaska = true;
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (m_bLaska) {
			m_Laska = SpawnActor(self(), "pt_laska", "NPC_Laska", "NPC_Klara_Laska.xml");
		}
	}
	
	void OnUnload(void) {
		if (m_Laska)
			@RemoveActor(m_Laska);
	}
	
	void OnTrigger(string name) {
		if (name == "nolaska") {
			m_bLaska = false;
		}
		else
		if (name == "laska") {
			m_bLaska = true;
		}
	}		
}
