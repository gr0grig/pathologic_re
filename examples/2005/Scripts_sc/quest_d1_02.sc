event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		object L0;
		@SetVariable("d1q02", 1);
		@GetSceneByName(L0, "cot_anna");
		@AddScriptedActor(tv0, "cot_anna_corpse", "actor_disp.bin", L0, [0.0, 0.0, 0.0]);
		@GetSceneByName(L0, "storojka");
		@Trigger(L0, "nolaska");
		f_80_a1_v(1);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_storojka") {
			object L0;
			@GetSceneByName(L0, "storojka");
			tv1 = f_9e_a4_o(L0, "pt_d1q02_salesman", "pers_salesman", "d1q02_salesman.xml");
			tv2 = f_9e_a4_o(L0, "pt_d1q02_gorbun", "pers_gorbun", "d1q02_gorbun.xml");
		} else {
			if (a0 == "completed") {
				f_58_a0_v();
			} else {
				if (a0 == "fail") {
					f_50_a0_v();
				}
			}
		}
	}

	void f_42_a0_v(void)
	{
		int L0;
		@GetVariable("d1q02", L0);
		if (L0 != 1000) {
			f_50_a0_v();
		}
		f_67_a0_v();
	}

	void f_50_a0_v(void)
	{
		@SetVariable("d1q02", -1);
		f_60_a0_v();
	}

	void f_58_a0_v(void)
	{
		@SetVariable("d1q02", 1000);
		f_60_a0_v();
	}

	void f_60_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
	}

	void f_67_a0_v(void)
	{
		object L0;
		disable OnTrigger;
		@GetSceneByName(L0, "storojka");
		@Trigger(L0, "laska");
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@RemoveActor(f_98_a0_o());
	}

	void f_80_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_67_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_42_a0_v();
	}
}

object f_98_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_9e_a4_o(object a0, string a1, string a2, string a3)
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

