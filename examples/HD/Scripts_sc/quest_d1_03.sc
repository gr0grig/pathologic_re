event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;

	void init(void)
	{
		object L0;
		@SetVariable("d1q03", 1);
		@GetSceneByName(L0, "ospina_kabak");
		tv0 = f_af_a4_o(L0, "pt_d1q04_butcher", "pers_butcher", "d1q03_butcher.xml");
		f_c1_a2_v("ospina_kabak@door1", true);
		f_91_a1_v(1);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "unlock_butcher") {
			f_c1_a2_v("ospina_kabak@door1", false);
		} else {
			if (a0 == "butcher_fail") {
				f_106_a0_v();
				f_6d_a0_v();
			} else {
				if (a0 == "butcher_battle") {
					@SetVariable("d1q03", 2);
				} else {
					if (a0 == "butcher_death") {
						if (f_13c_a0_b()) {
							f_df_a0_v();
							f_6d_a0_v();
						} else {
							f_ec_a0_v();
							f_65_a0_v();
						}
					} else {
						if (a0 == "eva_finish") {
							@RemoveActor(tv0);
							if (f_13c_a0_b()) {
								f_d2_a0_v();
								f_65_a0_v();
							} else {
								f_f9_a0_v();
								f_6d_a0_v();
							}
						}
					}
				}
			}
		}
	}

	void f_65_a0_v(void)
	{
		@SetVariable("d1q03", 1000);
		f_80_a0_v();
	}

	void f_6d_a0_v(void)
	{
		@SetVariable("d1q03", -1);
		f_80_a0_v();
	}

	void f_75_a0_v(void)
	{
		int L0;
		@GetVariable("d1q03", L0);
		if (L0 != 1000) {
			f_6d_a0_v();
		}
	}

	void f_80_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		f_c1_a2_v("ospina_kabak@door1", false);
		@RemoveActor(f_a9_a0_o());
	}

	void f_91_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_80_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_75_a0_v();
	}
}

object f_a9_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_af_a4_o(object a0, string a1, string a2, string a3)
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

void f_c1_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_d2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 38, 2, 512120);
	f_120_a2_b(L0, 37);
}

void f_df_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 39, 2, 512121);
	f_120_a2_b(L0, 37);
}

void f_ec_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 40, 2, 512122);
	f_120_a2_b(L0, 37);
}

void f_f9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 41, 2, 512123);
	f_120_a2_b(L0, 37);
}

void f_106_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 42, 2, 512124);
	f_120_a2_b(L0, 37);
}

object f_113_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_120_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_113_a0_o();
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

bool f_13c_a0_b(void)
{
	int L0;
	@GetVariable("d1q03IsKapella", L0);
	return L0 != 0;
}

