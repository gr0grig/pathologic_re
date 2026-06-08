event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;

	void init(void)
	{
		object L0;
		tv0 = f_fa_a0_o();
		tv2 = f_fa_a0_o();
		@GetMainOutdoorScene(L0);
		tv1 = f_100_a4_o(L0, "pt_b10q04_bull", "pers_avrox", "b10q04_bull.xml");
		tv0->add(f_100_a4_o(L0, "pt_d10q03_morlok1", "pers_morlok", "d10q03_morlok.xml"));
		tv0->add(f_100_a4_o(L0, "pt_d10q03_morlok2", "pers_morlok", "d10q03_morlok.xml"));
		tv0->add(f_100_a4_o(L0, "pt_d10q03_morlok3", "pers_morlok", "d10q03_morlok.xml"));
		tv0->add(f_100_a4_o(L0, "pt_d10q03_salesman", "pers_salesman", "d10q03_salesman.xml"));
		tv0->add(f_100_a4_o(L0, "pt_d10q03_people1", "pers_worker", "d10q03_worker.xml"));
		tv0->add(f_100_a4_o(L0, "pt_d10q03_people2", "pers_dohodyaga", "d10q03_dohodyaga.xml"));
		tv0->add(f_100_a4_o(L0, "pt_d10q03_people3", "pers_unosha", "d10q03_unosha.xml"));
		tv0->add(f_100_a4_o(L0, "pt_d10q03_people4", "pers_alkash", "d10q03_alkash.xml"));
		f_dc_a1_v(10);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_sanitars") {
			object L0;
			int L1;
			f_14b_a2_v(tv0, "cleanup");
			if (tv1) {
				@Trigger(tv1, "cleanup");
			}
			@GetMainOutdoorScene(L0);
			for (L1 = 1; ; L1 = L1 + 1) {
				bool L2;
				Vector L3;
				Vector L4;
				L0->GetLocator("pt_b11q04_sanitar" + L1, L2, L3, L4);
				if (!L2) {
					break;
				}
				tv2->add(f_124_a4_o(L0, "pt_b11q04_sanitar" + L1, "pers_sanitar", "b11q04_sanitar.xml"));
			}
			tv3 = f_112_a4_o(L0, "pt_b11q04_corpse", "scripted", "b11q04_corpse.xml");
		} else {
			if (a0 == "fail") {
				f_ae_a0_v();
			} else {
				if (a0 == "completed") {
					f_b6_a0_v();
				}
			}
		}
	}

	void f_a0_a0_v(void)
	{
		int L0;
		@GetVariable("d10q03", L0);
		if (L0 != 1000) {
			f_ae_a0_v();
		}
		f_c9_a0_v();
	}

	void f_ae_a0_v(void)
	{
		@SetVariable("d10q03", -1);
		f_be_a0_v();
	}

	void f_b6_a0_v(void)
	{
		@SetVariable("d10q03", 1000);
		f_be_a0_v();
	}

	void f_be_a0_v(void)
	{
		f_14b_a2_v(tv0, "cleanup");
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
	}

	void f_c9_a0_v(void)
	{
		disable OnTrigger;
		f_be_a0_v();
		f_136_a1_v(tv2);
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@RemoveActor(f_f4_a0_o());
	}

	void f_dc_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_c9_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_a0_a0_v();
	}
}

object f_f4_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_fa_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_100_a4_o(object a0, string a1, string a2, string a3)
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
		@AddActor(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

object f_112_a4_o(object a0, string a1, string a2, string a3)
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
		@AddActorByType(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

object f_124_a4_o(object a0, string a1, string a2, string a3)
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

void f_136_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@RemoveActor(L2);
			}
		}
		a0->clear();
	}
}

void f_14b_a2_v(object a0, string a1)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@Trigger(L2, a1);
			}
		}
	}
}

