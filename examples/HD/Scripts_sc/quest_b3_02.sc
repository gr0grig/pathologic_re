event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var int tv1;

	void init(void)
	{
		@SetVariable("b3q02", 1);
		tv0 = f_e0_a0_o();
		f_c2_a1_v(3);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_grabitel1") {
			object L0;
			f_f8_a2_v("warehouse_notkin@door1", true);
			@GetMainOutdoorScene(L0);
			tv0->add(f_e6_a4_o(L0, "pt_b3q02_grabitel1_1", "pers_grabitel", "b3q02_grabitel1.xml"));
			tv0->add(f_e6_a4_o(L0, "pt_b3q02_grabitel1_2", "pers_grabitel", "b3q02_grabitel1.xml"));
		} else {
			if (a0 == "remove_grabitel") {
				f_109_a1_v(tv0);
			} else {
				if (a0 == "grabitel_attack") {
					int L1;
					int L2;
					tv0->size(L1);
					for (L2 = 0; L2 < L1; L2++) {
						object L3;
						tv0->get(L3, L2);
						if (L3) {
							object L4;
							L3->GetActor(L4);
							if (L4) {
								@Trigger(L4, "attack");
							}
						}
					}
				} else {
					if (a0 == "grabitel_dead") {
						int L5;
						tv0->size(L5);
						tv1 = tv1 + 1;
						if (tv1 == L5) {
							f_ad_a0_v();
						}
					} else {
						if (a0 == "place_grabitel2") {
							object L6;
							int L7;
							@GetMainOutdoorScene(L6);
							for (L7 = 1; L7 <= 4; L7++) {
								tv0->add(f_e6_a4_o(L6, "pt_b3q02_grabitel2_" + L7, "pers_grabitel", "b3q02_grabitel2.xml"));
							}
						} else {
							if (a0 == "fail") {
								f_8d_a0_v();
							} else {
								if (a0 == "completed") {
									f_95_a0_v();
								}
							}
						}
					}
				}
			}
		}
	}

	void f_82_a0_v(void)
	{
		int L0;
		@GetVariable("b3q02", L0);
		if (L0 != 1000) {
			f_8d_a0_v();
		}
	}

	void f_8d_a0_v(void)
	{
		@SetVariable("b3q02", -1);
		f_9d_a0_v();
	}

	void f_95_a0_v(void)
	{
		@SetVariable("b3q02", 1000);
		f_9d_a0_v();
	}

	void f_9d_a0_v(void)
	{
		disable OnTrigger;
		f_109_a1_v(tv0);
		f_f8_a2_v("warehouse_notkin@door1", false);
		@RemoveActor(f_da_a0_o());
	}

	void f_ad_a0_v(void)
	{
		int L0;
		tv0->size(L0);
		if (!L0) {
			return;
		}
		tv0->clear();
		f_11e_a0_v();
		f_f8_a2_v("warehouse_notkin@door1", false);
		@SetVariable("b3q02Dead", true);
	}

	void f_c2_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_9d_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_82_a0_v();
	}
}

object f_da_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_e0_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_e6_a4_o(object a0, string a1, string a2, string a3)
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

void f_f8_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_109_a1_v(object a0)
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

void f_11e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 231, 2, 519659);
	f_138_a2_b(L0, 227);
}

object f_12b_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_138_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_12b_a0_o();
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

