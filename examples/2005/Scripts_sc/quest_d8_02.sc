event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		float L0;
		object L1;
		@GetGameTime(L0);
		if (f_a3_a0_i() == 8) {
			f_ac_a1_i(L0);
		}
		@GetSceneByName(L1, "cot_eva");
		tv0 = f_91_a4_o(L1, "pt_d8q02_doberman1", "pers_doberman", "d8q02_doberman.xml");
		tv1 = f_91_a4_o(L1, "pt_d8q02_doberman2", "pers_doberman", "d8q02_doberman.xml");
		tv2 = f_91_a4_o(L1, "pt_d8q02_doberman3", "pers_doberman", "d8q02_doberman.xml");
		@Trace("d8q02 dobermans are placed");
		f_73_a1_v(8);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "fail") {
			f_4d_a0_v();
		} else {
			if (a0 == "completed") {
				f_55_a0_v();
			}
		}
	}

	void f_42_a0_v(void)
	{
		int L0;
		@GetVariable("d8q02", L0);
		if (L0 != 1000) {
			f_4d_a0_v();
		}
	}

	void f_4d_a0_v(void)
	{
		@SetVariable("d8q02", -1);
		f_5d_a0_v();
	}

	void f_55_a0_v(void)
	{
		@SetVariable("d8q02", 1000);
		f_5d_a0_v();
	}

	void f_5d_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		@RemoveActor(f_8b_a0_o());
	}

	void f_73_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_5d_a0_v();
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

object f_8b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_91_a4_o(object a0, string a1, string a2, string a3)
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

int f_a3_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_ac_a1_i(float a0)
{
	return f_b5_a3_i(533303, 533302, a0);
}

int f_b5_a3_i(int a0, int a1, float a2)
{
	int L0;
	@AddMessage(a0, a1, a2, L0);
	@SendWorldWndMessage(6);
	return L0;
}

