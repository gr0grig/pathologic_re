event OnGameTime 9;
event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;

	void init(void)
	{
		object L0;
		@SetTimeEvent(0, 11);
		@GetMainOutdoorScene(L0);
		tv0 = f_a7_a4_o(L0, "pt_b1q01_whitemask", "pers_whitemask", "b1q01_whitemask.xml");
		tv1 = f_a7_a4_o(L0, "pt_b1q01_birdmask1", "pers_birdmask", "b1q01_birdmask1.xml");
		tv2 = f_a7_a4_o(L0, "pt_b1q01_birdmask2", "pers_birdmask", "b1q01_birdmask2.xml");
		tv3 = f_9f_a3_o(L0, "b1q01_trigger", "b1q01_trigger.xml");
		for (; ; ) {
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		if (tv3) {
			@Trigger(tv3, "cleanup");
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "remove_whitemask") {
			if (tv0) {
				tv0->Remove();
			}
		} else {
			if (a0 == "remove1") {
				tv1->Remove();
			} else {
				if (a0 == "remove2") {
					tv2->Remove();
				} else {
					if (a0 == "remove_cutscene") {
						if (tv3) {
							@Trigger(tv3, "cleanup");
						}
					} else {
						if (a0 == "cleanup") {
							int L0;
							@GetVariable("b1q01", L0);
							if (L0 != 1000) {
								f_71_a0_v();
							} else {
								f_81_a0_v();
							}
						} else {
							if (a0 == "fail") {
								f_71_a0_v();
							} else {
								if (a0 == "completed") {
									f_79_a0_v();
								}
							}
						}
					}
				}
			}
		}
	}

	void f_71_a0_v(void)
	{
		@SetVariable("b1q01", -1);
		f_81_a0_v();
	}

	void f_79_a0_v(void)
	{
		@SetVariable("b1q01", 1000);
		f_81_a0_v();
	}

	void f_81_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			tv0->Remove();
		}
		if (tv1) {
			tv1->Remove();
		}
		if (tv2) {
			tv2->Remove();
		}
		if (tv3) {
			@Trigger(tv3, "cleanup");
		}
		@RemoveActor(f_99_a0_o());
	}
}

object f_99_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_9f_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddActor(L0, a1, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], a2);
	return L0;
}

object f_a7_a4_o(object a0, string a1, string a2, string a3)
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
		a0->AddStationaryActor(L3, L1, L2, a2, a3, true);
	}
	return L3;
}

