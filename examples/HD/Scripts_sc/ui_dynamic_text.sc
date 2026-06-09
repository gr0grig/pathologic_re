event OnDraw 0;
event OnMessage 200;

maintask t0
{
	var bool tv0;
	var string tv1;
	var int tv2;
	var int tv3;

	void init(void)
	{
		tv0 = false;
		@GetWindowSize(tv2, tv3);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		if (tv0) {
			int L0;
			@PrintInWidth(L0, "default", 0, 0, tv2, tv1, 1.0, 1.0, 1.0);
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a0 != -1) {
			@GetStringByID(tv1, a0);
			tv0 = true;
		} else {
			tv0 = false;
		}
	}
}

