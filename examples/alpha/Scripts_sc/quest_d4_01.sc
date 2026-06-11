event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "key_actors") {
			object L0;
			@GetMainOutdoorScene(L0);
			tv0 = f_7d_a4_o(L0, "pt_d4q01_key1", "pers_whitemask", "d4q01_key1.xml");
			tv1 = f_7d_a4_o(L0, "pt_d4q01_key2", "pers_wasted_male", "d4q01_key2.xml");
		} else {
			if (a0 == "pers") {
				object L1;
				@GetMainOutdoorScene(L1);
				tv2 = f_7d_a4_o(L1, "pt_d4q01_birdmask", "pers_birdmask", "d4q01_birdmask.xml");
				tv3 = f_7d_a4_o(L1, "pt_d4q01_wastedwoman", "pers_wasted_girl", "d4q01_wastedwoman.xml");
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
								if (a0 == "fail") {
									f_5b_a0_v();
								} else {
									if (a0 == "completed") {
										f_63_a0_v();
									}
								}
							}
						}
					}
				}
			}
		}
	}

	void f_5b_a0_v(void)
	{
		@SetVariable("d4q01", -1);
		f_6b_a0_v();
	}

	void f_63_a0_v(void)
	{
		@SetVariable("d4q01", 1000);
		f_6b_a0_v();
	}

	void f_6b_a0_v(void)
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
			tv3->Remove();
		}
	}
}

object f_7d_a4_o(object a0, string a1, string a2, string a3)
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

