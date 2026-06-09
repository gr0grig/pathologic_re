event OnDraw 0;

maintask t0
{
	var string tv0;
	var int tv1;
	var int tv2;

	void init(void)
	{
		@GetWindowSize(tv1, tv2);
		@GetStringByID(tv0, 725);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		int L0;
		@PrintInWidth(L0, "default", 0, -1, tv1, tv0, 0.37254902720451355, 0.37254902720451355, 0.37254902720451355);
	}
}

