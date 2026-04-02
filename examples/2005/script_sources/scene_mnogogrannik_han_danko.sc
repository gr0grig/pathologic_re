include std.sci

maintask TMnogogrannikHan
{
	var object m_Han;
	var bool m_bHan;
	
	void init(void) {
		m_bHan = true;
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (m_bHan) {
			m_Han = SpawnActor(self(), "pt_han", "NPC_Han", "NPC_Danko_Han.xml");
		}
	}
	
	void OnUnload(void) {
		if (m_Han)
			@RemoveActor(m_Han);
	}
	
	void OnTrigger(string name) {
		if (name == "nohan") {
			m_bHan = false;
		}
		else
		if (name == "han") {
			m_bHan = true;
		}
	}	
}
