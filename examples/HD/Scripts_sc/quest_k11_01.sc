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
	var Vector tv8;
	var Vector tv9;

	void init(void)
	{
		object L0;
		tv0 = f_16b_a0_o();
		tv2 = f_16b_a0_o();
		@GetSceneByName(L0, "cot_eva");
		@Trigger(L0, "nodanko");
		f_1b1_a2_v("icot_eva_door", false);
		@GetSceneByName(L0, "shouse1_kabak");
		@Trigger(L0, "noandrei");
		@GetSceneByName(L0, "warehouse_rubin");
		@Trigger(L0, "rubin");
		f_1a0_a2_v("sobor@door1", false);
		f_1a0_a2_v("cot_maria@door1", true);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_kabak") {
			object L0;
			int L1;
			@GetSceneByName(L0, "shouse1_kabak");
			for (L1 = 1; ; L1++) {
				bool L2;
				Vector L3;
				Vector L4;
				L0->GetLocator("pt_k11q01_soldier" + L1, L2, L3, L4);
				if (!L2) {
					break;
				}
				tv0->add(f_17c_a4_o(L0, "pt_k11q01_soldier" + L1, "pers_soldat", "k11q01_kabak_soldier.xml"));
			}
			tv1 = f_17c_a4_o(L0, "pt_k11q01_officer", "pers_soldat", "k11q01_kabak_officer.xml");
		} else {
			if (a0 == "init_gun") {
				object L5;
				@GetMainOutdoorScene(L5);
				int L6;
				for (L6 = 1; ; L6++) {
					bool L7;
					Vector L8;
					Vector L9;
					L5->GetLocator("pt_k11q01_soldier" + L6, L7, L8, L9);
					if (!L7) {
						break;
					}
					tv2->add(f_18e_a4_o(L5, "pt_k11q01_soldier" + L6, "pers_soldat", "k11q01_soldier.xml"));
				}
				bool L10;
				Vector L11;
				Vector L12;
				L5->GetLocator("pt_k11q01_agony_officer", L10, L11, L12);
				L11 = L11 + [0.0, 7.0, 0.0];
				L5->AddStationaryActor(tv4, L11, L12, "pers_soldat", "k11q01_officer_agony.xml", true);
			} else {
				if (a0 == "cure_officer") {
					object L13;
					object L14;
					@FindActor(L13, "player");
					L13->GetPosition(tv8);
					L13->GetDirection(tv9);
					tv9.y = 0;
					tv9 = f_161_a1_V(tv9);
					tv4->GetActor(L14);
					if (L14) {
						@RemoveActor(L14);
					}
					tv4->Remove();
					@SetVariable("k11q01Cured", 1);
					f_171_a1_o("quest_k11_01_cutscene");
				} else {
					if (a0 == "cutscene_end") {
						object L15;
						Vector L16;
						@GetMainOutdoorScene(L15);
						L16 = tv8 + tv9 * 150.0 + [0.0, 10.0, 0.0];
						L15->AddStationaryActor(tv3, L16, -tv9, "pers_soldat", "k11q01_officer.xml", true);
					} else {
						if (a0 == "init_house_petr") {
							object L17;
							@GetSceneByName(L17, "house_petr");
							tv7 = f_17c_a4_o(L17, "pt_k11q01_andrei", "NPC_Andrei", "k11q01_andrei.xml");
							tv5 = f_17c_a4_o(L17, "pt_k11q01_danko", "NPC_Bakalavr", "k11q01_danko.xml");
						} else {
							if (a0 == "place_burah") {
								object L18;
								@GetSceneByName(L18, "burah_home");
								@Trigger(L18, "noburah");
								@GetSceneByName(L18, "boiny");
								tv6 = f_17c_a4_o(L18, "pt_k11q01_burah", "NPC_Burah", "k11q01_burah.xml");
							} else {
								if (a0 == "fail") {
									f_10c_a0_v();
									f_1fa_a0_v();
									f_200_a0_v();
								} else {
									if (a0 == "completed") {
										f_114_a0_v();
										f_1fa_a0_v();
										f_200_a0_v();
									} else {
										if (a0 == "cleanup") {
											int L19;
											@GetVariable("k11q01", L19);
											if (L19 != 1000) {
												f_10c_a0_v();
											}
											f_14c_a0_v();
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

	void f_10c_a0_v(void)
	{
		@SetVariable("k11q01", -1);
		f_11c_a0_v();
	}

	void f_114_a0_v(void)
	{
		@SetVariable("k11q01", 1000);
		f_11c_a0_v();
	}

	void f_11c_a0_v(void)
	{
		object L0;
		@GetSceneByName(L0, "cot_eva");
		@Trigger(L0, "danko");
		@GetSceneByName(L0, "shouse1_kabak");
		@Trigger(L0, "andrei");
		f_1e7_a2_v(tv0, "cleanup");
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		f_1d2_a1_v(tv2);
		if (tv3) {
			tv3->Remove();
		}
		if (tv5) {
			@Trigger(tv5, "cleanup");
		}
		if (tv6) {
			@Trigger(tv6, "cleanup");
		}
		if (tv7) {
			@Trigger(tv7, "cleanup");
		}
	}

	void f_14c_a0_v(void)
	{
		disable OnTrigger;
		f_1a0_a2_v("cot_maria@door1", false);
		f_209_a0_v();
		@RemoveActor(f_15b_a0_o());
	}
}

object f_15b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_161_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

object f_16b_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_171_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_17c_a4_o(object a0, string a1, string a2, string a3)
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
		a0->AddStationaryActor(L3, L1, L2, a2, a3);
	}
	return L3;
}

void f_1a0_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_1b1_a2_v(string a0, bool a1)
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

bool f_1c6_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_1d2_a1_v(object a0)
{
	if (a0) {
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
}

void f_1e7_a2_v(object a0, string a1)
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

void f_1fa_a0_v(void)
{
	f_1c6_a2_b("klara2_npc_positioner", "init");
}

void f_200_a0_v(void)
{
	object L0;
	@GetSceneByName(L0, "burah_home");
	@Trigger(L0, "noburah");
}

void f_209_a0_v(void)
{
	object L0;
	@GetSceneByName(L0, "burah_home");
	@Trigger(L0, "burah");
}

