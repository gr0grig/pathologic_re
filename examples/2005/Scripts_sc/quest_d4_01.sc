event OnGameTime 9;
event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;

	void init(void)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 < 79) {
			@SetTimeEvent(0, 79);
		} else {
			f_105_a2_v("theater@door1", true);
		}
		f_105_a2_v("sobor@door1", true);
		for (; ; ) {
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_105_a2_v("theater@door1", true);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "key_actors") {
			object L0;
			@GetMainOutdoorScene(L0);
			tv0 = f_f3_a4_o(L0, "pt_d4q01_key1", "pers_whitemask", "d4q01_key1.xml");
			tv1 = f_f3_a4_o(L0, "pt_d4q01_key2", "pers_wasted_male", "d4q01_key2.xml");
		} else {
			if (a0 == "pers") {
				object L1;
				@GetMainOutdoorScene(L1);
				tv2 = f_f3_a4_o(L1, "pt_d4q01_birdmask", "pers_birdmask", "d4q01_birdmask.xml");
				tv3 = f_f3_a4_o(L1, "pt_d4q01_wastedwoman", "pers_wasted_girl", "d4q01_wastedwoman.xml");
			} else {
				if (a0 == "key1_done") {
					tv0->Remove();
				} else {
					if (a0 == "key2_done") {
						tv1->Remove();
					} else {
						if (a0 == "birdmask_done") {
							tv2->Remove();
						} else {
							if (a0 == "wastedwoman_done") {
								tv3->Remove();
							} else {
								if (a0 == "init_sobor") {
									object L2;
									@GetMainOutdoorScene(L2);
									tv4 = f_f3_a4_o(L2, "pt_d4q01_wastedwoman", "pers_wasted_male", "d4q01_sobor_guard.xml");
									f_105_a2_v("sobor@door1", false);
								} else {
									if (a0 == "init_theater") {
										object L3;
										@GetMainOutdoorScene(L3);
										tv5 = f_f3_a4_o(L3, "pt_d4q01_birdmask", "pers_birdmask", "d4q01_theater_guard.xml");
										f_105_a2_v("theater@door1", false);
									} else {
										if (a0 == "cleanup") {
											int L4;
											@GetVariable("d4q01", L4);
											if (L4 != 1000) {
												f_b3_a0_v();
											} else {
												f_c3_a0_v();
											}
											f_d4_a0_v();
										} else {
											if (a0 == "fail") {
												f_b3_a0_v();
											} else {
												if (a0 == "completed") {
													f_bb_a0_v();
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
		}
	}

	void f_b3_a0_v(void)
	{
		@SetVariable("d4q01", -1);
		f_c3_a0_v();
	}

	void f_bb_a0_v(void)
	{
		@SetVariable("d4q01", 1000);
		f_c3_a0_v();
	}

	void f_c3_a0_v(void)
	{
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
			tv3->Remove();
		}
	}

	void f_d4_a0_v(void)
	{
		disable OnTrigger;
		if (tv5) {
			tv5->Remove();
		}
		if (tv4) {
			tv4->Remove();
		}
		f_105_a2_v("theater@door1", false);
		f_105_a2_v("sobor@door1", true);
		@RemoveActor(f_ed_a0_o());
	}
}

object f_ed_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_f3_a4_o(object a0, string a1, string a2, string a3)
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

void f_105_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

