include std.sci

maintask TCotEva
{
	var bool m_bSpi4ka;
	var object m_Spi4ka;
	
	void init(void) {
		m_bSpi4ka = true;
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (m_bSpi4ka) {
			m_Spi4ka = SpawnActor(self(), "pt_spi4ka", "NPC_Spi4ka", "NPC_Danko_Spi4ka.xml");
		}
	}
	
	void OnUnload(void) {
		if (m_Spi4ka)
			@RemoveActor(m_Spi4ka);
	}
	
	void OnTrigger(string name) {
		if (name == "nospi4ka") {
			m_bSpi4ka = false;
		}
		else
		if (name == "spi4ka") {
			m_bSpi4ka = true;
		}
	}		
}
