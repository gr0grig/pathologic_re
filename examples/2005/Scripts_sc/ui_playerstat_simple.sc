event OnGameMessage 201;
event OnUpdate 1;
event OnDraw 0;

maintask t0
{
	var int tv0;
	var float tv1;
	var int tv2;
	var int tv3;

	void init(void)
	{
		disable OnGameMessage;
		@GetWindowSize(tv2, tv3);
		tv0 = -1;
		enable OnGameMessage;
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}

	void OnGameMessage(int a0, object a1)
	{
		if (a0 == 1000) {
			tv0 = 109;
			tv1 = 1.0;
		}
	}

	void OnUpdate(float a0)
	{
		f_32_a1_v(a0);
	}

	void f_1b_a0_v(void)
	{
		string L0;
		float L1;
		if (tv0 == -1) {
			return;
		}
		@GetStringByID(L0, tv0);
		L1 = sin(3.140000104904175 * tv1 / 1.0 / 2.0);
		@Print("help", 10, 10, L0, 1.0, 1.0, 1.0, L1);
	}

	void f_32_a1_v(float a0)
	{
		if (tv0 == -1) {
			return;
		}
		tv1 = tv1 - a0;
		if (tv1 <= 0) {
			tv0 = -1;
		}
	}

	void OnDraw(void)
	{
		f_1b_a0_v();
	}
}

