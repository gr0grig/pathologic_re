event OnUpdate 1;
event OnDraw 0;

maintask t0
{
	var string tv0;
	var bool tv1;
	var bool tv2;
	var float tv3;
	var int tv4;
	var int tv5;
	var int tv6;
	var int tv7;

	void init(void)
	{
		int L0;
		int L1;
		int L2;
		string L3;
		int L4;
		L1 = f_68_a0_i();
		@GetVariable("c_iWM_RealDayChange", L2);
		L2 = L2 + -1;
		tv3 = 1.0;
		if (L1 == 0) {
			L3 = "d" + L2 + "q01";
		} else {
			if (L1 == 1) {
				L3 = "b" + L2 + "q01";
			} else {
				L3 = "k" + L2 + "q01";
			}
		}
		@GetVariable(L3, L4);
		if (L4 == 1000) {
			tv1 = true;
			tv0 = "alive";
			tv7 = 351;
		} else {
			tv1 = false;
			tv0 = "dead";
			tv7 = 350;
		}
		@GetWindowSize(tv4, tv5);
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}

	void OnUpdate(float a0)
	{
		if (!tv2) {
			tv2 = true;
			@PlaySound(tv0);
			return;
		} else {
			if (f_5c_a0_b()) {
				return;
			}
		}
		tv3 = tv3 - a0;
		if (tv3 <= 0) {
			@DestroyWindow();
		}
	}

	void OnDraw(void)
	{
		string L0;
		float L1;
		int L2;
		if (tv3 <= 0) {
			return;
		}
		@GetStringByID(L0, tv7);
		L1 = tv3 / 1.0;
		@PrintInWidth(L2, "default", 0, 0, tv4, L0, 1.0, 1.0, 1.0, L1);
	}

	bool f_5c_a0_b(void)
	{
		bool L0;
		if (tv1) {
			@IsSoundPlaying(L0, "alive");
		} else {
			@IsSoundPlaying(L0, "dead");
		}
		return L0;
	}
}

int f_68_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

