event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;

	void init(void)
	{
		object L0;
		@GetMainOutdoorScene(L0);
		@CreateObjectVector(tv0);
		tv0->add(f_c4_a4_o(L0, "pt_d11q06_wastedmale1", "pers_wasted_male", "d11q06_wastedmale.xml"));
		tv0->add(f_c4_a4_o(L0, "pt_d11q06_wastedmale2", "pers_wasted_male", "d11q06_wastedmale.xml"));
		tv0->add(f_c4_a4_o(L0, "pt_d11q06_wastedmale3", "pers_wasted_male", "d11q06_wastedmale.xml"));
		tv0->add(f_c4_a4_o(L0, "pt_d11q06_wastedmale4", "pers_wasted_male", "d11q06_wastedmale.xml"));
		tv0->add(f_c4_a4_o(L0, "pt_d11q06_wastedgirl1", "pers_wasted_girl", "d11q06_wastedgirl.xml"));
		tv0->add(f_c4_a4_o(L0, "pt_d11q06_wastedgirl2", "pers_wasted_girl", "d11q06_wastedgirl.xml"));
		f_94_a1_v(11);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_maria") {
			object L0;
			@GetSceneByName(L0, "crypt2");
			tv1 = f_b2_a4_o(L0, "pt_d11q06_maria", "NPC_Maria", "d11q06_maria.xml");
		} else {
			if (a0 == "fail") {
				f_70_a0_v();
			} else {
				if (a0 == "completed") {
					f_78_a0_v();
				}
			}
		}
	}

	void f_62_a0_v(void)
	{
		int L0;
		@GetVariable("d11q06", L0);
		if (L0 != 1000) {
			f_70_a0_v();
		}
		f_81_a0_v();
	}

	void f_70_a0_v(void)
	{
		@SetVariable("d11q06", -1);
		f_80_a0_v();
	}

	void f_78_a0_v(void)
	{
		@SetVariable("d11q06", 1000);
		f_80_a0_v();
	}

	void f_80_a0_v(void)
	{
	}

	void f_81_a0_v(void)
	{
		disable OnTrigger;
		f_80_a0_v();
		f_d6_a1_v(tv0);
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@RemoveActor(f_ac_a0_o());
	}

	void f_94_a1_v(int a0)
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
		f_62_a0_v();
	}
}

object f_ac_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_b2_a4_o(object a0, string a1, string a2, string a3)
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

object f_c4_a4_o(object a0, string a1, string a2, string a3)
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

void f_d6_a1_v(object a0)
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

