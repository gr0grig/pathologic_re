event OnDraw 0;
event OnMessage 200;
event OnUpdate 1;

maintask t0
{
	var float tv0;
	var float tv1;
	var float tv2;
	var int tv3;
	var int tv4;
	var int tv5;
	var int tv6;
	var bool tv7;

	void init(void)
	{
		@GetWindowSize(tv5, tv6);
		tv7 = true;
		tv4 = 0;
		tv3 = 0;
		while (true) {
			bool L0;
			@IsImageLoaded(L0, tv4 + 1);
			if (!L0) {
				break;
			}
			tv4 = tv4 + 1;
		}
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		if (!tv7) {
			@StretchBlit(tv3 + 1, 0, 0, tv5, tv6, tv2);
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "intro") {
			f_4b_a0_v();
		}
	}

	void OnUpdate(float a0)
	{
		if (tv7) {
			return;
		}
		tv0 = tv0 - a0;
		if (tv0 > 0) {
			return;
		}
		tv1 = tv1 - a0;
		if (tv1 < 0) {
			tv2 = 1 + tv1;
			if (tv1 < -1) {
				@SendMessage(0, "intro");
				tv7 = true;
				return;
			}
		} else {
			tv2 = -tv0;
		}
		if (tv2 > 1) {
			tv2 = 1;
		}
	}

	void f_4b_a0_v(void)
	{
		tv7 = false;
		tv0 = 1;
		@rand(tv1);
		tv1 = 6 + tv1 * 3;
		tv2 = 0;
		tv3 = tv3 + 1;
		tv3 = tv3 % tv4;
	}
}

