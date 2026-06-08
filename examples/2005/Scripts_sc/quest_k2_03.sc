event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;

	void init(void)
	{
		@SetVariable("k2q03", 1);
		f_69_a1_v(2);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_arfist") {
			object L0;
			@GetSceneByName(L0, "r4_house_2_02");
			tv0 = f_87_a4_o(L0, "pt_k2q03_arfist", "pers_wasted_male", "k2q03_arfist.xml");
		} else {
			if (a0 == "place_danko") {
				object L1;
				f_99_a2_v("icot_eva_door", true);
				@GetSceneByName(L1, "r4_house_2_02");
				tv1 = f_87_a4_o(L1, "pt_k2q03_danko", "NPC_Bakalavr", "k2q03_danko.xml");
			} else {
				if (a0 == "completed") {
					f_4b_a0_v();
				}
			}
		}
	}

	void f_38_a0_v(void)
	{
		int L0;
		@GetVariable("k2q03", L0);
		if (L0 != 1000) {
			f_43_a0_v();
		}
	}

	void f_43_a0_v(void)
	{
		@SetVariable("k2q03", -1);
		f_53_a0_v();
	}

	void f_4b_a0_v(void)
	{
		@SetVariable("k2q03", 1000);
		f_53_a0_v();
	}

	void f_53_a0_v(void)
	{
		disable OnTrigger;
		f_99_a2_v("icot_eva_door", false);
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@RemoveActor(f_81_a0_o());
	}

	void f_69_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_53_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_38_a0_v();
	}
}

object f_81_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_87_a4_o(object a0, string a1, string a2, string a3)
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

void f_99_a2_v(string a0, bool a1)
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

