event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;

	void init(void)
	{
		@SetVariable("d3q03", 1);
		f_73_a1_v(3);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "boy") {
			object L0;
			@GetMainOutdoorScene(L0);
			tv0 = f_91_a4_o(L0, "pt_d3q03_boy", "pers_littleboy", "d3q03_boy.xml");
		} else {
			if (a0 == "boy_attacked") {
				int L1;
				@GetVariable("d3q03", L1);
				if (f_a3_a1_b(L1)) {
					f_4b_a0_v();
				}
			} else {
				if (a0 == "boy_free") {
					if (tv0) {
						tv0->Remove();
					}
				} else {
					if (a0 == "fail") {
						f_4b_a0_v();
					} else {
						if (a0 == "completed") {
							f_53_a0_v();
						}
					}
				}
			}
		}
	}

	void f_40_a0_v(void)
	{
		int L0;
		@GetVariable("d3q03", L0);
		if (L0 != 1000) {
			f_4b_a0_v();
		}
	}

	void f_4b_a0_v(void)
	{
		@SetVariable("d3q03", -1);
		f_69_a0_v();
	}

	void f_53_a0_v(void)
	{
		int L0;
		@GetVariable("d3q03", L0);
		if (L0 != 1000 && L0 != -1) {
			@SetVariable("d3q03", 1000);
			f_69_a0_v();
		}
	}

	void f_69_a0_v(void)
	{
		if (tv0) {
			tv0->Remove();
		}
		@RemoveActor(f_8b_a0_o());
	}

	void f_73_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_69_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_40_a0_v();
	}
}

object f_8b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_91_a4_o(object a0, string a1, string a2, string a3)
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

bool f_a3_a1_b(int a0)
{
	return a0 >= 1 && a0 < 1000;
}

