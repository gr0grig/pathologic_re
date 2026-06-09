maintask t0
{
	void init(void)
	{
		float L0;
		float L1;
		@GetProperty("health", L0);
		if (L0 > 0.05000000074505806) {
			@SetProperty("health", 0.05000000074505806);
			f_26_a1_v(0.05000000074505806 - L0);
		}
		@GetProperty("disease", L1);
		@SetProperty("disease", 0);
		f_1c_a1_v(-L1);
	}
}

void f_1c_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(14, L0);
}

void f_26_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

