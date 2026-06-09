event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;

	void f_0_a0_v(void)
	{
		object L0;
		@GetMainOutdoorScene(L0);
		tv0 = f_7e_a4_o(L0, "pt_d3q01_gpatrol1", "pers_patrool", "b3q04_gpatrol.xml");
		@AddActor(tv1, "d3q01_graveyard_fire", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d3q01_graveyard_fire.xml");
		@sync();
		@Trigger(tv1, "put_item");
	}

	void init(void)
	{
		@SetVariable("b3q04", 1);
		f_0_a0_v();
		f_60_a1_v(3);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "fail") {
			f_40_a0_v();
		} else {
			if (a0 == "completed") {
				f_48_a0_v();
			}
		}
	}

	void f_35_a0_v(void)
	{
		int L0;
		@GetVariable("b3q04", L0);
		if (L0 != 1000) {
			f_40_a0_v();
		}
	}

	void f_40_a0_v(void)
	{
		@SetVariable("b3q04", -1);
		f_50_a0_v();
	}

	void f_48_a0_v(void)
	{
		@SetVariable("b3q04", 1000);
		f_50_a0_v();
	}

	void f_50_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			tv0->Remove();
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@RemoveActor(f_78_a0_o());
	}

	void f_60_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_50_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_35_a0_v();
	}
}

object f_78_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_7e_a4_o(object a0, string a1, string a2, string a3)
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

