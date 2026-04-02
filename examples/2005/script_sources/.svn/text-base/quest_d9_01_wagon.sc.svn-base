include std.sci

maintask TTrigger
{
	var object m_Guards;

	void init(void) {
		m_Guards = CreateObjectVector();
		PlaceGuards();
		for (;;) {
			@Hold();
		}
	}
	
	void PlaceGuards(void) {
		object scene;
		@GetMainOutdoorScene(scene);

		for (int i = 1; i <= 5; ++i) {
			m_Guards->add(SpawnStationaryActor(scene, "pt_gun_soldier" + i, "pers_soldat", "gun_sentry.xml"));
		}
		for (int i = 1; i <= 2; ++i) {
			SpawnStationaryActor(scene, "pt_gun_sanitar" + i, "pers_sanitar", "d9q01_sanitar.xml");
		}
		for (int i = 1; i <= 3; ++i) {
			SpawnStationaryActor(scene, "pt_gun_guard_soldier" + i, "pers_soldat", "soldier.xml");
		}
		for (int i = 1; i <= 2; ++i) {
			SpawnStationaryActor(scene, "pt_gun_guard_sanitar" + i, "pers_sanitar", "sanitar_stat.xml");
		}
	}
	
	void OnIntersection(object actor) {
		if (!m_Guards)
			return;

		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			disable OnIntersection;
			int iCount;
			m_Guards->size(iCount);
			for (int i = 0; i < iCount; ++i) {
				object dactor;
				m_Guards->get(dactor, i);
				object ractor;
				dactor->GetActor(ractor);
				if (ractor) {
					float fRand;
					@rand(fRand, 0.35);
					@Sleep(fRand);
					@SimulateAttack(ractor, actor);
				}
			}
			enable OnIntersection;
		}
	}
}
