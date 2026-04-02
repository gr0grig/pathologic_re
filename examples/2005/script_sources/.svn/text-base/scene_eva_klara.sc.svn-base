include std.sci

maintask TCotEva
{
	var bool m_bDanko, m_bEva;
	var object m_Danko, m_Eva;
	
	void init(void) {
		m_bDanko = true;
		m_bEva = true;
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (m_bDanko) {
			m_Danko = SpawnActor(self(), "pt_Danko", "NPC_Bakalavr", "NPC_Klara_Danko.xml");
		}

		if (m_bEva) {
			m_Eva = SpawnActor(self(), "pt_eva", "NPC_Eva", "NPC_Klara_Eva.xml");
		}
	
		TriggerActor("quest_k6_01", "cot_eva_load");
		TriggerActor("quest_k7_01", "cot_eva_load");
	}
	
	void OnUnload(void) {
		if (m_Danko)
			@RemoveActor(m_Danko);
		if (m_Eva)
			@RemoveActor(m_Eva);
	}
	
	void OnTrigger(string name) {
		if (name == "nodanko") {
			m_bDanko = false;
		}
		else
		if (name == "danko") {
			m_bDanko = true;
		}
		else
		if (name == "noeva") {
			m_bEva = false;
		}
		else
		if (name == "eva") {
			m_bEva = true;
		}
	}		
}
