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
		int L3;
		@GetStringByID(tv0, f_2b_a0_i());
		@_strupr(tv0);
		@GetWindowSize(L0, L1);
		@GetTextWidth(L2, "default", tv0);
		L0 = L0 - L2;
		if (L0 < 0) {
			L0 = 0;
		}
		tv1 = L0 / 2;
		@GetFontHeight(L3, "default");
		tv2 = (L1 - L3) / 2;
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

int f_2b_a0_i(void)
{
	int L0;
	@GetVariable("player", L0);
	if (L0 == 0) {
		return 200001;
	} else {
		if (L0 == 1) {
			return 200002;
		}
	}
	return 200003;
}

