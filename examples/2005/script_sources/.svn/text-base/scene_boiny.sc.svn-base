include std.sci

const int c_iButcherCount = 12;
const int c_iMorlokCount = 6;

maintask TBoiny
{
	var object m_Spawns;

	void init(void) {
		m_Spawns = CreateObjectVector();
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		int iPointCount;
		for (iPointCount = 0; ; ++iPointCount) {
			bool bFound;
			@GetLocator("pt_spawn" + (iPointCount + 1), bFound);
			if (!bFound)
				break;
		}
		if (iPointCount < c_iButcherCount + c_iMorlokCount) {
			@Trace("Not enough spawn points");
			return;
		}
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
			m_Spawns->add(SpawnActor(self(), "pt_spawn" + nPoint, "pers_butcher", "boiny_butcher.xml"));
		}

		// spawn morloks
		for (int i = 0; i < c_iMorlokCount; ++i) {
			int n;
			@irand(n, iPointCount);
			int nPoint;
			vec->get(nPoint, n);
			vec->remove(n);
			--iPointCount;
			m_Spawns->add(SpawnActor(self(), "pt_spawn" + nPoint, "pers_morlok", "boiny_morlok.xml"));
		}
	}
	
	void OnUnload(void) {
		RemoveActorsFromVector(m_Spawns);
	}
}
