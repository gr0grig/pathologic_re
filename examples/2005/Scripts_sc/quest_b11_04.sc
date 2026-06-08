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
		tv0 = f_ba_a0_o();
		f_9c_a1_v(11);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_sanitar") {
			object L0;
			int L1;
			@GetMainOutdoorScene(L0);
			tv1 = f_c0_a4_o(L0, "pt_b11q04_sanitar", "pers_sanitar", "b11q04_sanitar_main.xml");
			for (L1 = 1; ; L1 = L1 + 1) {
				bool L2;
				Vector L3;
				Vector L4;
				L0->GetLocator("pt_b11q04_sanitar" + L1, L2, L3, L4);
				if (!L2) {
					break;
				}
				tv0->add(f_e4_a4_o(L0, "pt_b11q04_sanitar" + L1, "pers_sanitar", "b11q04_sanitar.xml"));
			}
			tv3 = f_d2_a4_o(L0, "pt_b11q04_corpse", "scripted", "b11q04_corpse.xml");
		} else {
			if (a0 == "place_officer") {
				object L5;
				@GetSceneByName(L5, "vagon_army");
				f_f6_a2_v("vagon_army@door1", false);
				tv2 = f_c0_a4_o(L5, "pt_b11q04_officer", "pers_soldat", "b11q04_officer.xml");
			} else {
				if (a0 == "fail") {
					f_69_a0_v();
				} else {
					if (a0 == "completed") {
						f_71_a0_v();
					}
				}
			}
		}
	}

	void f_5b_a0_v(void)
	{
		int L0;
		@GetVariable("b11q04", L0);
		if (L0 != 1000) {
			f_69_a0_v();
		}
		f_84_a0_v();
	}

	void f_69_a0_v(void)
	{
		@SetVariable("b11q04", -1);
		f_79_a0_v();
	}

	void f_71_a0_v(void)
	{
		@SetVariable("b11q04", 1000);
		f_79_a0_v();
	}

	void f_79_a0_v(void)
	{
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
	}

	void f_84_a0_v(void)
	{
		disable OnTrigger;
		f_79_a0_v();
		f_107_a1_v(tv0);
		f_f6_a2_v("vagon_army@door1", true);
		if (tv3) {
			@Trigger(tv3, "cleanup");
		}
		@RemoveActor(f_b4_a0_o());
	}

	void f_9c_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_84_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_5b_a0_v();
	}
}

object f_b4_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_ba_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_c0_a4_o(object a0, string a1, string a2, string a3)
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

object f_d2_a4_o(object a0, string a1, string a2, string a3)
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

object f_e4_a4_o(object a0, string a1, string a2, string a3)
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

void f_f6_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_107_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				L2->Remove();
			}
		}
		a0->clear();
	}
}

