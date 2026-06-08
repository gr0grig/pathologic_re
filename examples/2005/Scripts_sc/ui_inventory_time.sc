event OnDraw 0;

maintask t0
{
	var string tv0;
	var int tv1;
	var int tv2;

	void init(void)
	{
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		string L0;
		int L1;
		int L2;
		int L3;
		int L4;
		tv0 = f_45_a0_i() + " : ";
		if (f_4d_a0_i() < 10) {
			tv0 = tv0 + "0";
		}
		tv0 = tv0 + f_4d_a0_i();
		@GetStringByID(L0, 4);
		tv0 = tv0 + (", " + L0 + " " + f_3c_a0_i());
		@GetWindowSize(L1, L2);
		@GetFontHeight(L3, "default");
		tv2 = (L2 - L3) / 2;
		@GetTextWidth(L4, "default", tv0);
		tv1 = (L1 - L4) / 2;
		@Print("default", tv1, tv2, tv0, 1.0, 1.0, 1.0);
	}
}

int f_3c_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_45_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

int f_4d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (L0 - (int)L0) * 60;
}

