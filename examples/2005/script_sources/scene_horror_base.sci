include std.sci

// CONSTANTS
const float c_fFogProbability = 0.5;
const float c_fAgonyProbability = 0.5;
// CONSTANTS

task THorrorScene
{
	void init(void) {
		GenerateAgonies("woman", "woman");
		GenerateAgonies("worker", "man");
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		TMakeHorror{};
	}

	void GenerateAgonies(string type, string kind) {
		for (int iLocator = 1; ; ++iLocator) {
			bool bFound;
			Vector vPos, vDir;
			@GetLocator("pt_agony_" + type + iLocator, bFound, vPos, vDir);
			if (!bFound)
				break;
			GenerateAgony(type, kind, vPos, vDir);
		}
	}

	void GenerateAgony(string type, string kind, Vector vPos, Vector vDir) {
		if (rndbool(c_fAgonyProbability)) {
			object actor;
			@AddActor(actor, "pers_" + type, self(), vPos, vDir, "agony1_" + kind + ".xml");
		}
	}
}

task TMakeHorrorBase
{
	void init(void) {
		GenerateFogs();

		bool bSuccess;
		@Sleep(3, bSuccess);
		if (bSuccess) {
			for (;;) {
				Vector vPoint;
				@GetRandomPFPoint(vPoint, 0, 0);
				NewFog(vPoint);
				@Sleep(30, bSuccess);
				if (!bSuccess)
					break;
			}
		}
	}
	
	void OnUnload(void) {
		@StopGroup0();
	}

	void NewFog(Vector vPoint) {
		@Trace("New fog at " + vPoint);
		object actor;
		@AddActorByType(actor, "fog", self(), vPoint, [0, 0, 1], "horror_fog.xml");
	}
	
	void GenerateFogs(void) {
		for (int iLocator = 1; ; ++iLocator) {
			bool bFound;
			Vector vPos, vDir;
			@GetLocator("pt_fog" + iLocator, bFound, vPos, vDir);
			if (!bFound)
				break;
			GenerateFog(vPos, vDir);
		}
	}
	
	void GenerateFog(Vector vPos, Vector vDir) {
		if (rndbool(c_fFogProbability)) {
			object actor;
			@AddActorByType(actor, "fog", self(), vPos, vDir, "fog_stat.xml");
		}
	}
}
