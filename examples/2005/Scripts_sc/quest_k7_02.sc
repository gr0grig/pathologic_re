event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;

	void init(void)
	{
		object L0;
		@SetVariable("k7q02", 1);
		f_7e_a1_b("gatherer3");
		@GetMainOutdoorScene(L0);
		tv0 = f_6c_a4_o(L0, "pt_gatherer3", "pers_morlok", "k7q02_gatherer.xml");
		f_4e_a1_v(7);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_gatherer") {
		} else {
			if (a0 == "completed") {
				f_3a_a0_v();
			}
		}
	}

	void f_27_a0_v(void)
	{
		int L0;
		@GetVariable("k7q02", L0);
		if (L0 != 1000) {
			f_32_a0_v();
		}
	}

	void f_32_a0_v(void)
	{
		@SetVariable("k7q02", -1);
		f_42_a0_v();
	}

	void f_3a_a0_v(void)
	{
		@SetVariable("k7q02", 1000);
		f_42_a0_v();
	}

	void f_42_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		@RemoveActor(f_66_a0_o());
	}

	void f_4e_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_42_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_27_a0_v();
	}
}

object f_66_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_6c_a4_o(object a0, string a1, string a2, string a3)
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

bool f_7e_a1_b(string a0)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		return false;
	}
	@RemoveActor(L0);
	return true;
}

