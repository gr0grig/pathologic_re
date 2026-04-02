include std.sci

maintask TTrigger
{
	var bool m_bActive;
	
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnIntersection(object actor) {
		if (!m_bActive)
			return;
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			object scene;
			@GetSceneByName(scene, "boiny_well");
			@RemoveScene(scene);

			@GetMainOutdoorScene(scene);
			bool bFound;
			Vector vPos, vDir;
			scene->GetLocator("pt_b11q01_well_return", bFound, vPos, vDir);
			@Teleport(actor, scene, vPos, vDir);
		}
	}
	
	void OnTrigger(string name) {
		if (name == "activate") {
			m_bActive = true;
		}
	}
}
