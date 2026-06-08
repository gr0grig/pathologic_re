event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		f_b6_a2_v("sobor@door1", false);
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
			tv0 = f_a4_a4_o(L0, "pt_d6q01_klara", "NPC_Klara", "d6q01_Klara.xml");
		} else {
			if (a0 == "saburov_klara_remove") {
				@Trigger(tv0, "cleanup");
			} else {
				if (a0 == "eva_klara") {
					object L1;
					@GetSceneByName(L1, "cot_eva");
					tv1 = f_a4_a4_o(L1, "pt_d6q01_klara", "NPC_Klara", "d6q01_Klara.xml");
				} else {
					if (a0 == "eva_klara_remove") {
						@Trigger(tv1, "cleanup");
					} else {
						if (a0 == "albinos_klara") {
							object L2;
							@GetMainOutdoorScene(L2);
							tv2 = f_a4_a4_o(L2, "pt_d6q03_albinos", "NPC_Klara", "d6q01_Klara.xml");
						} else {
							if (a0 == "albinos_klara_remove") {
								@Trigger(tv2, "cleanup");
							} else {
								if (a0 == "cleanup") {
									int L3;
									@GetVariable("d6q01", L3);
									if (L3 != 1000) {
										f_72_a0_v();
									} else {
										f_82_a0_v();
									}
									f_92_a0_v();
								} else {
									if (a0 == "fail") {
										f_72_a0_v();
									} else {
										if (a0 == "completed") {
											f_7a_a0_v();
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	void f_72_a0_v(void)
	{
		@SetVariable("d6q01", -1);
		f_82_a0_v();
	}

	void f_7a_a0_v(void)
	{
		@SetVariable("d6q01", 1000);
		f_82_a0_v();
	}

	void f_82_a0_v(void)
	{
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

	void f_92_a0_v(void)
	{
		disable OnTrigger;
		f_b6_a2_v("sobor@door1", true);
		@RemoveActor(f_9e_a0_o());
	}
}

object f_9e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_a4_a4_o(object a0, string a1, string a2, string a3)
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

void f_b6_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

