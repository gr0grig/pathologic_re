event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;

	void f_0_a0_v(void)
	{
		object L0;
		if (tv3) {
			return;
		}
		@GetSceneByName(L0, "theater");
		tv3 = f_10d_a4_o(L0, "pt_k7q01_danko", "NPC_Bakalavr", "k7q01_danko.xml");
	}

	void f_11_a0_v(void)
	{
		object L0;
		if (tv4) {
			return;
		}
		@GetSceneByName(L0, "termitnik2");
		tv4 = f_10d_a4_o(L0, "pt_k7q01_burah", "NPC_Burah", "k7q01_burah.xml");
		f_157_a1_b("NPC_Burah");
	}

	void init(void)
	{
		object L0;
		object L1;
		object L2;
		@QueuePlayMovie("aglaja.wmv");
		f_131_a2_v("termitnik2@door1", false);
		f_131_a2_v("termitnik@door1", true);
		@GetMainOutdoorScene(L0);
		tv0 = f_11f_a4_o(L0, "pt_k7q01_birdmask1", "pers_birdmask", "k7q01_birdmask.xml");
		tv1 = f_11f_a4_o(L0, "pt_k7q01_birdmask2", "pers_birdmask", "k7q01_birdmask.xml");
		@GetScene(L0);
		@GetSceneByName(L1, "theater");
		if (L1 != L0) {
			f_0_a0_v();
		}
		@GetSceneByName(L2, "termitnik2");
		if (L2 != L0) {
			f_11_a0_v();
		}
		@GetSceneByName(L0, "burah_home");
		@Trigger(L0, "noburah");
		f_131_a2_v("sobor@door1", true);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_corpse") {
			object L0;
			@GetMainOutdoorScene(L0);
			@AddActor(tv2, "d7q02_corpse", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "k7q01_corpse.xml");
		} else {
			if (a0 == "place_danko") {
				if (!tv3) {
					f_0_a0_v();
				}
			} else {
				if (a0 == "cot_eva_load") {
					f_142_a2_v("icot_eva_door", true);
				} else {
					if (a0 == "theater_load") {
						f_0_a0_v();
					} else {
						if (a0 == "termitnik2_load") {
							f_11_a0_v();
						} else {
							if (a0 == "fail") {
								f_b9_a0_v();
							} else {
								if (a0 == "completed") {
									f_c1_a0_v();
								} else {
									if (a0 == "cleanup") {
										int L1;
										@GetVariable("k7q01", L1);
										if (L1 != 1000) {
											@SetVariable("k7q01", -1);
										}
										f_dc_a0_v();
									}
								}
							}
						}
					}
				}
			}
		}
	}

	void f_b9_a0_v(void)
	{
		@SetVariable("k7q01", -1);
		f_c9_a0_v();
	}

	void f_c1_a0_v(void)
	{
		@SetVariable("k7q01", 1000);
		f_c9_a0_v();
	}

	void f_c9_a0_v(void)
	{
		if (tv0) {
			tv0->Remove();
		}
		if (tv1) {
			tv1->Remove();
		}
		f_131_a2_v("sobor@door1", false);
		f_131_a2_v("termitnik@door1", false);
	}

	void f_dc_a0_v(void)
	{
		object L0;
		disable OnTrigger;
		f_c9_a0_v();
		if (tv3) {
			@Trigger(tv3, "cleanup");
		}
		f_142_a2_v("icot_eva_door", false);
		if (tv4) {
			@Trigger(tv4, "cleanup");
		}
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		@GetSceneByName(L0, "burah_home");
		@Trigger(L0, "burah");
		f_131_a2_v("termitnik2@door1", true);
		@RemoveActor(f_107_a0_o());
	}
}

object f_107_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_10d_a4_o(object a0, string a1, string a2, string a3)
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

object f_11f_a4_o(object a0, string a1, string a2, string a3)
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

void f_131_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_142_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		if (a1) {
			L0->Close();
		}
		L0->SetProperty("locked", a1);
	}
}

bool f_157_a1_b(string a0)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		return false;
	}
	@RemoveActor(L0);
	return true;
}

