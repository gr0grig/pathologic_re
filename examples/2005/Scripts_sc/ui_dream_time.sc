event OnUpdate 1;
event OnDraw 0;

maintask t0
{
	var string tv0;
	var int tv1;
	var int tv2;

	void init(void)
	{
		int L0;
		int L1;
		int L2;
		@GetWindowSize(L0, L1);
		tv1 = 20;
		@GetFontHeight(L2, "default");
		tv2 = (L1 - L2) / 2;
		if (tv2 < 0) {
			tv2 = 0;
		}
		@SetNeedUpdate(true);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUpdate(float a0)
	{
		string L0;
		tv0 = f_46_a0_i() + " : ";
		if (f_4e_a0_i() < 10) {
			tv0 = tv0 + "0";
		}
		tv0 = tv0 + f_4e_a0_i();
		@GetStringByID(L0, 4);
		tv0 = tv0 + (" " + L0 + " " + f_3d_a0_i());
	}

	void OnDraw(void)
	{
		@Print("default", tv1, tv2, tv0, 1.0, 1.0, 1.0);
	}
}

int f_3d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_46_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

int f_4e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (L0 - (int)L0) * 60;
}

