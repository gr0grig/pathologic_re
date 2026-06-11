event OnIntersection 23;

maintask t0
{
	var object tv0;

	void init(void)
	{
		tv0 = f_70_a0_o();
		f_b_a0_v();
		for (; ; ) {
			@Hold();
		}
	}

	void f_b_a0_v(void)
	{
		object L0;
		int L1;
		int L2;
		int L3;
		int L4;
		@GetMainOutdoorScene(L0);
		for (L1 = 1; L1 <= 5; L1++) {
			tv0->add(f_76_a4_o(L0, "pt_gun_soldier" + L1, "pers_soldat", "gun_sentry.xml"));
		}
		for (L2 = 1; L2 <= 2; L2++) {
			f_76_a4_o(L0, "pt_gun_sanitar" + L2, "pers_sanitar", "d9q01_sanitar.xml");
		}
		for (L3 = 1; L3 <= 3; L3++) {
			f_76_a4_o(L0, "pt_gun_guard_soldier" + L3, "pers_soldat", "soldier.xml");
		}
		for (L4 = 1; L4 <= 2; L4++) {
			f_76_a4_o(L0, "pt_gun_guard_sanitar" + L4, "pers_sanitar", "sanitar_stat.xml");
		}
	}

	void OnIntersection(object a0)
	{
		bool L0;
		if (!tv0) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (L0) {
			int L1;
			int L2;
			disable OnIntersection;
			tv0->size(L1);
			for (L2 = 0; L2 < L1; L2++) {
				object L3;
				object L4;
				tv0->get(L3, L2);
				L3->GetActor(L4);
				if (L4) {
					float L5;
					@rand(L5, 0.3499999940395355);
					@Sleep(L5);
					@SimulateAttack(L4, a0);
				}
			}
			enable OnIntersection;
		}
	}
}

object f_70_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_76_a4_o(object a0, string a1, string a2, string a3)
{
	bool L0;
	Vector L1;
	Vector L2;
	object L3;
	a0->GetLocator(a1, L0, L1, L2);
	if (!L0) {
		@Trace("Locator " + a1 + " doesn't exist");
		L3 = null;
	} else {
		a0->AddStationaryActor(L3, L1, L2, a2, a3);
	}
	return L3;
}

