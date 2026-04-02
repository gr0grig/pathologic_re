include std.sci
include dgame.sci

maintask TCotEva
{
	var bool m_bEva, m_bNude;
	var object m_Eva, m_Nude;
	
	void init(void) {
		@SetTimeEvent(1, 6 * 24);
		@SetTimeEvent(2, 6 * 24 + 7.5);
		@SetTimeEvent(3, 7 * 24 + 12);
		m_bEva = true;
		
		// as danko is in eva cottage
		m_Eva = SpawnActor(self(), "pt_eva", "NPC_Eva", "NPC_Danko_Eva.xml");
		
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (m_bEva) {
			m_Eva = SpawnActor(self(), "pt_eva", "NPC_Eva", "NPC_Danko_Eva.xml");
		}
		
		if (m_bNude) {
			m_Nude = SpawnActor(self(), "pt_eva", "pers_nudegirl", "nudegirl_danko.xml");
		}
	}
	
	void OnGameTime(int id, float fTime) {
		@Trace("OnGameTime" + id + " " + fTime);
		if (id == 1) {
			m_bEva = false;
			m_bNude = true;
		}
		else
		if (id == 2)  {
			if (!m_Eva) {
				AddMessage_D7_Danko_Eva(fTime);
			}
			else {
				float fGameTime;
				@GetGameTime(fGameTime);
				fGameTime += 0.3;
				if (fGameTime < 6 * 24 + 22) {
					@SetTimeEvent(id, fGameTime);
				}
			}
		}
		else
		if (id == 3) {
			if (!m_Nude && !m_Eva) {
				AddQuestActor("quest_d8_02");
			}
			else {
				float fGameTime;
				@GetGameTime(fGameTime);
				fGameTime += 0.3;
				if (fGameTime < 7 * 24 + 21) {
					@SetTimeEvent(id, fGameTime);
				}
			}
		}
	}
	
	void OnUnload(void) {
		if (m_Eva)
			@RemoveActor(m_Eva);
		if (m_Nude)
			@RemoveActor(m_Nude);
	}
	
	void OnTrigger(string name) {
		if (name == "noeva") {
			m_bEva = false;
		}
		else
		if (name == "eva") {
			m_bEva = true;
		}
	}		
}
