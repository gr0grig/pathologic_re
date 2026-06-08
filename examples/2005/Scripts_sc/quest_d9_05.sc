event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;

	void init(void)
	{
		object L0;
		@GetSceneByName(L0, "termitnik");
		tv0 = f_6c_a4_o(L0, "pt_d9q03_burah", "NPC_Burah", "d9q05_burah.xml");
		f_4e_a1_v(9);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_soldiers") {
		} else {
			if (a0 == "fail") {
				f_32_a0_v();
			} else {
				if (a0 == "completed") {
					f_3a_a0_v();
				}
			}
		}
	}

	void f_27_a0_v(void)
	{
		int L0;
		@GetVariable("d9q05", L0);
		if (L0 != 1000) {
			f_32_a0_v();
		}
	}

	void f_32_a0_v(void)
	{
		@SetVariable("d9q05", -1);
		f_42_a0_v();
	}

	void f_3a_a0_v(void)
	{
		@SetVariable("d9q05", 1000);
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
		@AddActor(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

