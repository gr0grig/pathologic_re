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
		if (f_34_a0_i() == 1) {
			L0 = 713;
		} else {
			if (f_34_a0_i() == 0) {
				L0 = 714;
			} else {
				if (f_34_a0_i() == 2) {
					L0 = 715;
				}
			}
		}
		@GetStringByID(tv0, L0);
		@GetWindowSize(L1, L2);
		tv1 = 2;
		@GetFontHeight(L3, "default");
		tv2 = (L2 - L3) / 2;
		if (tv2 < 0) {
			tv2 = 0;
		}
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		@Print("default", tv1, tv2, tv0, 0.6549019813537598, 0.6549019813537598, 0.6549019813537598);
	}
}

int f_34_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

