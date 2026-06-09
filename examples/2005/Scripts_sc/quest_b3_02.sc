event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;

	void init(void)
	{
		@SetVariable("b3q02", 1);
		tv0 = f_fe_a0_o();
		f_e0_a1_v(3);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_grabitel1") {
			object L0;
			f_116_a2_v("warehouse_notkin@door1", true);
			@GetMainOutdoorScene(L0);
			tv0->add(f_104_a4_o(L0, "pt_b3q02_grabitel1_1", "pers_grabitel", "b3q02_grabitel1.xml"));
			tv0->add(f_104_a4_o(L0, "pt_b3q02_grabitel1_2", "pers_grabitel", "b3q02_grabitel1.xml"));
		} else {
			if (a0 == "remove_grabitel") {
				f_127_a1_v(tv0);
			} else {
				if (a0 == "grabitel_attack") {
					bool L1;
					int L2;
					int L3;
					L1 = false;
					tv0->size(L2);
					for (L3 = 0; L3 < L2; L3++) {
						object L4;
						tv0->get(L4, L3);
						if (L4) {
							object L5;
							L4->GetActor(L5);
							if (L5) {
								@Trigger(L5, "attack");
								L1 = true;
							} else {
								L4->Remove();
							}
						}
					}
					if (!L1) {
						f_cb_a0_v();
					}
				} else {
					if (a0 == "grabitel_dead") {
						int L6;
						int L7;
						tv0->size(L6);
						for (L7 = 0; L7 < L6; L7++) {
							object L8;
							tv0->get(L8, L7);
							if (L8) {
								object L9;
								L8->GetActor(L9);
								if (L9) {
									bool L10;
									L9->IsDead(L10);
									if (!L10) {
										return;
									}
								} else {
									L8->Remove();
								}
							}
						}
						f_cb_a0_v();
					} else {
						if (a0 == "place_grabitel2") {
							object L11;
							int L12;
							@GetMainOutdoorScene(L11);
							for (L12 = 1; L12 <= 4; L12++) {
								tv0->add(f_104_a4_o(L11, "pt_b3q02_grabitel2_" + L12, "pers_grabitel", "b3q02_grabitel2.xml"));
							}
						} else {
							if (a0 == "fail") {
								f_ab_a0_v();
							} else {
								if (a0 == "completed") {
									f_b3_a0_v();
								}
							}
						}
					}
				}
			}
		}
	}

	void f_a0_a0_v(void)
	{
		int L0;
		@GetVariable("b3q02", L0);
		if (L0 != 1000) {
			f_ab_a0_v();
		}
	}

	void f_ab_a0_v(void)
	{
		@SetVariable("b3q02", -1);
		f_bb_a0_v();
	}

	void f_b3_a0_v(void)
	{
		@SetVariable("b3q02", 1000);
		f_bb_a0_v();
	}

	void f_bb_a0_v(void)
	{
		disable OnTrigger;
		f_127_a1_v(tv0);
		f_116_a2_v("warehouse_notkin@door1", false);
		@RemoveActor(f_f8_a0_o());
	}

	void f_cb_a0_v(void)
	{
		int L0;
		tv0->size(L0);
		if (!L0) {
			return;
		}
		tv0->clear();
		f_13c_a0_v();
		f_116_a2_v("warehouse_notkin@door1", false);
		@SetVariable("b3q02Dead", true);
	}

	void f_e0_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_bb_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_a0_a0_v();
	}
}

object f_f8_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_fe_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_104_a4_o(object a0, string a1, string a2, string a3)
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

void f_116_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_127_a1_v(object a0)
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

void f_13c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 231, 2, 519659);
	f_156_a2_b(L0, 227);
}

object f_149_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_156_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_149_a0_o();
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

