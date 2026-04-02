include kgame.sci

maintask TPositioner
{
	var int m_iKlaraDay;
	var object m_Klara;
	var object m_bMessages, m_bKlaras;
	
	void init(void) {
		m_iKlaraDay = -1;
	
		@CreateBoolVector(m_bMessages);
		@CreateBoolVector(m_bKlaras);
		for (int i = 0; i < 12; ++i) {
			m_bMessages->add(false);
			if ( (i + 1 < 6) || (i + 1 == 12) )
				m_bKlaras->add(false);
			else
				m_bKlaras->add(true);
		}
		
		for (;;) {
			@Hold();
		}
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "sleep_end") {
			UpdateKlaraPosition(GetDay());
			SendKlaraMail(GetDay(), GetGameTime());
		}
		else
		if (name == "remove_klara") {
			RemoveKlara();
			AddDiaryEntry_klara2_leave();
		}
		else 
		if (name == "klara_stay") {
			AddDiaryEntry_klara2_leave_fail();
		}
	}
	
	void RemoveKlara(void) {
		if (m_Klara)
			@Trigger(m_Klara, "cleanup");
			
		m_bKlaras->set(m_iKlaraDay - 1, false);
		FlushKlaraData();
	}
	
	void UpdateKlaraPosition(int iDay) {
		if (m_Klara)
			@RemoveActor(m_Klara);
			
		bool bKlara;
		m_bKlaras->get(bKlara, iDay - 1);
		if (!bKlara)
			return;
			
		object scene;
		string strScene = GetKlara2Scene(iDay);
		@Trace("Klara scene: " + strScene);
		@GetSceneByName(scene, strScene);
		
		if (scene) {
			m_Klara = SpawnActor(scene, "pt_klara" + iDay, "NPC_Klara", "k2system_klara2.xml");
			m_Klara->SetProperty("day", iDay);
			SetK2KlaraQuestDay(iDay);
			m_iKlaraDay = iDay;
		}
		else {
			@Trace("ERROR: Klara2 scene was not found: " + strScene);
		}
	}
	
	void SendKlaraMail(int iDay, float fTime) {
		bool bSent;
		m_bMessages->get(bSent, iDay - 1);
		if (bSent)
			return;
		m_bMessages->set(iDay - 1, true);
		SendKlara2Mail(iDay, fTime);
	}
	
	void FlushKlaraData(void) {
		for (int i = 0; i < 12; ++i) {
			bool bKlara;
			m_bKlaras->get(bKlara, i);
			SetKlara2Variable(i + 1, bKlara);
		}
	}
}