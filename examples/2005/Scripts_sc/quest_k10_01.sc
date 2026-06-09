event OnTrigger 26;

var object g0;

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
	var object tv8;
	var object tv9;
	var object tv10;

	void init(void)
	{
		object L0;
		tv7 = f_188_a0_o();
		@GetSceneByName(L0, "cot_eva");
		@Trigger(L0, "nodanko");
		@GetSceneByName(L0, "warehouse_rubin");
		@Trigger(L0, "norubin");
		f_1b2_a2_v("warehouse_rubin@door1", false);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "warehouse_rubin_load") {
			if (!tv0) {
				object L0;
				@GetSceneByName(L0, "warehouse_rubin");
				tv0 = f_18e_a4_o(L0, "pt_rubin", "NPC_Bakalavr", "k10q01_danko.xml");
			}
		} else {
			if (a0 == "place_soldiers") {
				object L1;
				@GetMainOutdoorScene(L1);
				tv1 = f_1a0_a4_o(L1, "pt_k10q01_soldier1", "pers_soldat", "k10q01_soldier.xml");
				tv2 = f_1a0_a4_o(L1, "pt_k10q01_soldier2", "pers_soldat", "k10q01_soldier.xml");
				f_1b2_a2_v("uprava_prison@door1", true);
				f_1b2_a2_v("uprava_admin@door1", false);
			} else {
				if (a0 == "remove_soldiers") {
					if (tv1) {
						tv1->Remove();
					}
					if (tv2) {
						tv2->Remove();
					}
					f_1b2_a2_v("uprava_prison@door1", false);
				} else {
					if (a0 == "init_prison") {
						object L2;
						int L3;
						@GetSceneByName(L2, "uprava_prison");
						tv3 = f_18e_a4_o(L2, "pt_k10q01_wastedmale", "pers_wasted_male", "k10q01_wastedmale.xml");
						for (L3 = 1; ; L3++) {
							bool L4;
							Vector L5;
							Vector L6;
							object L7;
							L2->GetLocator("pt_k10q01_fog" + L3, L4, L5, L6);
							if (!L4) {
								break;
							}
							@AddActorByType(L7, "fog", L2, L5, L6, "fog_stat_indoor.xml");
							tv7->add(L7);
						}
					} else {
						if (a0 == "free_prisoner") {
							object L8;
							if (tv3) {
								@Trigger(tv3, "cleanup");
							}
							@GetMainOutdoorScene(L8);
							tv4 = f_1a0_a4_o(L8, "pt_k10q01_wastedmale", "pers_wasted_male", "k10q01_wastedmale_free.xml");
							@GetSceneByName(L8, "burah_home");
							@Trigger(L8, "noburah");
						} else {
							if (a0 == "init_factory") {
								object L9;
								@GetSceneByName(L9, "factory");
								tv5 = f_18e_a4_o(L9, "pt_k10q01_burah", "NPC_Burah", "k10q01_burah.xml");
								f_1b2_a2_v("factory@door1", false);
							} else {
								if (a0 == "place_prophet") {
									object L10;
									@GetMainOutdoorScene(L10);
									tv10 = f_1a0_a4_o(L10, "pt_k10q01_prophet", "pers_krysa", "k10q01_prophet.xml");
								} else {
									if (a0 == "teleport") {
										object L11;
										@FindActor(L11, "player");
										if (L11) {
											object L12;
											Vector L13;
											Vector L14;
											bool L15;
											@GetSceneByName(L12, "house_vlad");
											L12->GetLocator("pt_k10q01_teleport", L15, L13, L14);
											@Teleport(L11, L12, L13, L14);
											f_1b2_a2_v("ihouse_vlad@door2", true);
											f_18e_a4_o(L12, "pt_k10q01_wastedmale_u1", "pers_wasted_male", "k10q01_wastedmale_u.xml");
											f_18e_a4_o(L12, "pt_k10q01_wastedmale_u2", "pers_wasted_male", "k10q01_wastedmale_u.xml");
											tv6 = f_18e_a4_o(L12, "pt_k10q01_rubin", "NPC_Rubin", "k10q01_rubin.xml");
										}
									} else {
										if (a0 == "fail") {
											f_1e2_a0_v();
											f_115_a0_v();
										} else {
											if (a0 == "completed") {
												f_1e2_a0_v();
												f_11d_a0_v();
											} else {
												if (a0 == "cleanup") {
													int L16;
													@GetVariable("k10q01", L16);
													if (L16 != 1000) {
														f_115_a0_v();
													} else {
														f_125_a0_v();
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
	}

	void f_115_a0_v(void)
	{
		@SetVariable("k10q01", -1);
		f_125_a0_v();
	}

	void f_11d_a0_v(void)
	{
		@SetVariable("k10q01", 1000);
		f_125_a0_v();
	}

	void f_125_a0_v(void)
	{
		object L0;
		disable OnTrigger;
		@GetSceneByName(L0, "cot_eva");
		@Trigger(L0, "danko");
		@GetSceneByName(L0, "burah_home");
		@Trigger(L0, "burah");
		@GetSceneByName(L0, "warehouse_rubin");
		@Trigger(L0, "rubin");
		f_1b2_a2_v("uprava_prison@door1", false);
		f_1b2_a2_v("ihouse_vlad@door2", false);
		f_1b2_a2_v("factory@door1", false);
		if (tv0) {
			@Trigger(tv0, "cleanup");
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
		if (tv4) {
			tv4->Remove();
		}
		if (tv5) {
			@Trigger(tv5, "cleanup");
		}
		if (tv10) {
			tv10->Remove();
		}
		if (tv6) {
			@Trigger(tv6, "cleanup");
		}
		f_1cf_a2_v(tv7, "cleanup");
		if (tv8) {
			@Trigger(tv8, "cleanup");
		}
		if (tv9) {
			@Trigger(tv9, "cleanup");
		}
		@RemoveActor(f_182_a0_o());
	}
}

object f_182_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_188_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_18e_a4_o(object a0, string a1, string a2, string a3)
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

object f_1a0_a4_o(object a0, string a1, string a2, string a3)
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

void f_1b2_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_1c3_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_1cf_a2_v(object a0, string a1)
{
	if (a0) {
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
}

void f_1e2_a0_v(void)
{
	f_1c3_a2_b("klara2_npc_positioner", "init");
}

