event OnGameTime 9;
event OnTrigger 26;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;

	void init(void)
	{
		f_16a_a2_v("cot_alexandr@door1", false);
		tv2 = f_135_a0_o();
		for (; ; ) {
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_1bd_a1_i(a1);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "vera_kabak") {
			object L0;
			@GetSceneByName(L0, "shouse1_kabak");
			tv0 = f_146_a4_o(L0, "pt_b5q01_vera", "pers_nudegirl", "b5q01_vera1.xml");
		} else {
			if (a0 == "vera_stvorki") {
				object L1;
				float L2;
				@Trigger(tv0, "cleanup");
				@GetMainOutdoorScene(L1);
				tv1 = f_158_a4_o(L1, "pt_b5q01_vera", "pers_nudegirl", "b5q01_vera2.xml");
				@GetGameTime(L2);
				L2 = L2 + 1;
				@SetTimeEvent(0, L2);
			} else {
				if (a0 == "vera_retreat") {
					object L3;
					tv1->GetActor(L3);
					@Trigger(L3, "retreat");
				} else {
					if (a0 == "place_butchers") {
						object L4;
						@GetMainOutdoorScene(L4);
						tv2->add(f_158_a4_o(L4, "pt_b5q01_butcher1", "pers_butcher", "b5q01_butcher.xml"));
						tv2->add(f_158_a4_o(L4, "pt_b5q01_butcher2", "pers_butcher", "b5q01_butcher.xml"));
						tv2->add(f_158_a4_o(L4, "pt_b5q01_butcher3", "pers_butcher", "b5q01_butcher.xml"));
						tv3 = f_158_a4_o(L4, "pt_b5q01_nudegirl", "pers_nudegirl", "b5q01_gwife.xml");
					} else {
						if (a0 == "butcher_attack") {
							int L5;
							int L6;
							tv2->size(L5);
							for (L6 = 0; L6 < L5; L6++) {
								object L7;
								tv2->get(L7, L6);
								if (L7) {
									object L8;
									L7->GetActor(L8);
									if (L8) {
										@Trigger(L8, "attack");
									}
								}
							}
							if (tv3) {
								object L9;
								tv3->GetActor(L9);
								if (L9) {
									@Trigger(L9, "retreat");
								}
								tv3->Remove();
							}
						} else {
							if (a0 == "gwife_dead") {
								object L10;
								@SetVariable("b5q01WifeDead", 1);
								@FindActor(L10, "player");
								if (L10) {
									f_17b_a2_b(L10, 0.5);
								}
							} else {
								if (a0 == "cleanup") {
									int L11;
									@GetVariable("b5q01", L11);
									if (L11 != 1000) {
										f_da_a0_v();
									} else {
										f_ea_a0_v();
									}
								} else {
									if (a0 == "cutscene") {
										f_13b_a1_o("cs_burah_danko_microscope");
									} else {
										if (a0 == "cutscene_end") {
											@SetVariable("b5q01MicroscopeCS", 1);
										} else {
											if (a0 == "fail") {
												f_da_a0_v();
											} else {
												if (a0 == "completed") {
													f_e2_a0_v();
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

	void f_da_a0_v(void)
	{
		@SetVariable("b5q01", -1);
		f_ea_a0_v();
	}

	void f_e2_a0_v(void)
	{
		@SetVariable("b5q01", 1000);
		f_ea_a0_v();
	}

	void f_ea_a0_v(void)
	{
		disable OnGameTime;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			tv1->Remove();
		}
		f_1a8_a1_v(tv2);
		if (tv3) {
			tv3->Remove();
		}
		@RemoveActor(f_124_a0_o());
	}
}

bool f_102_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_10e_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_102_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_12a_a3_f(L0 + a2, a3, a4));
	return true;
}

object f_124_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_12a_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_135_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_13b_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_146_a4_o(object a0, string a1, string a2, string a3)
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

object f_158_a4_o(object a0, string a1, string a2, string a3)
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

void f_16a_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_17b_a2_b(object a0, float a1)
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
	f_19e_a1_v(a1);
	f_10e_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_19e_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

void f_1a8_a1_v(object a0)
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

int f_1bd_a1_i(float a0)
{
	return f_1c6_a3_i(530811, 530810, a0);
}

int f_1c6_a3_i(int a0, int a1, float a2)
{
	int L0;
	@AddMessage(a0, a1, a2, L0);
	@SendWorldWndMessage(6);
	return L0;
}

