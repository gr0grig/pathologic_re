event OnDraw 0;
event OnMessage 200;

maintask t0
{
	var string tv0;
	var string tv1;
	var string tv2;
	var string tv3;
	var bool tv4;
	var bool tv5;
	var bool tv6;
	var int tv7;
	var int tv8;
	var int tv9;
	var int tv10;

	void f_0_a1_v(float a0)
	{
		int L0;
		int L1;
		L1 = a0;
		tv3 = L1;
		@GetTextWidth(L0, "default", tv3);
		tv8 = 305 - L0 / 2;
	}

	void f_b_a1_v(float a0)
	{
		int L0;
		tv0 = a0;
		@GetTextWidth(L0, "default", tv0);
		tv10 = 305 - L0 / 2;
	}

	void f_15_a1_v(float a0)
	{
		int L0;
		int L1;
		int L2;
		@GetResolution(a0, L0, L1);
		tv1 = L0 + "x" + L1;
		@GetTextWidth(L2, "default", tv1);
		tv7 = (332 - L2) / 2;
	}

	void f_23_a1_v(float a0)
	{
		int L0;
		int L1;
		L1 = a0;
		if (L1 == 0) {
			tv2 = f_11d_a1_s(124);
		} else {
			tv2 = L1;
		}
		@GetTextWidth(L0, "default", tv2);
		tv9 = 305 - L0 / 2;
	}

	void f_37_a0_v(void)
	{
		float L0;
		float L1;
		float L2;
		float L3;
		@GetCurrentResolution(L0);
		f_15_a1_v(L0);
		@GetCurrentAnisotropic(L1);
		f_23_a1_v(L1);
		@GetGammaCorrection(L2);
		f_b_a1_v(L2);
		@GetPlayerFOV(L3);
		f_0_a1_v(L3);
	}

	void init(void)
	{
		@SetOwnerDraw(true);
		f_37_a0_v();
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		@Print("default", 15, 12, f_11d_a1_s(110));
		@Print("default", tv7, 29, tv1);
		@Print("default", 15, 62, f_11d_a1_s(112));
		@Print("default", tv9, 62, tv2);
		@Print("default", 15, 112, f_11d_a1_s(103));
		@Print("default", tv10, 112, tv0);
		@Print("default", 15, 162, f_11d_a1_s(113));
		@Print("default", tv8, 162, tv3);
		@Print("default", 15, 223, f_11d_a1_s(114));
		@Print("default", 15, 249, f_11d_a1_s(102));
		@Print("default", 15, 275, f_11d_a1_s(111));
		@Print("default", 15, 300, f_11d_a1_s(115));
		@Print("default", 15, 325, f_11d_a1_s(116));
		@Print("default", 15, 351, f_11d_a1_s(117));
		@Print("default", 15, 375, f_11d_a1_s(118));
		if (tv6 || tv4 || tv5) {
			@PrintInWidth(50, "default", 15, 410, 300, f_11d_a1_s(119), 0.8999999761581421, 0.0, 0.0);
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a2 != null) {
			float L0;
			a2->get(L0, 0);
			if (a0 == 100) {
				f_b_a1_v(L0);
			} else {
				if (a0 == 101) {
					f_15_a1_v(L0);
					a2->get(tv4, 1);
				} else {
					if (a0 == 103) {
						f_23_a1_v(L0);
						a2->get(tv5, 1);
					} else {
						if (a0 == 104) {
							f_0_a1_v(L0);
						} else {
							if (a0 == 112) {
								a2->get(tv6, 1);
							}
						}
					}
				}
			}
		}
	}
}

string f_11d_a1_s(int a0)
{
	string L0;
	@GetStringByID(L0, a0);
	return L0;
}

