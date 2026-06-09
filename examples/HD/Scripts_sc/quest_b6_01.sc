event OnGameTime 9;
event OnTrigger 26;

property object Bull;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;

	void init(void)
	{
		tv2 = f_151_a0_o();
		tv3 = f_151_a0_o();
		for (; ; ) {
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		int L0;
		@GetVariable("b6q01KlaraVisit", L0);
		if (!L0) {
			f_1ac_a1_i(a1);
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_klara") {
			object L0;
			float L1;
			@GetSceneByName(L0, "storojka");
			tv0 = f_162_a4_o(L0, "pt_b6q01_klara", "NPC_Klara", "b6q01_klara.xml");
			@GetGameTime(L1);
			L1 = L1 + 0.4000000059604645;
			@SetTimeEvent(0, L1);
		} else {
			if (a0 == "remove_klara") {
				@Trigger(tv0, "cleanup");
			} else {
				if (a0 == "cutscene") {
					f_157_a1_o("cs_burah_danko_microscope");
				} else {
					if (a0 == "cutscene_end") {
						@SetVariable("b6q01MicroscopeCS", 1);
					} else {
						if (a0 == "init_termitnik") {
							object L2;
							int L3;
							@GetSceneByName(L2, "termitnik2");
							tv1 = f_162_a4_o(L2, "pt_b6q01_mat", "NPC_Mat", "b6q01_mat.xml");
							for (L3 = 1; ; L3++) {
								bool L4;
								Vector L5;
								Vector L6;
								string L7;
								string L8;
								int L9;
								object L10;
								L2->GetLocator("pt_b6q01_agony" + L3, L4, L5, L6);
								if (!L4) {
									break;
								}
								@irand(L9, 3);
								if (L9 == 0) {
									L7 = "pers_worker";
									L8 = "agony1_man.xml";
								} else {
									if (L9 == 1) {
										L7 = "pers_morlok";
										L8 = "agony1_morlok.xml";
									} else {
										L7 = "pers_woman";
										L8 = "agony1_woman.xml";
									}
								}
								@AddActor(L10, L7, L2, L5, L6, L8);
							}
							tv3->add(f_162_a4_o(L2, "pt_b6q01_butcher1", "pers_butcher", "b6q01_butcher.xml"));
							tv3->add(f_162_a4_o(L2, "pt_b6q01_butcher2", "pers_butcher", "b6q01_butcher.xml"));
							tv3->add(f_162_a4_o(L2, "pt_b6q01_butcher3", "pers_butcher", "b6q01_butcher.xml"));
						} else {
							if (a0 == "clean_termitnik") {
								@Trigger(tv1, "cleanup");
								f_199_a2_v(tv2, "cleanup");
								f_199_a2_v(tv3, "cleanup");
							} else {
								if (a0 == "init_altar") {
									object L11;
									@GetMainOutdoorScene(L11);
									tv4 = f_174_a4_o(L11, "pt_b6q01_morlok1", "pers_morlok", "b6q01_morlok1.xml");
									tv5 = f_174_a4_o(L11, "pt_b6q01_morlok2", "pers_morlok", "b6q01_morlok2.xml");
									Bull = f_162_a4_o(L11, "pt_b6q01_bull", "pers_bull", "b6q01_bull.xml");
								} else {
									if (a0 == "sacrifice") {
										object L12;
										@RemoveActor(Bull);
										tv4->GetActor(L12);
										@RemoveActor(L12);
										tv4->Remove();
										tv5->GetActor(L12);
										@RemoveActor(L12);
										tv5->Remove();
										f_157_a1_o("quest_b6_01_cutscene");
									} else {
										if (a0 == "sacrifice_end") {
											object L13;
											@GetMainOutdoorScene(L13);
											tv4 = f_186_a4_o(L13, "pt_b6q01_morlok1", "pers_morlok", "b6q01_morlok1.xml");
											tv5 = f_186_a4_o(L13, "pt_b6q01_morlok2", "pers_morlok", "b6q01_morlok2.xml");
										} else {
											if (a0 == "cleanup") {
												int L14;
												@GetVariable("b6q01", L14);
												if (L14 != 1000) {
													f_112_a0_v();
												} else {
													f_122_a0_v();
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
			}
		}
	}

	void f_112_a0_v(void)
	{
		@SetVariable("b6q01", -1);
		f_122_a0_v();
	}

	void f_11a_a0_v(void)
	{
		@SetVariable("b6q01", 1000);
		f_122_a0_v();
	}

	void f_122_a0_v(void)
	{
		disable OnGameTime;
		f_199_a2_v(tv2, "cleanup");
		f_199_a2_v(tv3, "cleanup");
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		if (tv4) {
			tv4->Remove();
		}
		if (tv5) {
			tv5->Remove();
		}
		if (Bull) {
			@Trigger(Bull, "cleanup");
		}
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		@RemoveActor(f_14b_a0_o());
	}
}

object f_14b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_151_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_157_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_162_a4_o(object a0, string a1, string a2, string a3)
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

object f_174_a4_o(object a0, string a1, string a2, string a3)
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

object f_186_a4_o(object a0, string a1, string a2, string a3)
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

void f_199_a2_v(object a0, string a1)
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

int f_1ac_a1_i(float a0)
{
	return f_1b5_a3_i(525670, 525669, a0);
}

int f_1b5_a3_i(int a0, int a1, float a2)
{
	int L0;
	@AddMessage(a0, a1, a2, L0);
	@SendWorldWndMessage(6);
	return L0;
}

