maintask t0
{
	var float tv0;

	void init(void)
	{
		float L0;
		float L1;
		@Trace("dream effect inited");
		@GetGameTime(L0);
		L1 = L0;
		for (; ; ) {
			float L2;
			@sync();
			@GetGameTime(L2);
			if (L2 <= L1) {
				continue;
			}
			f_15_a1_v(L2 - L1);
			L1 = L2;
		}
	}

	void f_15_a1_v(float a0)
	{
		if (f_2c_a0_b()) {
			tv0 = tv0 + a0;
		} else {
			if (tv0 > 4.0) {
				@Trace("dream time");
				tv0 = tv0 - 4.0;
				@sync();
				f_39_a2_b("klara2_positioner", "sleep_end");
			}
		}
	}
}

bool f_2c_a0_b(void)
{
	bool L0;
	bool L1;
	@HasProperty("sleeping", L0);
	if (!L0) {
		return false;
	}
	@GetProperty("sleeping", L1);
	return L1;
}

bool f_39_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

