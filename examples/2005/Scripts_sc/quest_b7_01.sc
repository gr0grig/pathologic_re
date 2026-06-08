event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		object L0;
		f_159_a2_v("sobor@door1", false);
		tv0 = f_139_a0_o();
		tv1 = f_139_a0_o();
		tv2 = f_139_a0_o();
		@GetSceneByName(L0, "sobor");
		@Trigger(L0, "noaglaja");
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_sobor") {
			object L0;
			@GetSceneByName(L0, "sobor");
			tv0->add(f_13f_a4_o(L0, "pt_b7q01_birdmask", "pers_birdmask", "b7q01_sobor_mbirdmask.xml"));
			tv0->add(f_13f_a4_o(L0, "pt_b7q01_birdmask1", "pers_birdmask", "b7q01_sobor_birdmask.xml"));
			tv0->add(f_13f_a4_o(L0, "pt_b7q01_birdmask2", "pers_birdmask", "b7q01_sobor_birdmask.xml"));
			tv0->add(f_13f_a4_o(L0, "pt_b7q01_patrol1", "pers_patrool", "b7q01_sobor_patrol.xml"));
			tv0->add(f_13f_a4_o(L0, "pt_b7q01_patrol2", "pers_patrool", "b7q01_sobor_patrol.xml"));
		} else {
			if (a0 == "init_prison") {
				object L1;
				@GetSceneByName(L1, "uprava_prison");
				tv1->add(f_13f_a4_o(L1, "pt_b7q01_patrol1", "pers_patrool", "b7q01_prison_patrol1.xml"));
				tv1->add(f_13f_a4_o(L1, "pt_b7q01_patrol2", "pers_patrool", "b7q01_prison_patrol2.xml"));
				tv1->add(f_13f_a4_o(L1, "pt_b7q01_prisoner1", "pers_worker", "b7q01_prisoner.xml"));
				tv1->add(f_13f_a4_o(L1, "pt_b7q01_prisoner2", "pers_unosha", "b7q01_prisoner.xml"));
				tv1->add(f_13f_a4_o(L1, "pt_b7q01_prisoner3", "pers_grabitel", "b7q01_prisoner.xml"));
			} else {
				if (a0 == "clear_prison") {
					f_16a_a2_v(tv1, "cleanup");
				} else {
					if (a0 == "init_gorbun_house") {
						object L2;
						@GetSceneByName(L2, "lc_house6_05");
						tv2->add(f_13f_a4_o(L2, "pt_b7q01_wastedmale", "pers_wasted_male", "b7q01_gorbun_mwastedmale.xml"));
						tv2->add(f_13f_a4_o(L2, "pt_b7q01_wastedmale1", "pers_wasted_male", "b7q01_gorbun_wastedmale.xml"));
						tv2->add(f_13f_a4_o(L2, "pt_b7q01_wastedmale2", "pers_wasted_male", "b7q01_gorbun_wastedmale.xml"));
						tv2->add(f_151_a3_o(L2, "b7q01_corpse1", "actor_disp.bin"));
						tv2->add(f_151_a3_o(L2, "b7q01_corpse2", "actor_disp.bin"));
						tv2->add(f_151_a3_o(L2, "b7q01_corpse3", "actor_disp.bin"));
					} else {
						if (a0 == "clear_gorbun_house") {
							f_16a_a2_v(tv2, "cleanup");
						} else {
							if (a0 == "place_aglaja") {
								object L3;
								@GetSceneByName(L3, "sobor");
								@Trigger(L3, "aglaja");
								f_16a_a2_v(tv0, "cleanup");
							} else {
								if (a0 == "cleanup") {
									int L4;
									@GetVariable("b7q01", L4);
									if (L4 != 1000) {
										f_106_a0_v();
									} else {
										f_116_a0_v();
									}
								} else {
									if (a0 == "fail") {
										f_106_a0_v();
									} else {
										if (a0 == "completed") {
											f_10e_a0_v();
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

	void f_106_a0_v(void)
	{
		@SetVariable("b7q01", -1);
		f_116_a0_v();
	}

	void f_10e_a0_v(void)
	{
		@SetVariable("b7q01", 1000);
		f_116_a0_v();
	}

	void f_116_a0_v(void)
	{
		object L0;
		f_16a_a2_v(tv0, "cleanup");
		f_16a_a2_v(tv1, "cleanup");
		f_16a_a2_v(tv2, "cleanup");
		@GetSceneByName(L0, "sobor");
		@Trigger(L0, "aglaja");
		@RemoveActor(f_133_a0_o());
	}
}

object f_133_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_139_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_13f_a4_o(object a0, string a1, string a2, string a3)
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

object f_151_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddScriptedActor(L0, a1, a2, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	return L0;
}

void f_159_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_16a_a2_v(object a0, string a1)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@Trigger(L2, a1);
			}
		}
	}
}

