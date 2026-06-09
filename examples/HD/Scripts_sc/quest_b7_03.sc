event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;

	void init(void)
	{
		f_54_a1_v(7);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_birdmask") {
			object L0;
			@GetSceneByName(L0, "theater");
			tv0 = f_72_a4_o(L0, "pt_b7q03_birdmask", "pers_birdmask", "b7q03_birdmask.xml");
		} else {
			if (a0 == "remove_birdmask") {
				@Trigger(tv0, "cleanup");
			} else {
				if (a0 == "fail") {
					f_38_a0_v();
				} else {
					if (a0 == "completed") {
						f_40_a0_v();
					}
				}
			}
		}
	}

	void f_2d_a0_v(void)
	{
		int L0;
		@GetVariable("b7q03", L0);
		if (L0 != 1000) {
			f_38_a0_v();
		}
	}

	void f_38_a0_v(void)
	{
		@SetVariable("b7q03", -1);
		f_48_a0_v();
	}

	void f_40_a0_v(void)
	{
		@SetVariable("b7q03", 1000);
		f_48_a0_v();
	}

	void f_48_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		@RemoveActor(f_6c_a0_o());
	}

	void f_54_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_48_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_2d_a0_v();
	}
}

object f_6c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_72_a4_o(object a0, string a1, string a2, string a3)
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

