include std.sci

maintask TWarehouseRubin
{
	var bool m_bRubin;
	var object m_Rubin;
	
	void init(void) {
		m_bRubin = true;
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (m_bRubin) {
			m_Rubin = SpawnActor(self(), "pt_rubin", "NPC_Rubin", "NPC_Danko_Rubin.xml");
		}
		
		TriggerActor("quest_k10_01", "warehouse_rubin_load");
	}
	
	void OnUnload(void) {
		if (m_Rubin)
			@RemoveActor(m_Rubin);
	}
	
	void OnTrigger(string name) {
		if (name == "norubin") {
			m_bRubin = false;
		}
		else
		if (name == "rubin") {
			m_bRubin = true;
		}
	}		
}
