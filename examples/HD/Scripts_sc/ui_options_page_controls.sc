event OnDraw 0;
event OnMessage 200;

maintask t0
{
	var string tv0;
	var string tv1;
	var string tv2;
	var int tv3;
	var int tv4;
	var int tv5;

	void f_0_a1_v(float a0)
	{
		int L0;
		tv0 = a0;
		@GetTextWidth(L0, "default", tv0);
		tv3 = 305 - L0 / 2;
	}

	void f_a_a1_v(float a0)
	{
		int L0;
		tv1 = a0;
		@GetTextWidth(L0, "default", tv1);
		tv4 = 305 - L0 / 2;
	}

	void f_14_a1_v(float a0)
	{
		int L0;
		tv2 = a0;
		@GetTextWidth(L0, "default", tv2);
		tv5 = 305 - L0 / 2;
	}

	void f_1e_a0_v(void)
	{
		float L0;
		float L1;
		float L2;
		@GetMouseSensivity(L0);
		@GetGamepadSensivity(L1);
		@GetGamepadUISensivity(L2);
		f_0_a1_v(L0);
		f_a_a1_v(L1);
		f_14_a1_v(L2);
	}

	void init(void)
	{
		@SetOwnerDraw(true);
		f_1e_a0_v();
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		@Print("default", 15, 12, f_9c_a1_s(101));
		@Print("default", tv3, 12, tv0);
		@Print("default", 15, 64, f_9c_a1_s(120));
		@Print("default", tv4, 64, tv1);
		@Print("default", 15, 112, f_9c_a1_s(121));
		@Print("default", tv5, 112, tv2);
		@Print("default", 15, 164, f_9c_a1_s(100));
		@Print("default", 15, 186, f_9c_a1_s(122));
		@Print("default", 15, 210, f_9c_a1_s(123));
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a2 != null) {
			float L0;
			a2->get(L0, 0);
			if (a0 == 109) {
				f_0_a1_v(L0);
			} else {
				if (a0 == 110) {
					f_a_a1_v(L0);
				} else {
					if (a0 == 111) {
						f_14_a1_v(L0);
					}
				}
			}
		}
	}
}

string f_9c_a1_s(int a0)
{
	string L0;
	@GetStringByID(L0, a0);
	return L0;
}

