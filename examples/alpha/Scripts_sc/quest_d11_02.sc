event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var bool tv5;
	var bool tv6;
	var int tv7;
	var bool tv8;

	void init(void)
	{
		tv3 = f_141_a0_o();
		tv4 = f_141_a0_o();
		tv5 = false;
		tv6 = false;
		tv7 = 0;
		tv8 = false;
		f_123_a1_v(11);
	}

	void f_11_a0_v(void)
	{
		object L0;
		@GetSceneByName(L0, "uprava_admin");
		tv0 = f_147_a4_o(L0, "pt_d11q02_girl", "pers_littlegirl", "d11q02_littlegirl.xml");
		tv1 = f_147_a4_o(L0, "pt_d11q02_boy", "pers_littleboy", "d11q02_littleboy.xml");
		tv5 = true;
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "uprava_load") {
			if (!tv5) {
				f_11_a0_v();
			}
		} else {
			if (a0 == "init_graveyard") {
				object L0;
				int L1;
				@SetVariable("d11q02", 1);
				@GetMainOutdoorScene(L0);
				@AddActor(tv2, "d11q02_trigger", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d11q02_trigger.xml");
				for (L1 = 1; L1 <= 4; L1++) {
					tv3->add(f_147_a4_o(L0, "pt_d11q02_soldier" + L1, "pers_soldat", "d11q02_soldier.xml"));
				}
				tv4->add(f_147_a4_o(L0, "pt_d11q02_victim1", "pers_worker", "d11q02_victim1.xml"));
				tv4->add(f_147_a4_o(L0, "pt_d11q02_victim2", "pers_worker", "d11q02_victim2.xml"));
				tv4->add(f_147_a4_o(L0, "pt_d11q02_victim3", "pers_unosha", "d11q02_victim3.xml"));
				tv4->add(f_147_a4_o(L0, "pt_d11q02_victim4", "pers_unosha", "d11q02_victim4.xml"));
			} else {
				if (a0 == "d11q02_trigger") {
					f_16c_a2_v(tv3, "execute");
					tv6 = true;
				} else {
					if (a0 == "execute") {
						f_16c_a2_v(tv4, "execute");
						tv6 = false;
						f_e8_a0_v();
					} else {
						if (a0 == "soldier_attack") {
							f_16c_a2_v(tv3, "attack");
						} else {
							if (a0 == "actor_unload") {
								if (tv7) {
									if (tv7 == 1) {
										f_f8_a0_v();
									}
								} else {
									if (tv6) {
										tv6 = false;
										f_e8_a0_v();
										f_f8_a0_v();
									}
								}
							} else {
								if (a0 == "soldier_dead") {
									int L2;
									int L3;
									tv3->size(L2);
									for (L3 = 0; L3 < L2; L3++) {
										object L4;
										tv3->get(L4, L3);
										if (L4) {
											bool L5;
											L4->IsDead(L5);
											if (!L5) {
												break;
											}
										}
									}
									if (L3 == L2) {
										@SetVariable("d11q02", 2);
										if (!tv7) {
											tv7 = 1;
										}
									}
								} else {
									if (a0 == "fail") {
										f_e8_a0_v();
									} else {
										if (a0 == "completed") {
											f_f0_a0_v();
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

	void f_dd_a0_v(void)
	{
		int L0;
		@GetVariable("d11q02", L0);
		if (L0 != 1000) {
			f_e8_a0_v();
		}
	}

	void f_e8_a0_v(void)
	{
		@SetVariable("d11q02", -1);
		f_109_a0_v();
	}

	void f_f0_a0_v(void)
	{
		@SetVariable("d11q02", 1000);
		f_109_a0_v();
	}

	void f_f8_a0_v(void)
	{
		f_159_a1_v(tv3);
		f_159_a1_v(tv4);
		if (tv8) {
			@RemoveActor(f_13b_a0_o());
		}
		tv7 = 2;
	}

	void f_109_a0_v(void)
	{
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		if (tv2) {
			@RemoveActor(tv2);
		}
		if (tv7 == 2) {
			@RemoveActor(f_13b_a0_o());
		} else {
			tv7 = 1;
		}
		tv8 = true;
	}

	void f_123_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_109_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_dd_a0_v();
	}
}

object f_13b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_141_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_147_a4_o(object a0, string a1, string a2, string a3)
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

void f_159_a1_v(object a0)
{
	int L0;
	int L1;
	a0->size(L0);
	for (L1 = 0; L1 < L0; L1++) {
		object L2;
		a0->get(L2, L1);
		if (L2) {
			@RemoveActor(L2);
		}
	}
	a0->clear();
}

void f_16c_a2_v(object a0, string a1)
{
	int L0;
	int L1;
	a0->size(L0);
	for (L1 = 0; L1 < L0; L1++) {
		object L2;
		a0->get(L2, L1);
		if (L2) {
			@Trigger(L2, a1);
		}
	}
}

