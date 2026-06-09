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
		tv2 = f_bf_a0_o();
		tv3 = f_bf_a0_o();
		f_a1_a1_v(7);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_termitnik2") {
			object L0;
			int L1;
			f_d7_a2_v("termitnik2@door1", false);
			@GetSceneByName(L0, "termitnik2");
			tv1 = f_c5_a4_o(L0, "pt_b7q02_mmorlok", "pers_morlok", "b7q02_mmorlok.xml");
			tv0 = f_c5_a4_o(L0, "pt_b7q02_morlok", "pers_morlok", "b7q02_morlok.xml");
			for (L1 = 1; ; L1++) {
				bool L2;
				Vector L3;
				Vector L4;
				object L5;
				L0->GetLocator("pt_b7q02_fog" + L1, L2, L3, L4);
				if (!L2) {
					break;
				}
				@AddActorByType(L5, "fog", L0, L3, L4, "fog_stat_indoor.xml");
				tv2->add(L5);
			}
		} else {
			if (a0 == "place_grabitels") {
				object L6;
				@GetMainOutdoorScene(L6);
				tv3->add(f_c5_a4_o(L6, "pt_b7q02_grabitel1", "pers_grabitel", "b7q02_grabitel.xml"));
				tv3->add(f_c5_a4_o(L6, "pt_b7q02_grabitel2", "pers_grabitel", "b7q02_grabitel.xml"));
			} else {
				if (a0 == "fail") {
					f_71_a0_v();
				} else {
					if (a0 == "completed") {
						f_79_a0_v();
					}
				}
			}
		}
	}

	void f_66_a0_v(void)
	{
		int L0;
		@GetVariable("b7q02", L0);
		if (L0 != 1000) {
			f_71_a0_v();
		}
	}

	void f_71_a0_v(void)
	{
		@SetVariable("b7q02", -1);
		f_81_a0_v();
	}

	void f_79_a0_v(void)
	{
		@SetVariable("b7q02", 1000);
		f_81_a0_v();
	}

	void f_81_a0_v(void)
	{
		disable OnTrigger;
		f_d7_a2_v("termitnik2@door1", true);
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		f_e8_a2_v(tv2, "cleanup");
		f_e8_a2_v(tv3, "cleanup");
		@RemoveActor(f_b9_a0_o());
	}

	void f_a1_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_81_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_66_a0_v();
	}
}

object f_b9_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_bf_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_c5_a4_o(object a0, string a1, string a2, string a3)
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

void f_d7_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_e8_a2_v(object a0, string a1)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@Trigger(L2, a1);
			}
		}
	}
}

