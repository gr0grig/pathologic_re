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
	var object tv11;
	var object tv12;

	void init(void)
	{
		object L0;
		f_1e2_a2_v("storojka@door1", false);
		f_1e2_a2_v("burah_home@door1", false);
		f_1e2_a2_v("cot_katerina@door1", true);
		f_1e2_a2_v("cot_alexandr@door1", true);
		@GetMainOutdoorScene(L0);
		tv0 = f_1cf_a4_o(L0, "pt_k1q01_birdmask", "pers_birdmask", "k1q01_birdmask.xml");
		tv1 = f_1cf_a4_o(L0, "pt_k1q01_whitemask", "pers_whitemask", "k1q01_whitemask.xml");
		tv11 = f_1bd_a4_o(L0, "pt_k1q01_grabitel1", "pers_grabitel", "k1q01_grabitel.xml");
		tv12 = f_1bd_a4_o(L0, "pt_k1q01_grabitel2", "pers_grabitel", "k1q01_grabitel.xml");
		@GetSceneByName(L0, "storojka");
		tv2 = f_1ab_a4_o(L0, "pt_k1q01_katerina", "NPC_Katerina", "k1q01_katerina.xml");
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "remove_whitemask") {
			if (tv1) {
				tv1->Remove();
			}
		} else {
			if (a0 == "remove_birdmask") {
				if (tv0) {
					tv0->Remove();
				}
			} else {
				if (a0 == "remove_katerina") {
					if (tv2) {
						@Trigger(tv2, "cleanup");
					}
					f_1e2_a2_v("cot_katerina@door1", false);
					f_1e2_a2_v("cot_alexandr@door1", false);
				} else {
					if (a0 == "init_alexandr") {
						object L0;
						f_1e2_a2_v("cot_anna@door1", false);
						@GetMainOutdoorScene(L0);
						tv4 = f_1bd_a4_o(L0, "pt_k1q01_doberman", "pers_doberman", "k1q01_doberman.xml");
						tv8 = f_1bd_a4_o(L0, "pt_k1q01_dohodyaga", "pers_dohodyaga", "k1q01_dohodyaga.xml");
						@GetSceneByName(L0, "cot_anna");
						tv3 = f_1ab_a4_o(L0, "pt_k1q01_danko", "NPC_Bakalavr", "k1q01_danko.xml");
						tv5 = f_1ab_a4_o(L0, "pt_k1q01_wastedmale1", "pers_wasted_male", "k1q01_statist.xml");
						tv6 = f_1ab_a4_o(L0, "pt_k1q01_wastedmale2", "pers_wasted_male", "k1q01_statist.xml");
						tv9 = f_1ab_a4_o(L0, "pt_k1q01_woman", "pers_woman", "k1q01_statist.xml");
						tv7 = f_1ab_a4_o(L0, "pt_k1q01_agony", "pers_worker", "k1q01_agony.xml");
					} else {
						if (a0 == "doberman_dead") {
							if (tv4) {
								tv4->Remove();
							}
							@SetVariable("k1q01DobermanDead", 1);
							f_220_a0_v();
						} else {
							if (a0 == "cure_worker") {
								@RemoveActor(tv7);
								tv7 = null;
								f_1a0_a1_o("quest_k1_01_cutscene");
							} else {
								if (a0 == "cutscene_end") {
									object L1;
									@GetSceneByName(L1, "cot_anna");
									tv10 = f_1ab_a4_o(L1, "pt_k1q01_worker", "pers_worker", "k1q01_worker.xml");
									@SetVariable("k1q01Healed", 1);
									f_22d_a0_v();
									f_1f3_a2_b(f_166_a0_o(), 0.25);
									if (tv4) {
										tv4->Remove();
									}
									if (tv8) {
										tv8->Remove();
									}
								} else {
									if (a0 == "cleanup") {
										int L2;
										@GetVariable("k1q01", L2);
										if (L2 != 1000) {
											f_114_a0_v();
										} else {
											f_124_a0_v();
										}
									} else {
										if (a0 == "fail") {
											f_114_a0_v();
										} else {
											if (a0 == "completed") {
												f_11c_a0_v();
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

	void f_114_a0_v(void)
	{
		@SetVariable("k1q01", -1);
		f_124_a0_v();
	}

	void f_11c_a0_v(void)
	{
		@SetVariable("k1q01", 1000);
		f_124_a0_v();
	}

	void f_124_a0_v(void)
	{
		disable OnTrigger;
		if (tv1) {
			tv1->Remove();
		}
		if (tv0) {
			tv0->Remove();
		}
		if (tv11) {
			tv11->Remove();
		}
		if (tv12) {
			tv12->Remove();
		}
		if (tv4) {
			tv4->Remove();
		}
		if (tv8) {
			tv8->Remove();
		}
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		if (tv3) {
			@Trigger(tv3, "cleanup");
		}
		if (tv5) {
			@Trigger(tv5, "cleanup");
		}
		if (tv6) {
			@Trigger(tv6, "cleanup");
		}
		if (tv9) {
			@Trigger(tv9, "cleanup");
		}
		if (tv10) {
			@Trigger(tv10, "cleanup");
		}
		f_1e2_a2_v("cot_katerina@door1", false);
		@RemoveActor(f_18f_a0_o());
	}
}

object f_166_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_16d_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_179_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_16d_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_195_a3_f(L0 + a2, a3, a4));
	return true;
}

object f_18f_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_195_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_1a0_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_1ab_a4_o(object a0, string a1, string a2, string a3)
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

object f_1bd_a4_o(object a0, string a1, string a2, string a3)
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

object f_1cf_a4_o(object a0, string a1, string a2, string a3)
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

void f_1e2_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_1f3_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_216_a1_v(a1);
	f_179_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_216_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

void f_220_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 325, 1, 524741);
	f_247_a2_b(L0, 318);
}

void f_22d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 323, 1, 524739);
	f_247_a2_b(L0, 318);
}

object f_23a_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_247_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_23a_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SendWorldWndMessage(7);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

