event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		@SetVariable("k7q03", 1);
		f_6b_a1_v(7);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_family") {
			object L0;
			@GetSceneByName(L0, "burah_home");
			tv0 = f_89_a4_o(L0, "pt_k7q03_father", "pers_unosha", "k7q03_father.xml");
			tv1 = f_89_a4_o(L0, "pt_k7q03_daughter", "pers_littlegirl", "k7q03_daughter.xml");
			tv2 = f_89_a4_o(L0, "pt_k7q03_son", "pers_littleboy", "k7q03_son.xml");
		} else {
			if (a0 == "completed") {
				f_4d_a0_v();
			} else {
				if (a0 == "fail") {
					f_45_a0_v();
				}
			}
		}
	}

	void f_3a_a0_v(void)
	{
		int L0;
		@GetVariable("k7q03", L0);
		if (L0 != 1000) {
			f_45_a0_v();
		}
	}

	void f_45_a0_v(void)
	{
		@SetVariable("k7q03", -1);
		f_55_a0_v();
	}

	void f_4d_a0_v(void)
	{
		@SetVariable("k7q03", 1000);
		f_55_a0_v();
	}

	void f_55_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		@RemoveActor(f_83_a0_o());
	}

	void f_6b_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_55_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_3a_a0_v();
	}
}

object f_83_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_89_a4_o(object a0, string a1, string a2, string a3)
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

