event OnDraw 0;
event OnMessage 200;

maintask t0
{
	var string tv0;
	var string tv1;
	var string tv2;
	var string tv3;
	var int tv4;
	var int tv5;
	var int tv6;
	var int tv7;

	void f_0_a1_v(float a0)
	{
		int L0;
		int L1;
		L1 = a0 * 100;
		if (L1 == 0) {
			tv0 = f_d6_a1_s(124);
		} else {
			tv0 = L1 + "%";
		}
		@GetTextWidth(L0, "default", tv0);
		tv4 = 305 - L0 / 2;
	}

	void f_16_a1_v(float a0)
	{
		int L0;
		int L1;
		L1 = a0 * 100;
		if (L1 == 0) {
			tv1 = f_d6_a1_s(124);
		} else {
			tv1 = L1 + "%";
		}
		@GetTextWidth(L0, "default", tv1);
		tv5 = 305 - L0 / 2;
	}

	void f_2c_a1_v(float a0)
	{
		int L0;
		int L1;
		L1 = a0 * 100;
		if (L1 == 0) {
			tv2 = f_d6_a1_s(124);
		} else {
			tv2 = L1 + "%";
		}
		@GetTextWidth(L0, "default", tv2);
		tv6 = 305 - L0 / 2;
	}

	void f_42_a1_v(float a0)
	{
		int L0;
		int L1;
		L1 = a0 * 100;
		if (L1 == 0) {
			tv3 = f_d6_a1_s(124);
		} else {
			tv3 = L1 + "%";
		}
		@GetTextWidth(L0, "default", tv3);
		tv7 = 305 - L0 / 2;
	}

	void f_58_a0_v(void)
	{
		float L0;
		float L1;
		float L2;
		float L3;
		@GetVolMaster(L0);
		@GetVolMusic(L1);
		@GetVolVoice(L2);
		@GetVolSounds(L3);
		f_0_a1_v(L0);
		f_16_a1_v(L1);
		f_2c_a1_v(L2);
		f_42_a1_v(L3);
	}

	void init(void)
	{
		@SetOwnerDraw(true);
		f_58_a0_v();
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		@Print("default", 15, 15, f_d6_a1_s(104));
		@Print("default", tv4, 15, tv0);
		@Print("default", 15, 98, f_d6_a1_s(105));
		@Print("default", tv5, 98, tv1);
		@Print("default", 16, 182, f_d6_a1_s(106));
		@Print("default", tv6, 182, tv2);
		@Print("default", 16, 265, f_d6_a1_s(107));
		@Print("default", tv7, 265, tv3);
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a2 != null) {
			float L0;
			a2->get(L0, 0);
			if (a0 == 105) {
				f_0_a1_v(L0);
			} else {
				if (a0 == 106) {
					f_16_a1_v(L0);
				} else {
					if (a0 == 107) {
						f_2c_a1_v(L0);
					} else {
						if (a0 == 108) {
							f_42_a1_v(L0);
						}
					}
				}
			}
		}
	}
}

string f_d6_a1_s(int a0)
{
	string L0;
	@GetStringByID(L0, a0);
	return L0;
}

