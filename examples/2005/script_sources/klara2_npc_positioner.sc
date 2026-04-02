include kgame.sci

const int c_iBlock = 0;
const int c_iAglaja = 1;

maintask TPositioner
{
	var int m_iNPCsDay;
	void init(void) {
		m_iNPCsDay = -1;

		for (;;) {
			@Hold();
		}	
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init") {
			// setting timeevent for npc
			int iHour = GetHour();
			if (iHour > 22) {
				@Trace("to late for k2system quest");
				return;
			}
			
			float fAddDelay = 0;
			if (GetHour() < 7)
				fAddDelay = 7 - GetHour();
			
			float fGameTime;
			@GetGameTime(fGameTime);
			float fDelay;
			@rand(fDelay, 0.3, 1);
			@SetTimeEvent(c_iBlock, fGameTime + fDelay + fAddDelay);
			@rand(fDelay, 0.3, 1);
			@SetTimeEvent(c_iAglaja, fGameTime + fDelay + fAddDelay);
			m_iNPCsDay = GetDay();
		}
		else if (name == "remove_danko") {
			object scene;
			@GetSceneByName(scene, GetDankoScene(m_iNPCsDay));
			if (scene) {
				scene->SetProperty("inited", 0);
			}
		}
		else if (name == "remove_burah") {
			object scene;
			@GetSceneByName(scene, GetBurahScene(m_iNPCsDay));
			if (scene) {
				scene->SetProperty("inited", 0);
			}
		}
	}
	
	void OnGameTime(int id, float fTime) {	
		@Trace("id = " + id + ", fTime = " + fTime + ", GetDay() = " + GetDay());
		if ((id == c_iBlock) && (m_iNPCsDay == GetDay())) {
			SendBlockMail(m_iNPCsDay, fTime);	
			object scene;
			@GetSceneByName(scene, GetDankoScene(m_iNPCsDay));
			if (!scene) {
				@Trace("K2System wrong danko scene: " + GetDankoScene(m_iNPCsDay));
			}
			else {
				scene->SetProperty("inited", 1);
				SetK2DankoQuestDay(m_iNPCsDay);
			}
		}
		else
		if ((id == c_iAglaja) && (m_iNPCsDay == GetDay())) {
			SendAglajaMail(m_iNPCsDay, fTime);		
			object scene;
			@GetSceneByName(scene, GetBurahScene(m_iNPCsDay));
			if (!scene) {
				@Trace("K2System wrong burah scene: " + GetBurahScene(m_iNPCsDay));
			}
			else {
				scene->SetProperty("inited", 1);
				SetK2BurahQuestDay(m_iNPCsDay);
			}
		}
	}
}