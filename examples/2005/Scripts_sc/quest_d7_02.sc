event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;

	void init(void)
	{
		@SetVariable("d7q02", 1);
		f_5c_a1_v(7);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "completed") {
			f_3a_a0_v();
		} else {
			if (a0 == "fail") {
				f_32_a0_v();
			} else {
				if (a0 == "place_corpse") {
					object L0;
					@GetMainOutdoorScene(L0);
					@AddActor(tv0, "d7q02_corpse", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d7q02_corpse.xml");
				}
			}
		}
	}

	void f_27_a0_v(void)
	{
		int L0;
		@GetVariable("d7q02", L0);
		if (L0 != 1000) {
			f_32_a0_v();
		}
	}

	void f_32_a0_v(void)
	{
		@SetVariable("d7q02", -1);
		f_50_a0_v();
	}

	void f_3a_a0_v(void)
	{
		int L0;
		@GetVariable("d7q02", L0);
		if (L0 != 1000 && L0 != -1) {
			@SetVariable("d7q02", 1000);
			f_50_a0_v();
		}
	}

	void f_50_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		@RemoveActor(f_74_a0_o());
	}

	void f_5c_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_50_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_27_a0_v();
	}
}

object f_74_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

