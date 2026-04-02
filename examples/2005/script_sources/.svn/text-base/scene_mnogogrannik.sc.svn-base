include std.sci

const int c_iLittleboyCount = 6;
const int c_iLittlegirlCount = 6;
const int c_iBoyCount = 5;
const int c_iGirlCount = 5;

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
		if (iPointCount < c_iLittleboyCount + c_iLittlegirlCount + c_iBoyCount + c_iGirlCount) {
			@Trace("Not enough spawn points");
			return;
		}
		
		object vec;
		@CreateIntVector(vec);
		for (int i = 1; i <= iPointCount; ++i)
			vec->add(i);
		
		// spawn littleboys
		for (int i = 0; i < c_iLittleboyCount; ++i) {
			int n;
			@irand(n, iPointCount);
			int nPoint;
			vec->get(nPoint, n);
			vec->remove(n);
			--iPointCount;
			m_Spawns->add(SpawnActor(self(), "pt_spawn" + nPoint, "pers_littleboy", "littleboy_mnogogrannik.xml"));
		}

		// spawn littlegirls
		for (int i = 0; i < c_iLittlegirlCount; ++i) {
			int n;
			@irand(n, iPointCount);
			int nPoint;
			vec->get(nPoint, n);
			vec->remove(n);
			--iPointCount;
			m_Spawns->add(SpawnActor(self(), "pt_spawn" + nPoint, "pers_littlegirl", "littlegirl_mnogogrannik.xml"));
		}
		
		// spawn boys
		for (int i = 0; i < c_iBoyCount; ++i) {
			int n;
			@irand(n, iPointCount);
			int nPoint;
			vec->get(nPoint, n);
			vec->remove(n);
			--iPointCount;
			m_Spawns->add(SpawnActor(self(), "pt_spawn" + nPoint, "pers_doberman", "boy_mnogogrannik.xml"));
		}

		// spawn girls
		for (int i = 0; i < c_iGirlCount; ++i) {
			int n;
			@irand(n, iPointCount);
			int nPoint;
			vec->get(nPoint, n);
			vec->remove(n);
			--iPointCount;
			m_Spawns->add(SpawnActor(self(), "pt_spawn" + nPoint, "pers_girl", "girl_mnogogrannik.xml"));
		}
		
	}
	
	void OnUnload(void) {
		RemoveActorsFromVector(m_Spawns);
	}
}
