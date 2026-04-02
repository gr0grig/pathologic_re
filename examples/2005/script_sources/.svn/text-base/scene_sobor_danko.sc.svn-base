include std.sci

maintask TSobor
{
	var object m_Aglaja;
	var object m_Mask1, m_Mask2;
	
	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		int iAglaja;
		@GetVariable("sobor_aglaja", iAglaja);
		
		if (iAglaja) {
			m_Aglaja = SpawnActor(self(), "pt_Aglaja", "NPC_Aglaja", "NPC_Danko_Aglaja.xml");
			m_Mask1 = SpawnActor(self(), "pt_sobor_mask1", "pers_whitemask", "sobor_whitemask.xml");
			m_Mask2 = SpawnActor(self(), "pt_sobor_mask2", "pers_whitemask", "sobor_whitemask.xml");
		}
		
		TriggerActor("quest_d12_01", "sobor_load");
	}
	
	void OnUnload(void) {
		if (m_Aglaja)
			@RemoveActor(m_Aglaja);
			
		if (m_Mask1)
			@RemoveActor(m_Mask1);	
		if (m_Mask2)
			@RemoveActor(m_Mask2);	
			
		TriggerActor("quest_d12_01", "sobor_unload");
	}
	
	void OnTrigger(string name) {
		if (name == "noaglaja") {
			@SetVariable("sobor_aglaja", 0);
		}
		else
		if (name == "aglaja") {
			@SetVariable("sobor_aglaja", 1);
		}
	}
}
