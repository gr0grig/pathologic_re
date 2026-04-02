include std.sci

maintask TSceneBurah
{
	var object m_SvitaActors, m_SvitaXMLs, m_SvitaDead;
	var object m_NPC, m_Svita;
	var bool m_bInited;
	var int m_iDay;
	
	void init(void) {
		m_bInited = false;
		
		m_iDay = GetDay();
		
		@CreateObjectVector(m_Svita);
		@CreateStringVector(m_SvitaActors);
		@CreateStringVector(m_SvitaXMLs);
		@CreateBoolVector(m_SvitaDead);
		
		InitSvita(m_SvitaActors, m_SvitaXMLs, m_SvitaDead);
	
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		bool bHas, bInited = false;
		@HasProperty("inited", bHas);
		if (bHas) {
			int iVal;
			@GetProperty("inited", iVal);
			bInited = (iVal != 0);
		}
		
		if (!bInited)
			return;
			
		if (!m_bInited) {
			m_NPC = CreateMainNPC(self());
			m_NPC->SetProperty("day", m_iDay);
			m_bInited = true;
		}
	
		int iSize;
		m_SvitaActors->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			string strActorName;
			m_SvitaActors->get(strActorName, i);
			string strXMLName;
			m_SvitaXMLs->get(strXMLName, i);
			
			object actor;
			
			bool bDead;
			m_SvitaDead->get(bDead, i);
			
			if (!bDead) {
				actor = SpawnActor(self(), "pt_k2s_svita" + (i + 1), strActorName, strXMLName);
				actor->SetProperty("index", i);
			}
			
			m_Svita->add(actor);
		}
	}
	
	void OnUnload(void) {
		int iSize;
		m_Svita->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			object actor;
			m_Svita->get(actor, i);
			if (actor) {
				bool bDead;			
				actor->HasProperty("dead", bDead);
				m_SvitaDead->set(bDead, i);
				@RemoveActor(actor);
			}
		}
	}
}
