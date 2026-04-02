include scene_cot_base.sci

maintask TKabak : TCotBase
{
	var bool m_bAndrei;
	var object m_Salesman, m_SalesmanItems, m_SalesmanAmounts, m_SalesmanSel;
	var object m_Andrei, m_AndreiItems, m_AndreiAmounts, m_AndreiSel;
	
	void init(void) {
		@CreateIntVector(m_SalesmanAmounts);
		@CreateIntVector(m_AndreiAmounts);

		m_bAndrei = true;
		super.init();
	}
	
	void OnServantsInit(object servants) 
	{
		if (m_bAndrei) {
			m_Andrei = SpawnActor(self(), "pt_andrei", "NPC_Andrei", "NPC_Burah_Andrei.xml");
			if (m_AndreiItems)
				RestoreContainer(m_Andrei, 0, m_AndreiItems, m_AndreiAmounts, m_AndreiSel);
			servants->add(m_Andrei);
		}
		else
			m_Andrei = null;
		
		servants->add(SpawnActor(self(), "pt_dance", "pers_nudegirl_dance", "nudegirl_dance.xml"));
		
		m_Salesman = SpawnActor(self(), "pt_salesman", "pers_dohodyaga", "salesman_kabak.xml");
		if (m_SalesmanItems)
			RestoreContainer(m_Salesman, 0, m_SalesmanItems, m_SalesmanAmounts, m_SalesmanSel);
		servants->add(m_Salesman);
		
		servants->add(SpawnScriptedActor(self(), "ps_kabak_alkash1", "cs_play_cycle.bin"));
		servants->add(SpawnScriptedActor(self(), "ps_kabak_alkash2", "cs_play_cycle.bin"));
		servants->add(SpawnScriptedActor(self(), "ps_kabak_unosha1", "cs_play_cycle.bin"));
		servants->add(SpawnScriptedActor(self(), "ps_kabak_woman1", "cs_play_cycle.bin"));
		servants->add(SpawnScriptedActor(self(), "ps_kabak_worker1", "cs_play_cycle.bin"));
	}
	
	void OnTrigger(string name) {
		if (name == "noandrei") {
			m_bAndrei = false;
		}
		else
		if (name == "andrei") {
			m_bAndrei = true;
		}	
	}	
	
	void OnUnload(void) {
		TriggerActor("quest_b2_03", "kabak_unload");
		
		if (m_Salesman) {
			m_SalesmanItems = GetContainerItems(m_Salesman, 0, m_SalesmanAmounts);
			m_SalesmanSel = GetContainerSelItems(m_Salesman, 0);
		}
		
		if (m_Andrei) {
			m_AndreiItems = GetContainerItems(m_Andrei, 0, m_AndreiAmounts);
			m_AndreiSel = GetContainerSelItems(m_Andrei, 0);
		}
		
		super.OnUnload();
	}	
}
