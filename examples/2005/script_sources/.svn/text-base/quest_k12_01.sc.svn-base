include std.sci
include kgame.sci
include citymanager_base.sci
include volonteers_base.sci
include game_finals.sci

bool IsBurahInSobor() {
	int iVal;
	@GetVariable("k12q01BurahInSobor", iVal);
	return (iVal != 0);
}

bool IsDankoInSobor() {
	int iVal;
	@GetVariable("k12q01DankoInSobor", iVal);
	return (iVal != 0);
}

bool IsPlayerReady() {
	bool bActive;
	@IsOverrideActive(bActive);
	return !bActive;
}

void InitNPCs(void) {
	object scene;
	@GetSceneByName(scene, "warehouse_rubin");
	@Trigger(scene, "rubin");
	LockDoorActor("warehouse_rubin@door1", false);
	
	@GetSceneByName(scene, "cot_eva");
	@Trigger(scene, "danko");
	LockDoorActor("cot_eva@door1", false);
}

maintask TQuest
{
	var bool m_bTheaterInited, m_bSoborInited, m_bHiddenRoomInited, m_bLocked;
	var object m_BirdmaskS, m_Block, m_Aglaja, m_Klara2, m_Burah, /*m_BurahFactory,*/ m_Danko;
	var object m_BirdmaskT, m_WhitemaskT;
	var object m_Boy, m_Girl;
	
	void PlaceTheaterBirdmask(void) {
		object scene;
		@GetMainOutdoorScene(scene);

		LockDoorActor("theater@door1", true);
		m_BirdmaskT = SpawnStationaryActor(scene, "pt_b12q01_birdmask_t", "pers_birdmask", "k12q01_birdmask_t.xml");
	}	
	
	void init(void) {
		m_bSoborInited = false;
		m_bTheaterInited = false;
		m_bHiddenRoomInited = false;
		m_bLocked = false;
		
		InitNPCs();
		
		@SetTimeEvent(0, 12 * 24);
		if (GetHour() >= 8) {
			if (IsChildCondition()) {
				TriggerActor2("volonteers_klara", "childs_letter", "");
			}
		}
		else
			@SetTimeEvent(1, 11 * 24 + 8);
		
		SetFinal(c_iFinalNeutral);
		
		AddDiaryEntry_k12q01();
		AddDiaryEntry_k12q01Desc();
		
		object scene;
		@GetMainOutdoorScene(scene);
		m_BirdmaskS = SpawnStationaryActor(scene, "pt_b12q01_birdmask_s", "pers_birdmask", "k12q01_birdmask_s.xml");
		
		//@GetSceneByName(scene, "factory");
		//m_BurahFactory = SpawnActor(scene, "pt_d12q01_burah", "NPC_Burah", "k12q01_burah_factory.xml");
		
		LockDoorActor("sobor@door1", true);
		LockDoorActor("hidden_room@door1", true);
		LockDoorActor("mnogogrannik@door1", true);
		
		LockDoorActor("cot_eva@door1", false);
		LockDoorActor("termitnik2@door1", false);
		LockDoorActor("uprava_admin@door1", false);
		
		float fTime;
		@GetGameTime(fTime); // to see the preformance
		if (fTime < 11 * 24 + 7) {
			LockDoorActor("theater@door1", false);
			@SetTimeEvent(2, 11 * 24 + 7);
		}
		else {
			PlaceTheaterBirdmask();
		}		
		
		for (;;) {
			@Hold();
		}
	}
	
	void OnGameTime(int id, float fTime) {
		disable OnTrigger;
		disable OnGameTime;
		
		if (id == 0) {
			@Trace("final 0");
			if (m_bLocked || !IsPlayerReady()) {
				@Trace("final 1 locked: " + m_bLocked);
				float fTime;
				@GetGameTime(fTime);
				fTime += 1.0 / 120.0;
				@SetTimeEvent(0, fTime);	
				
				enable OnTrigger;
				enable OnGameTime;
				
				return;
			}
			PlayFinalMovie();
		}
		else if (id == 1) {
			// checking if player has rescued people for hidden room
			if (IsChildCondition()) {
				TriggerActor2("volonteers_klara", "childs_letter", "");
			}
			enable OnTrigger;
			enable OnGameTime;
		}
		else if (id == 2) {
			PlaceTheaterBirdmask();
			enable OnTrigger;
			enable OnGameTime;
		}
	}	

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_sobor") { // called by birdmask, near sobor, so we are sure player is not inside
			object scene;
			@GetSceneByName(scene, "sobor");
			@Trigger(scene, "noaglaja");
			//if (m_BurahFactory)
			//	@Trigger(m_BurahFactory, "cleanup");
			
			LockDoorActor("isobor@door1", true);
			LockDoorActor("sobor@door1", false);
			m_bSoborInited = true;
		}
		else if (name == "sobor_load") { // playing cutscene
			if (m_bSoborInited) {
				m_bLocked = true;
				AddQuestActor("quest_k12_01_sobor_cutscene");
			}
		}
		else if (name == "sobor_cutscene_end") {
			object scene;
			@GetSceneByName(scene, "sobor");
			m_Block = SpawnActor(scene, "pt_b12q01_block", "NPC_Block", "k12q01_Block.xml");
			m_Aglaja = SpawnActor(scene, "pt_b12q01_aglaja", "NPC_Aglaja", "k12q01_Aglaja.xml");
			m_Klara2 = SpawnActor(scene, "pt_b12q01_kapella", "NPC_Klara", "k12q01_Klara2.xml");
			if (IsBurahInSobor()) {
				m_Burah = SpawnActor(scene, "pt_d12q01_burah", "NPC_Burah", "k12q01_Burah.xml");
			}
			if (IsDankoInSobor()) {
				m_Danko = SpawnActor(scene, "pt_b12q01_danko", "NPC_Bakalavr", "k12q01_Danko.xml");
			}
		}
		else if (name == "sobor_unload") {
			if (m_bSoborInited) {
				if (m_BirdmaskS)
					m_BirdmaskS->Remove();
				
				if (m_Block)
					@Trigger(m_Block, "cleanup");
				if (m_Aglaja)
					@Trigger(m_Aglaja, "cleanup");
				if (m_Klara2)
					@Trigger(m_Klara2, "cleanup");
				if (m_Burah)
					@Trigger(m_Burah, "cleanup");
				if (m_Danko)
					@Trigger(m_Danko, "cleanup");
					
				LockDoorActor("sobor@door1", true);
				m_bLocked = false;
			}
		}
		else if (name == "init_theater") { // called by birdmask, near theater, so we are sure player is not inside
			RemoveActorByName("NPC_Mark");
		
			LockDoorActor("itheater@door1", true);
			LockDoorActor("theater@door1", false);
			m_bTheaterInited = true;
		}
		else if (name == "theater_load") {
			if (m_bTheaterInited) { // playing cutscene
				m_bLocked = true;
				AddQuestActor("quest_k12_01_theater_cutscene");
				@SetVariable("k12q01TheaterIsVisited", 1);
			}
		}		
		else if (name == "theater_cutscene_end") {
			object scene;
			@GetSceneByName(scene, "theater");
		
			m_BirdmaskT = SpawnActor(scene, "pt_b12q01_birdmask", "pers_birdmask", "k12q01_tbirdmask.xml");
			m_WhitemaskT = SpawnActor(scene, "pt_b12q01_whitemask", "pers_whitemask", "k12q01_twhitemask.xml");
		}
		else if (name == "theater_unload") {
			if (m_bTheaterInited) { 
				if (m_BirdmaskT)
					@Trigger(m_BirdmaskT, "cleanup");
				if (m_WhitemaskT)
					@Trigger(m_WhitemaskT, "cleanup");
			
				LockDoorActor("theater@door1", true);
				m_bLocked = false;
			}
		}		
		else if (name == "init_hidden_room") { // hidden room is closed all the game, so we are sure player is not inside
			// mnogogrannik outdoor
			LockDoorActor("mnogogrannik_han@door1", false); 
			
			// mnogogrannik indoor
			LockDoorActor("mnogogrannik_han@door2", false); // hidden room indoor door
			LockDoorActor("hidden_room@door1", false);
			
			// han indoor
			LockDoorActor("imnogogrannik_han@door1", false); 
			LockDoorActor("mnogogrannik@door1", false);
			
			m_bHiddenRoomInited = true;
		}
		else if (name == "hidden_room_load") { // play cutscene
			if (m_bHiddenRoomInited) {
				m_bLocked = true;
				@SetVariable("k12q01ChildsAreVisited", 1);
				AddQuestActor("quest_k12_01_hidden_room_cutscene");
			}
		}
		else if (name == "hidden_room_cutscene_end") {
			object scene;
			@GetSceneByName(scene, "hidden_room");
			m_Boy = SpawnActor(scene, "pt_girl", "pers_littlegirl2", "k12q01_littlegirl.xml");
			m_Girl = SpawnActor(scene, "pt_boy", "pers_littleboy2", "k12q01_littleboy.xml");
		}
		else if (name == "hidden_room_unload") {
			if (m_bHiddenRoomInited) {
				LockDoorActor("hidden_room@door1", true);
				LockDoorActor("mnogogrannik@door1", true);
				m_bLocked = false;
				
				// checking if player has rescued people for theater
				if (IsTheaterCondition()) {
					TriggerActor2("volonteers_klara", "theater_letter", "");
				}
			}
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("k12q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				Cleanup();
			}
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Fail(void) {
		@SetVariable("k12q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k12q01", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		@RemoveActor(self());
	}
}
