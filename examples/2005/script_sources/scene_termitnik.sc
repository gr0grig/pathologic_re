include std.sci
include scene_actor_gen.sci

const int c_iButcherCount = 12;
const int c_iMorlokCount = 6;

maintask TTermitnik : TSceneActorGen
{
	var object m_Spawns;

	void init(void) {
		m_Spawns = CreateObjectVector();
		super.init();
	}
	
	void OnLoad(void) {
		TriggerActor("quest_d8_04", "termitnik_load");
		TriggerActor("quest_d8_03", "termitnik_load");
		
		int iPointCount;
		for (iPointCount = 0; ; ++iPointCount) {
			bool bFound;
			@GetLocator("pt_spawn" + (iPointCount + 1), bFound);
			if (!bFound)
				break;
		}
		if (iPointCount < c_iButcherCount + c_iMorlokCount) {
			@Trace("Not enough spawn points");
		}
		else {
			object vec;
			@CreateIntVector(vec);
			for (int i = 1; i <= iPointCount; ++i)
				vec->add(i);
			
			// spawn butchers
			for (int i = 0; i < c_iButcherCount; ++i) {
				int n;
				@irand(n, iPointCount);
				int nPoint;
				vec->get(nPoint, n);
				vec->remove(n);
				--iPointCount;
				m_Spawns->add(SpawnActor(self(), "pt_spawn" + nPoint, "pers_butcher", "termitnik_butcher.xml"));
			}

			// spawn morloks
			for (int i = 0; i < c_iMorlokCount; ++i) {
				int n;
				@irand(n, iPointCount);
				int nPoint;
				vec->get(nPoint, n);
				vec->remove(n);
				--iPointCount;
				m_Spawns->add(SpawnActor(self(), "pt_spawn" + nPoint, "pers_morlok", "termitnik_morlok.xml"));
			}
		}
		
		super.OnLoad();
	}
	
	void OnUnload(void) {
		RemoveActorsFromVector(m_Spawns);
		super.OnUnload();
	}

	void GenerateActors(object locators) {
		for (int i = 1; ; ++i) {
			bool bFound;
			@GetLocator("pt_agony" + i, bFound);
			if (!bFound)
				break;
			locators->add(0);
			locators->add(i);
			locators->add(0);
		}
	}

	string GetLocatorName(int iType, int iIndex) {
		return "pt_agony" + iIndex;
	}
	
	string GetActorName(int iType, int iSubType) {
		return "pers_morlok";
	}
	
	string GetXmlName(int iType, int iSubType) {
		return "agony1_morlok.xml";
	}
}
