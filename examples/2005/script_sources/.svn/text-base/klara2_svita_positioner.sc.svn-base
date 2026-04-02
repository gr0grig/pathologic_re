include kgame.sci

maintask TPositioner
{
	var object m_Svita;
	var int m_iSvitaDay;
	void init(void) {
		m_iSvitaDay = -1;
	
		for (int i = 0; i < 6; ++i) {
			@SetTimeEvent(6 + i, (i + 6) * 24);
		}
	
		@CreateObjectVector(m_Svita);
		
		for (;;) {
			@Hold();
		}	
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_svita") {
			PlaceSvita(GetDay());
		}
		else
		if (name == "wonder") {
			@TriggerWorld("lightning");
			Wonder();
			RemoveSvita();
			if (m_iSvitaDay != -1) {
				SetKlara2SvitaRemoved(m_iSvitaDay, true);
				AddDiaryEntry_klara2_albinos_wonder();
			}
		}
		else 
		if (name == "bad_wonder") {
			int iDay = GetDay();
			object scene;
			@GetMainOutdoorScene(scene);
			SpawnActor(scene, "pt_k2system" + iDay + "_albinos", "pers_rat", "k2system_rat.xml");
			if (rndbool(0.5))
				SpawnActor(scene, "pt_k2system" + iDay + "_patrol", "pers_rat_big", "k2system_rat_big.xml");
			if (rndbool(0.5))
				SpawnActor(scene, "pt_k2system" + iDay + "_nude", "pers_rat", "k2system_rat.xml");
			if (rndbool(0.5))
				SpawnActor(scene, "pt_k2system" + iDay + "_dohodyaga1", "pers_rat_big", "k2system_rat_big.xml");
			if (rndbool(0.5))				
				SpawnActor(scene, "pt_k2system" + iDay + "_dohodyaga2", "pers_rat", "k2system_rat.xml");
			AddDiaryEntry_klara2_albinos_wonder_fail();
		}
	}
	
	void OnGameTime(int id, float fTime) {	
		if (id == m_iSvitaDay) 
			RemoveSvita();
	}

	void PlaceSvita(int iDay) {
		object scene;
		@GetMainOutdoorScene(scene);
		
		RemoveSvita();
		
		m_iSvitaDay = iDay;
		
		m_Svita->add(SpawnStationaryActor(scene, "pt_k2system" + iDay + "_albinos", "pers_albinos", "k2system" + iDay + "_albinos.xml"));
		m_Svita->add(SpawnStationaryActor(scene, "pt_k2system" + iDay + "_patrol", "pers_patrool", "k2system" + iDay + "_patrol.xml"));
		m_Svita->add(SpawnStationaryActor(scene, "pt_k2system" + iDay + "_nude", "pers_nudegirl", "k2system" + iDay + "_nude.xml"));
		m_Svita->add(SpawnStationaryActor(scene, "pt_k2system" + iDay + "_dohodyaga1", "pers_dohodyaga", "k2system" + iDay + "_dohodyaga1.xml"));
		m_Svita->add(SpawnStationaryActor(scene, "pt_k2system" + iDay + "_dohodyaga2", "pers_dohodyaga", "k2system" + iDay + "_dohodyaga2.xml"));
	}
	
	void Wonder(void) {
		TriggerStationaryActorsInVector(m_Svita, "wonder");
	}
	
	void RemoveSvita(void) {
		RemoveStationaryActorsFromVector(m_Svita);
		m_Svita->clear();
	}
}