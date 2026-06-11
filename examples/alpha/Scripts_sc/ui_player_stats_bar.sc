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
	}

	void OnDraw(void)
	{
		int L0;
		int L1;
		int L2;
		@GetWindowSize(L0, L1);
		L2 = L0 * tv0 / 100;
		if (L2 < 4) {
			return;
		}
		L2 = L2 - 4;
		if (L2 != 0) {
			@StretchBlit("middle", 2, 0, L2, 7);
		}
		@Blit("start", 0, 0);
		@Blit("end", 2 + L2, 0);
	}
}

