event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;

	void init(void)
	{
		@SetVariable("d11q04", 1);
		f_41_a1_v(11);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "fail") {
			f_25_a0_v();
		} else {
			if (a0 == "completed") {
				f_2d_a0_v();
			}
		}
	}

	void f_1a_a0_v(void)
	{
		int L0;
		@GetVariable("d11q04", L0);
		if (L0 != 1000) {
			f_25_a0_v();
		}
	}

	void f_25_a0_v(void)
	{
		@SetVariable("d11q04", -1);
		f_35_a0_v();
	}

	void f_2d_a0_v(void)
	{
		@SetVariable("d11q04", 1000);
		f_35_a0_v();
	}

	void f_35_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		@RemoveActor(f_59_a0_o());
	}

	void f_41_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_35_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_1a_a0_v();
	}
}

object f_59_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

