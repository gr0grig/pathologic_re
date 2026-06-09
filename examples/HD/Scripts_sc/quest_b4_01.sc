event OnTrigger 26;
event OnTimer 7;

maintask t0
{
	var bool tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;
	var object tv6;
	var object tv7;
	var object tv8;
	var object tv9;
	var bool tv10;

	void init(void)
	{
		f_1b5_a2_v("cot_alexandr@door1", true);
		tv7 = f_192_a0_o();
		f_1b5_a2_v("warehouse_gangster@door1", true);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "rubin_unlock") {
			object L0;
			bool L1;
			f_1b5_a2_v("warehouse_rubin@door1", false);
			@FindActor(L0, "iwarehouse_rubin_Stol");
			L0->AddItem(L1, "b4q01_sample", 0);
		} else {
			if (a0 == "place_rubin") {
				object L2;
				@GetSceneByName(L2, "warehouse_gangster");
				tv1 = f_1a3_a4_o(L2, "pt_b4q01_rubin", "NPC_Rubin", "b4q01_Rubin.xml");
				tv2 = f_1a3_a4_o(L2, "pt_b4q01_agony1", "pers_unosha", "b4q01_agony1.xml");
				tv3 = f_1a3_a4_o(L2, "pt_b4q01_agony2", "pers_worker", "b4q01_agony2.xml");
				@AddScriptedActor(tv4, "b4q01_corpse", "actor_disp.bin", L2, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
				f_1b5_a2_v("warehouse_gangster@door1", false);
				tv0 = true;
			} else {
				if (a0 == "wg_unload") {
					if (tv0) {
						object L3;
						object L4;
						bool L5;
						Vector L6;
						tv10 = true;
						f_122_a0_v();
						f_1b5_a2_v("warehouse_gangster@door1", true);
						@GetMainOutdoorScene(L3);
						tv7->add(f_1a3_a4_o(L3, "pt_b4q01_patrol1", "pers_patrool", "b4q01_patrol.xml"));
						tv7->add(f_1a3_a4_o(L3, "pt_b4q01_patrol2", "pers_patrool", "b4q01_patrol.xml"));
						tv7->add(f_1a3_a4_o(L3, "pt_b4q01_patrol3", "pers_patrool", "b4q01_patrol.xml"));
						tv7->add(f_1a3_a4_o(L3, "pt_b4q01_patrol4", "pers_patrool", "b4q01_patrol.xml"));
						f_198_a1_o("quest_b4_01_teleport");
						@GetSceneByName(L3, "factory");
						tv8 = f_1a3_a4_o(L3, "pt_b4q01_patrol1_1", "pers_patrool", "b4q01_fpatrol1.xml");
						tv9 = f_1a3_a4_o(L3, "pt_b4q01_patrol2_1", "pers_patrool", "b4q01_fpatrol2.xml");
						@AddActor(L4, "b4q01_factory_corpse", L3, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "b4q01_factory_corpse.xml");
						tv5 = f_1a3_a4_o(L3, "pt_b4q01_agony1", "pers_unosha", "agony1_man.xml");
						tv6 = f_1a3_a4_o(L3, "pt_b4q01_agony2", "pers_worker", "agony1_man.xml");
						@SetTimer(0, 20.0);
						L3->GetLocator("pt_b4q01_fog", L5, L6);
						f_184_a2_v(L3, L6);
					}
				} else {
					if (a0 == "factory_unload") {
						@KillTimer(0);
						if (tv10) {
							@RemoveActor(f_18c_a0_o());
						}
					} else {
						if (a0 == "patrol_attack") {
							f_1b5_a2_v("ifactory_grid_door", false);
							@Trigger(tv8, "attack");
							@Trigger(tv9, "attack");
						} else {
							if (a0 == "patrol_dead") {
								bool L7;
								tv8->IsDead(L7);
								if (L7) {
									tv9->IsDead(L7);
									if (L7) {
										f_1b5_a2_v("ifactory@door1", false);
										@PlaySound("door_open");
									}
								}
							} else {
								if (a0 == "cleanup") {
									int L8;
									@GetVariable("b4q01", L8);
									if (L8 != 1000) {
										f_112_a0_v();
									} else {
										f_13a_a0_v();
									}
								} else {
									if (a0 == "fail") {
										f_112_a0_v();
									} else {
										if (a0 == "completed") {
											f_11a_a0_v();
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

	void f_112_a0_v(void)
	{
		@SetVariable("b4q01", -1);
		f_13a_a0_v();
	}

	void f_11a_a0_v(void)
	{
		@SetVariable("b4q01", 1000);
		f_13a_a0_v();
	}

	void f_122_a0_v(void)
	{
		if (tv0) {
			if (tv1) {
				@Trigger(tv1, "cleanup");
			}
			if (tv2) {
				@Trigger(tv2, "cleanup");
			}
			if (tv3) {
				@Trigger(tv3, "cleanup");
			}
			if (tv4) {
				@Trigger(tv4, "cleanup");
			}
			tv0 = false;
		}
	}

	void f_13a_a0_v(void)
	{
		object L0;
		int L1;
		if (tv10) {
			return;
		}
		disable OnTrigger;
		@KillTimer(0);
		f_1b5_a2_v("warehouse_rubin@door1", false);
		f_1b5_a2_v("ifactory@door1", false);
		@FindActor(L0, "iwarehouse_rubin_Stol");
		L0->RemoveItemByType(L1, "b4q01_sample");
		f_122_a0_v();
		f_1c6_a2_v(tv7, "cleanup");
		tv7 = null;
		if (tv5) {
			@Trigger(tv5, "cleanup");
		}
		if (tv6) {
			@Trigger(tv6, "cleanup");
		}
		f_1b5_a2_v("warehouse_gangster@door1", false);
		@RemoveActor(f_18c_a0_o());
	}

	void OnTimer(int a0)
	{
		object L0;
		Vector L1;
		if (a0 != 0) {
			return;
		}
		@GetSceneByName(L0, "factory");
		L0->GetRandomPFPoint(L1, 0, 0);
		f_184_a2_v(L0, L1);
	}
}

void f_184_a2_v(object a0, Vector a1)
{
	object L0;
	@AddActorByType(L0, "fog", a0, a1, [0.0, 0.0, 1.0], "b4q01_fog.xml");
}

object f_18c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_192_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_198_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_1a3_a4_o(object a0, string a1, string a2, string a3)
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

void f_1b5_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_1c6_a2_v(object a0, string a1)
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

