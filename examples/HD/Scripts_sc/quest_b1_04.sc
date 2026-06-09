event OnGameTime 9;

maintask t0
{
	var object tv0;

	void init(void)
	{
		object L0;
		tv0 = f_60_a0_o();
		@GetMainOutdoorScene(L0);
		tv0->add(f_66_a4_o(L0, "pt_b1q04_grabitel1", "pers_grabitel", "b1q04_grabitel.xml"));
		tv0->add(f_66_a4_o(L0, "pt_b1q04_grabitel2", "pers_grabitel", "b1q04_grabitel2.xml"));
		tv0->add(f_66_a4_o(L0, "pt_b1q04_worker1", "pers_worker", "b1q04_worker.xml"));
		tv0->add(f_66_a4_o(L0, "pt_b1q04_worker2", "pers_worker", "b1q04_worker.xml"));
		f_42_a1_v(1);
	}

	void f_31_a0_v(void)
	{
		f_35_a0_v();
	}

	void f_35_a0_v(void)
	{
		if (tv0) {
			f_78_a1_v(tv0);
			tv0 = null;
		}
		@RemoveActor(f_5a_a0_o());
	}

	void f_42_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_35_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_31_a0_v();
	}
}

object f_5a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_60_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_66_a4_o(object a0, string a1, string a2, string a3)
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

void f_78_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				L2->Remove();
			}
		}
		a0->clear();
	}
}

