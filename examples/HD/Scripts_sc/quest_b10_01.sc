event OnTrigger 26;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		object L0;
		@GetSceneByName(L0, "cot_eva");
		f_10f_a2_v("icot_eva_door", false);
		@Trigger(L0, "danko");
		f_fe_a2_v("boiny@door1", false);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "usable_stone") {
			f_124_a2_b("b10q01_stone", "enable_use");
		} else {
			if (a0 == "place_butchers") {
				object L0;
				object L1;
				@GetMainOutdoorScene(L0);
				tv0 = f_ec_a4_o(L0, "pt_b10q01_butcher1", "pers_butcher", "b10q01_butcher.xml");
				tv1 = f_ec_a4_o(L0, "pt_b10q01_butcher2", "pers_butcher", "b10q01_butcher.xml");
				tv2 = f_ec_a4_o(L0, "pt_b10q01_butcher3", "pers_butcher", "b10q01_butcher.xml");
				L1 = f_178_a0_o();
				L1->AddMark("b9q01BurahGotoButcher1", "pt_b10q01_butcher1", 1, 101000, f_130_a0_f());
				L1->AddMark("b9q01BurahGotoButcher2", "pt_b10q01_butcher2", 1, 101000, f_130_a0_f());
				L1->AddMark("b9q01BurahGotoButcher3", "pt_b10q01_butcher3", 1, 101000, f_130_a0_f());
				f_142_a0_v();
			} else {
				if (a0 == "butcher_dead") {
					int L2;
					@GetVariable("b10q01Butchers", L2);
					@SetVariable("b10q01Butchers", L2 + 1);
					if (L2 + 1 == 3) {
						object L3;
						f_135_a0_v();
						@FindActor(L3, "player");
						@Trigger(L3, "b10q01_stop");
					}
				} else {
					if (a0 == "cleanup") {
						int L4;
						@GetVariable("b10q01", L4);
						if (L4 != 1000) {
							f_9e_a0_v();
						} else {
							f_ae_a0_v();
						}
					} else {
						if (a0 == "fail") {
							f_9e_a0_v();
						} else {
							if (a0 == "completed") {
								f_a6_a0_v();
							}
						}
					}
				}
			}
		}
	}

	void f_9e_a0_v(void)
	{
		@SetVariable("b10q01", -1);
		f_ae_a0_v();
	}

	void f_a6_a0_v(void)
	{
		@SetVariable("b10q01", 1000);
		f_ae_a0_v();
	}

	void f_ae_a0_v(void)
	{
		object L0;
		object L1;
		if (tv0) {
			tv0->Remove();
		}
		if (tv1) {
			tv1->Remove();
		}
		if (tv2) {
			tv2->Remove();
		}
		f_124_a2_b("b10q01_stone", "disable_use");
		L0 = f_178_a0_o();
		L0->FindMark(L1, "b9q01BurahGotoButcher1");
		if (L1) {
			L1->Remove();
		}
		L0->FindMark(L1, "b9q01BurahGotoButcher2");
		if (L1) {
			L1->Remove();
		}
		L0->FindMark(L1, "b9q01BurahGotoButcher3");
		if (L1) {
			L1->Remove();
		}
		f_fe_a2_v("boiny@door1", true);
		@RemoveActor(f_e6_a0_o());
	}
}

object f_e6_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_ec_a4_o(object a0, string a1, string a2, string a3)
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

void f_fe_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_10f_a2_v(string a0, bool a1)
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

bool f_124_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_130_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

void f_135_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 308, 1, 521959);
	f_15c_a2_b(L0, 305);
}

void f_142_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 312, 1, 521963);
	f_15c_a2_b(L0, 305);
}

object f_14f_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_15c_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_14f_a0_o();
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

object f_178_a0_o(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("Can't find main outdoor scene");
		L1 = null;
		return L1;
	}
	L0->GetMap(L1);
	return L1;
}

