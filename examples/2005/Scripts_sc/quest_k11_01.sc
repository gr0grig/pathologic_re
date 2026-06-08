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

	void init(void)
	{
		object L0;
		tv0 = f_140_a0_o();
		tv2 = f_140_a0_o();
		@GetSceneByName(L0, "cot_eva");
		@Trigger(L0, "nodanko");
		f_199_a2_v("icot_eva_door", false);
		@GetSceneByName(L0, "shouse1_kabak");
		@Trigger(L0, "noandrei");
		@GetSceneByName(L0, "warehouse_rubin");
		@Trigger(L0, "rubin");
		f_188_a2_v("sobor@door1", false);
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
			for (L1 = 1; ; L1 = L1 + 1) {
				bool L2;
				Vector L3;
				Vector L4;
				L0->GetLocator("pt_k11q01_soldier" + L1, L2, L3, L4);
				if (!L2) {
					break;
				}
				tv0->add(f_151_a4_o(L0, "pt_k11q01_soldier" + L1, "pers_soldat", "k11q01_kabak_soldier.xml"));
			}
			tv1 = f_151_a4_o(L0, "pt_k11q01_officer", "pers_soldat", "k11q01_kabak_officer.xml");
		} else {
			if (a0 == "init_gun") {
				object L5;
				int L6;
				@GetMainOutdoorScene(L5);
				for (L6 = 1; ; L6 = L6 + 1) {
					bool L7;
					Vector L8;
					Vector L9;
					L5->GetLocator("pt_k11q01_soldier" + L6, L7, L8, L9);
					if (!L7) {
						break;
					}
					tv2->add(f_163_a4_o(L5, "pt_k11q01_soldier" + L6, "pers_soldat", "k11q01_soldier.xml"));
				}
				tv4 = f_163_a4_o(L5, "pt_k11q01_agony_officer", "pers_soldat", "k11q01_officer_agony.xml");
			} else {
				if (a0 == "cure_officer") {
					object L10;
					tv4->GetActor(L10);
					if (L10) {
						@RemoveActor(L10);
					}
					tv4->Remove();
					@SetVariable("k11q01Cured", 1);
					f_146_a1_o("quest_k11_01_cutscene");
				} else {
					if (a0 == "cutscene_end") {
						object L11;
						@GetMainOutdoorScene(L11);
						tv3 = f_175_a4_o(L11, "pt_k11q01_officer", "pers_soldat", "k11q01_officer.xml");
					} else {
						if (a0 == "init_house_petr") {
							object L12;
							@GetSceneByName(L12, "house_petr");
							tv7 = f_151_a4_o(L12, "pt_k11q01_andrei", "NPC_Andrei", "k11q01_andrei.xml");
							tv5 = f_151_a4_o(L12, "pt_k11q01_danko", "NPC_Bakalavr", "k11q01_danko.xml");
						} else {
							if (a0 == "place_burah") {
								object L13;
								@GetSceneByName(L13, "burah_home");
								@Trigger(L13, "noburah");
								@GetSceneByName(L13, "boiny");
								tv6 = f_151_a4_o(L13, "pt_k11q01_burah", "NPC_Burah", "k11q01_burah.xml");
							} else {
								if (a0 == "fail") {
									f_1e2_a0_v();
									f_ed_a0_v();
								} else {
									if (a0 == "completed") {
										f_1e2_a0_v();
										f_f5_a0_v();
									} else {
										if (a0 == "cleanup") {
											int L14;
											@GetVariable("k11q01", L14);
											if (L14 != 1000) {
												f_ed_a0_v();
											} else {
												f_fd_a0_v();
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

	void f_ed_a0_v(void)
	{
		@SetVariable("k11q01", -1);
		f_fd_a0_v();
	}

	void f_f5_a0_v(void)
	{
		@SetVariable("k11q01", 1000);
		f_fd_a0_v();
	}

	void f_fd_a0_v(void)
	{
		object L0;
		disable OnTrigger;
		@GetSceneByName(L0, "cot_eva");
		@Trigger(L0, "danko");
		@GetSceneByName(L0, "shouse1_kabak");
		@Trigger(L0, "andrei");
		@GetSceneByName(L0, "burah_home");
		@Trigger(L0, "burah");
		f_1cf_a2_v(tv0, "cleanup");
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		f_1ba_a1_v(tv2);
		if (tv3) {
			@Trigger(tv3, "cleanup");
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
		@RemoveActor(f_13a_a0_o());
	}
}

object f_13a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_140_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_146_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_151_a4_o(object a0, string a1, string a2, string a3)
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

object f_163_a4_o(object a0, string a1, string a2, string a3)
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

object f_175_a4_o(object a0, string a1, string a2, string a3)
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
		a0->AddStationaryActor(L3, L1, L2, a2, a3, true);
	}
	return L3;
}

void f_188_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_199_a2_v(string a0, bool a1)
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

bool f_1ae_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_1ba_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				L2->Remove();
			}
		}
		a0->clear();
	}
}

void f_1cf_a2_v(object a0, string a1)
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

void f_1e2_a0_v(void)
{
	f_1ae_a2_b("klara2_npc_positioner", "init");
}

