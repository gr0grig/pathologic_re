event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;
	var object tv6;
	var object tv7;
	var bool tv8;

	void init(void)
	{
		object L0;
		@GetMainOutdoorScene(L0);
		tv2 = f_111_a3_o(L0, "d1q01_trigger", "d1q01_trigger.xml");
		@GetSceneByName(L0, "warehouse_rubin");
		@Trigger(L0, "norubin");
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_masks") {
			object L0;
			@GetMainOutdoorScene(L0);
			tv0 = f_12b_a4_o(L0, "pt_d1q01_birdmask", "pers_birdmask", "d1q01_birdmask.xml");
			tv1 = f_12b_a4_o(L0, "pt_d1q01_whitemask", "pers_whitemask", "d1q01_whitemask.xml");
		} else {
			if (a0 == "remove_masks") {
				tv0->Remove();
				tv1->Remove();
			} else {
				if (a0 == "cutscene_end") {
					object L1;
					@GetMainOutdoorScene(L1);
					tv3 = f_119_a4_o(L1, "pt_d1q01_morlok", "pers_morlok", "d1q01_morlok.xml");
					tv4 = f_119_a4_o(L1, "pt_d1q01_worker", "pers_worker", "d1q01_worker.xml");
					if (tv8) {
						f_cc_a0_v();
					}
				} else {
					if (a0 == "remove_cutscene") {
						f_cc_a0_v();
					} else {
						if (a0 == "attack") {
							if (tv3) {
								@Trigger(tv3, "attack");
							}
							if (tv4) {
								@Trigger(tv4, "attack");
							}
						} else {
							if (a0 == "place_patrol") {
								object L2;
								@GetMainOutdoorScene(L2);
								tv5 = f_119_a4_o(L2, "pt_d1q01_patrol1", "pers_patrool", "d1q01_patrol.xml");
								tv6 = f_119_a4_o(L2, "pt_d1q01_patrol2", "pers_patrool", "d1q01_patrol.xml");
							} else {
								if (a0 == "place_morlok_run") {
									object L3;
									@GetMainOutdoorScene(L3);
									f_119_a4_o(L3, "pt_d1q01_morlok_run_path", "pers_morlok", "d1q01_morlok_run.xml");
								} else {
									if (a0 == "place_rubin") {
										object L4;
										@GetSceneByName(L4, "cot_viktor");
										tv7 = f_119_a4_o(L4, "pt_d1q01_rubin", "NPC_Rubin", "d1q01_rubin.xml");
									} else {
										if (a0 == "cleanup") {
											int L5;
											@GetVariable("d1q01", L5);
											if (L5 != 1000) {
												f_bc_a0_v();
											} else {
												f_dd_a0_v();
											}
										} else {
											if (a0 == "fail") {
												f_bc_a0_v();
											} else {
												if (a0 == "completed") {
													f_c4_a0_v();
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

	void f_bc_a0_v(void)
	{
		@SetVariable("d1q01", -1);
		f_dd_a0_v();
	}

	void f_c4_a0_v(void)
	{
		@SetVariable("d1q01", 1000);
		f_dd_a0_v();
	}

	void f_cc_a0_v(void)
	{
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		if (tv3) {
			@Trigger(tv3, "cleanup");
		}
		if (tv4) {
			@Trigger(tv4, "cleanup");
		}
		tv8 = true;
	}

	void f_dd_a0_v(void)
	{
		object L0;
		disable OnTrigger;
		f_cc_a0_v();
		if (tv0) {
			tv0->Remove();
		}
		if (tv1) {
			tv1->Remove();
		}
		if (tv5) {
			@Trigger(tv5, "cleanup");
		}
		if (tv5) {
			@Trigger(tv6, "cleanup");
		}
		if (tv7) {
			@Trigger(tv7, "cleanup");
		}
		@GetSceneByName(L0, "warehouse_rubin");
		@Trigger(L0, "rubin");
		f_13d_a2_v("icot_eva@door1", false);
		@RemoveActor(f_10b_a0_o());
	}
}

object f_10b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_111_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddActor(L0, a1, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], a2);
	return L0;
}

object f_119_a4_o(object a0, string a1, string a2, string a3)
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

object f_12b_a4_o(object a0, string a1, string a2, string a3)
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

void f_13d_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

