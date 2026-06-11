event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var bool tv4;

	void init(void)
	{
		tv4 = false;
		tv0 = f_10d_a0_o();
		tv2 = f_10d_a0_o();
		tv1 = f_10d_a0_o();
		for (; ; ) {
			@Hold();
		}
	}

	void f_11_a0_v(void)
	{
		object L0;
		int L1;
		object L2;
		@GetMainOutdoorScene(L0);
		@irand(L1, 3);
		@Trace("Patrol location: " + L1);
		tv0->add(f_11e_a4_o(L0, "pt_d3q01_patrol" + (L1 + 1), "pers_patrool", "d3q01_cpatrol.xml"));
		tv0->add(f_11e_a4_o(L0, "pt_d3q01_patrol" + ((L1 + 1) % 3 + 1), "pers_patrool", "d3q01_patrol.xml"));
		tv0->add(f_11e_a4_o(L0, "pt_d3q01_patrol" + ((L1 + 2) % 3 + 1), "pers_patrool", "d3q01_patrol.xml"));
		@AddScriptedActor(L2, "d3q01_corpse1", "actor_disp.bin", L0, [0.0, 0.0, 0.0]);
		tv1->add(L2);
		@AddScriptedActor(L2, "d3q01_corpse2", "actor_disp.bin", L0, [0.0, 0.0, 0.0]);
		tv1->add(L2);
		@AddScriptedActor(L2, "d3q01_corpse3", "actor_disp.bin", L0, [0.0, 0.0, 0.0]);
		tv1->add(L2);
	}

	void f_5f_a0_v(void)
	{
		object L0;
		@GetMainOutdoorScene(L0);
		tv2->add(f_11e_a4_o(L0, "pt_d3q01_gpatrol1", "pers_patrool", "d3q01_gpatrol.xml"));
		tv2->add(f_11e_a4_o(L0, "pt_d3q01_gpatrol2", "pers_patrool", "d3q01_gpatrol.xml"));
		tv2->add(f_11e_a4_o(L0, "pt_d3q01_gpatrol3", "pers_patrool", "d3q01_gpatrol.xml"));
		@AddActor(tv3, "d3q01_graveyard_fire", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d3q01_graveyard_fire.xml");
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_butchers") {
			f_11_a0_v();
		} else {
			if (a0 == "patrol_talk") {
				f_5f_a0_v();
			} else {
				if (a0 == "gpatrol_attack") {
					int L0;
					int L1;
					if (!tv4) {
						tv4 = true;
						f_113_a1_o("quest_d3_01_teleport");
					}
					tv2->size(L0);
					for (L1 = 0; L1 < L0; L1++) {
						object L2;
						object L3;
						tv2->get(L2, L1);
						L2->GetActor(L3);
						if (L3) {
							@Trigger(L3, "kill_player");
						}
					}
					@Trigger(tv3, "put_item");
					f_f5_a0_v();
				} else {
					if (a0 == "gpatrol_talk") {
						int L4;
						int L5;
						@Trigger(tv3, "put_item");
						tv2->size(L4);
						for (L5 = 0; L5 < L4; L5++) {
							object L6;
							object L7;
							tv2->get(L6, L5);
							L6->GetActor(L7);
							if (L7) {
								@Trigger(L7, "talk_player");
							}
						}
						f_f5_a0_v();
					} else {
						if (a0 == "fail") {
							f_e5_a0_v();
						} else {
							if (a0 == "completed") {
								f_ed_a0_v();
							}
						}
					}
				}
			}
		}
	}

	void f_e5_a0_v(void)
	{
		@SetVariable("d3q01", -1);
		f_108_a0_v();
	}

	void f_ed_a0_v(void)
	{
		@SetVariable("d3q01", 1000);
		f_108_a0_v();
	}

	void f_f5_a0_v(void)
	{
		f_130_a1_v(tv0);
		f_143_a2_v(tv1, "cleanup");
		tv1->clear();
		f_130_a1_v(tv2);
		@Trigger(tv3, "cleanup");
	}

	void f_108_a0_v(void)
	{
		disable OnTrigger;
		f_f5_a0_v();
	}
}

object f_10d_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_113_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_11e_a4_o(object a0, string a1, string a2, string a3)
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

void f_130_a1_v(object a0)
{
	int L0;
	int L1;
	a0->size(L0);
	for (L1 = 0; L1 < L0; L1++) {
		object L2;
		a0->get(L2, L1);
		if (L2) {
			L2->Remove();
		}
	}
	a0->clear();
}

void f_143_a2_v(object a0, string a1)
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

