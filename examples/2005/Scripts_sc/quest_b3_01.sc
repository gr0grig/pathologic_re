event OnTrigger 26;

maintask t0
{
	var object tv0;

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_butcher") {
			object L0;
			@GetSceneByName(L0, "house5_07");
			tv0 = f_58_a4_o(L0, "pt_b3q01_butcher", "pers_butcher", "b3q01_butcher.xml");
		} else {
			if (a0 == "cleanup") {
				int L1;
				@GetVariable("b3q01", L1);
				if (L1 != 1000) {
					f_36_a0_v();
				} else {
					f_46_a0_v();
				}
			} else {
				if (a0 == "fail") {
					f_36_a0_v();
				} else {
					if (a0 == "completed") {
						f_3e_a0_v();
					}
				}
			}
		}
	}

	void f_36_a0_v(void)
	{
		@SetVariable("b3q01", -1);
		f_46_a0_v();
	}

	void f_3e_a0_v(void)
	{
		@SetVariable("b3q01", 1000);
		f_46_a0_v();
	}

	void f_46_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		@RemoveActor(f_52_a0_o());
	}
}

object f_52_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_58_a4_o(object a0, string a1, string a2, string a3)
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

