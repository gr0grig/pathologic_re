include std.sci

maintask TCotEva
{
	var bool m_bMaria;
	var object m_Maria;
	
	void init(void) {
		m_bMaria = true;
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (m_bMaria) {
			m_Maria = SpawnActor(self(), "pt_maria", "NPC_Maria", "NPC_Burah_Maria.xml");
		}
	}
	
	void OnUnload(void) {
		if (m_Maria)
			@RemoveActor(m_Maria);
	}
	
	void OnTrigger(string name) {
		if (name == "nomaria") {
			m_bMaria = false;
		}
		else
		if (name == "maria") {
			m_bMaria = true;
		}
	}		
}
