event OnDraw 0;

maintask t0
{
	var string tv0;
	var int tv1;
	var int tv2;

	void init(void)
	{
		string L0;
		int L1;
		int L2;
		int L3;
		int L4;
		tv0 = tv0 + (f_4a_a0_i() + " : ");
		if (f_52_a0_i() < 10) {
			tv0 = tv0 + "0";
		}
		tv0 = tv0 + f_52_a0_i();
		@GetStringByID(L0, 200004);
		tv0 = tv0 + (" " + L0 + " " + f_41_a0_i());
		@GetWindowSize(L1, L2);
		@GetTextWidth(L3, "default", tv0);
		L1 = L1 - L3;
		if (L1 < 0) {
			L1 = 0;
		}
		tv1 = L1;
		@GetFontHeight(L4, "default");
		tv2 = (L2 - L4) / 2;
		if (tv2 < 0) {
			tv2 = 0;
		}
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		@Print("default", tv1, tv2, tv0, 1.0, 1.0, 1.0);
	}
}

int f_41_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_4a_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

int f_52_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (L0 - (int)L0) * 60;
}

