event OnTrigger 26;

maintask t0
{
	var object tv0;

	void init(void)
	{
		f_97_a2_v("house_petr@door1", false);
		f_97_a2_v("shouse1_kabak@door1", false);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "woman") {
			object L0;
			f_97_a2_v("d2q01_house1@door1", false);
			@GetSceneByName(L0, "d2q01_house1");
			tv0 = f_85_a4_o(L0, "pt_woman", "pers_woman", "d2q01_woman.xml");
		} else {
			if (a0 == "cursed_women") {
				object L1;
				@GetSceneByName(L1, "d2q01_house1");
				f_85_a4_o(L1, "pt_enemy01", "pers_woman", "d2q01_zombie_woman.xml");
				f_85_a4_o(L1, "pt_enemy02", "pers_woman", "d2q01_zombie_woman.xml");
				@Trigger(tv0, "cleanup");
			} else {
				if (a0 == "cleanup") {
					int L2;
					@GetVariable("d2q01", L2);
					if (L2 != 1000) {
						f_5e_a0_v();
					} else {
						f_6e_a0_v();
					}
				} else {
					if (a0 == "fail") {
						f_5e_a0_v();
					} else {
						if (a0 == "completed") {
							f_66_a0_v();
						}
					}
				}
			}
		}
	}

	void f_5e_a0_v(void)
	{
		@SetVariable("d2q01", -1);
		f_6e_a0_v();
	}

	void f_66_a0_v(void)
	{
		@SetVariable("d2q01", 1000);
		f_6e_a0_v();
	}

	void f_6e_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		f_97_a2_v("d2q01_house1@door1", true);
		@RemoveActor(f_7f_a0_o());
	}
}

object f_7f_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_85_a4_o(object a0, string a1, string a2, string a3)
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

void f_97_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

