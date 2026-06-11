event OnMessage 200;
event OnDraw 0;

maintask t0
{
	var int tv0;
	var int tv1;
	var int tv2;

	void init(void)
	{
		tv0 = 0;
		@GetWindowSize(tv1, tv2);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		tv0 = a0;
	}

	void OnDraw(void)
	{
		int L0;
		int L1;
		if (!tv0) {
			return;
		}
		L0 = tv1 * tv0 / 100;
		if (L0 != 0) {
			@StretchBlit("white", 0, 0, L0, tv2);
		}
		L1 = 6.0 * (tv0 + 1) / 100.0;
		if (L1) {
			int L2;
			L2 = (L1 - 1) * tv1 / 6.0;
			@Print("default", L2 + 5, 5, L1, 0, 0, 0);
		}
	}
}

