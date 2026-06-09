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
		f_143_a2_v("boiny@door1", false);
		@GetSceneByName(L0, "cot_eva");
		f_154_a2_v("icot_eva_door", false);
		@Trigger(L0, "nodanko");
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_mdoberman") {
			object L0;
			@GetMainOutdoorScene(L0);
			tv0 = f_131_a4_o(L0, "pt_b9q01_mdoberman", "pers_doberman", "b9q01_mdoberman.xml");
		} else {
			if (a0 == "remove_mdoberman") {
				tv0->Remove();
			} else {
				if (a0 == "init_factory") {
					object L1;
					@GetSceneByName(L1, "factory");
					f_143_a2_v("factory@door1", false);
					f_154_a2_v("ifactory_grid_door", true);
					tv1 = f_11f_a4_o(L1, "pt_b9q01_Danko", "NPC_Bakalavr", "b9q01_danko.xml");
					tv2 = f_11f_a4_o(L1, "pt_b9q01_doberman1", "pers_doberman", "b9q01_doberman1.xml");
					tv3 = f_11f_a4_o(L1, "pt_b9q01_doberman2", "pers_doberman", "b9q01_doberman2.xml");
				} else {
					if (a0 == "factory_fight") {
						@Trigger(tv2, "attack");
						@Trigger(tv3, "attack");
						f_143_a2_v("ifactory@door1", true);
						@PlaySound("door_close");
					} else {
						if (a0 == "doberman_dead") {
							bool L2;
							tv2->IsDead(L2);
							if (L2) {
								tv3->IsDead(L2);
								if (L2) {
									f_143_a2_v("ifactory@door1", false);
									f_154_a2_v("ifactory_grid_door", false);
									@PlaySound("door_open");
									@SetVariable("b9q01DankoFree", 1);
								}
							}
						} else {
							if (a0 == "danko_free") {
								f_154_a2_v("ifactory_grid_door", false);
								@PlaySound("door_open");
								f_143_a2_v("factory@door1", true);
							} else {
								if (a0 == "reset_factory") {
									f_e3_a0_v();
									f_143_a2_v("factory@door1", true);
								} else {
									if (a0 == "cleanup") {
										int L3;
										@GetVariable("b9q01", L3);
										if (L3 != 1000) {
											f_d3_a0_v();
										} else {
											f_f0_a0_v();
										}
									} else {
										if (a0 == "remove_danko") {
											object L4;
											@GetSceneByName(L4, "cot_eva");
											f_154_a2_v("icot_eva_door", false);
											@Trigger(L4, "nodanko");
										} else {
											if (a0 == "fail") {
												f_d3_a0_v();
											} else {
												if (a0 == "completed") {
													f_db_a0_v();
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

	void f_d3_a0_v(void)
	{
		@SetVariable("b9q01", -1);
		f_f0_a0_v();
	}

	void f_db_a0_v(void)
	{
		@SetVariable("b9q01", 1000);
		f_f0_a0_v();
	}

	void f_e3_a0_v(void)
	{
		if (tv1) {
			@RemoveActor(tv1);
		}
		if (tv2) {
			@RemoveActor(tv2);
		}
		if (tv3) {
			@RemoveActor(tv3);
		}
	}

	void f_f0_a0_v(void)
	{
		object L0;
		if (tv0) {
			tv0->Remove();
		}
		f_e3_a0_v();
		f_143_a2_v("ifactory@door1", false);
		f_154_a2_v("ifactory_grid_door", false);
		f_143_a2_v("boiny@door1", true);
		@GetSceneByName(L0, "cot_eva");
		f_154_a2_v("icot_eva_door", false);
		@Trigger(L0, "danko");
		@RemoveActor(f_119_a0_o());
	}
}

object f_119_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
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
		@AddActor(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

object f_131_a4_o(object a0, string a1, string a2, string a3)
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

void f_143_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_154_a2_v(string a0, bool a1)
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

