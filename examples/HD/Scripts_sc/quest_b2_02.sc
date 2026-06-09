event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var bool tv2;

	void init(void)
	{
		object L0;
		@GetMainOutdoorScene(L0);
		tv0 = f_90_a4_o(L0, "pt_b2q02_gatherer", "pers_morlok", "b2q02_gatherer.xml");
		tv1 = f_90_a4_o(L0, "pt_b2q02_bride1", "pers_nudegirl", "b2q02_bride.xml");
		f_72_a1_v(2);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "move_bride") {
			tv2 = true;
			if (tv1) {
				tv1->Remove();
			}
		} else {
			if (a0 == "fail") {
				f_3e_a0_v();
			} else {
				if (a0 == "completed") {
					f_46_a0_v();
				}
			}
		}
	}

	void f_33_a0_v(void)
	{
		int L0;
		@GetVariable("b2q02", L0);
		if (L0 != 1000) {
			f_3e_a0_v();
		}
	}

	void f_3e_a0_v(void)
	{
		@SetVariable("b2q02", -1);
		f_4e_a0_v();
	}

	void f_46_a0_v(void)
	{
		@SetVariable("b2q02", 1000);
		f_4e_a0_v();
	}

	void f_4e_a0_v(void)
	{
		object L0;
		disable OnTrigger;
		if (tv1) {
			tv1->Remove();
		}
		if (tv0) {
			tv0->Remove();
		}
		@GetMainOutdoorScene(L0);
		if (tv2) {
			f_90_a4_o(L0, "pt_b2q02_bride2", "pers_nudegirl", "b2q02_bride2.xml");
		} else {
			f_90_a4_o(L0, "pt_b2q02_bride1", "pers_nudegirl", "b2q02_bride2.xml");
		}
		@RemoveActor(f_8a_a0_o());
	}

	void f_72_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_4e_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_33_a0_v();
	}
}

object f_8a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_90_a4_o(object a0, string a1, string a2, string a3)
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

