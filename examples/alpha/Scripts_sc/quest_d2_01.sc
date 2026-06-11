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
		if (a0 == "woman") {
			object L0;
			object L1;
			@FindActor(L0, "dt_house_1_07");
			L0->EnableSubset(200, true);
			@GetSceneByName(L1, "d2q01_house1");
			tv0 = f_55_a4_o(L1, "pt_woman", "pers_woman", "d2q01_woman.xml");
		} else {
			if (a0 == "cursed_women") {
				object L2;
				@GetSceneByName(L2, "d2q01_house1");
				f_55_a4_o(L2, "pt_enemy01", "pers_woman", "d2q01_zombie_woman.xml");
				f_55_a4_o(L2, "pt_enemy02", "pers_woman", "d2q01_zombie_woman.xml");
				@Trigger(tv0, "cleanup");
			} else {
				if (a0 == "fail") {
					f_46_a0_v();
				} else {
					if (a0 == "completed") {
						f_46_a0_v();
					}
				}
			}
		}
	}

	void f_46_a0_v(void)
	{
		@SetVariable("d2q01", 1000);
		f_4e_a0_v();
	}

	void f_4e_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
	}
}

object f_55_a4_o(object a0, string a1, string a2, string a3)
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

