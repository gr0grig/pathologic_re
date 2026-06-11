event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "saburov_klara") {
			object L0;
			@GetSceneByName(L0, "cot_katerina");
			tv0 = f_7a_a4_o(L0, "pt_d6q01_klara", "NPC_Klara", "d6q01_Klara.xml");
		} else {
			if (a0 == "saburov_klara_remove") {
				@Trigger(tv0, "cleanup");
			} else {
				if (a0 == "eva_klara") {
					object L1;
					@GetSceneByName(L1, "cot_eva");
					tv1 = f_7a_a4_o(L1, "pt_d6q01_klara", "NPC_Klara", "d6q01_Klara.xml");
				} else {
					if (a0 == "eva_klara_remove") {
						@Trigger(tv1, "cleanup");
					} else {
						if (a0 == "albinos_klara") {
							object L2;
							@GetMainOutdoorScene(L2);
							tv2 = f_7a_a4_o(L2, "pt_d6q03_albinos", "NPC_Klara", "d6q01_Klara.xml");
						} else {
							if (a0 == "albinos_klara_remove") {
								@Trigger(tv2, "cleanup");
							} else {
								if (a0 == "fail") {
									f_59_a0_v();
								} else {
									if (a0 == "completed") {
										f_61_a0_v();
									}
								}
							}
						}
					}
				}
			}
		}
	}

	void f_59_a0_v(void)
	{
		@SetVariable("d6q01", -1);
		f_69_a0_v();
	}

	void f_61_a0_v(void)
	{
		@SetVariable("d6q01", 1000);
		f_69_a0_v();
	}

	void f_69_a0_v(void)
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
	}
}

object f_7a_a4_o(object a0, string a1, string a2, string a3)
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

