event OnMessage 200;
event OnDraw 0;

maintask t0
{
	var int tv0;

	void init(void)
	{
		tv0 = 0;
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		tv0 = a0;
		if (tv0 > 100) {
			tv0 = 100;
		}
		if (tv0 < 0) {
			tv0 = 0;
		}
	}

	void OnDraw(void)
	{
		string L0;
		int L1;
		int L2;
		int L3;
		int L4;
		if (tv0 <= 33) {
			L0 = "r1";
		} else {
			if (tv0 <= 66) {
				L0 = "r2";
			} else {
				L0 = "r3";
			}
		}
		@GetWindowSize(L1, L2);
		L3 = tv0 + 2;
		if (L3 > 100) {
			L3 = 100;
		}
		L4 = L1 * tv0 / 100;
		@Blit("default", 0, 0);
		@BlitClipped(L0, 0, 0, 0, 0, L4, L2);
	}
}

