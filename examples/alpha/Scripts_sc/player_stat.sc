maintask t0
{
	void init(void)
	{
		for (; ; ) {
			bool L0;
			float L1;
			float L2;
			float L3;
			float L4;
			float L5;
			float L6;
			float L7;
			float L8;
			float L9;
			@Sleep(1.0);
			L0 = f_7a_a0_b();
			if (L0) {
				L1 = 200.0;
			} else {
				L1 = 1.0;
			}
			@GetGameTimeScale(L2);
			L1 = L1 * L2;
			@GetProperty("DiseaseSpeed", L3);
			L3 = 1.0 / L3;
			L4 = L3 * 0.699999988079071;
			f_67_a4_b("hunger", L1 * 0.0416666679084301, 0, 1);
			@GetProperty("hunger", L5);
			f_67_a4_b("immunity", -L1 * 0.0625, 0, 1);
			@GetProperty("immunity", L6);
			@GetProperty("disease", L7);
			L7 = L7 + L1 * (L3 - L6 * L4) * L7;
			if (L7 < 0.009999999776482582) {
				L7 = 0;
			} else {
				if (L7 > 1) {
					L7 = 1;
				}
			}
			@SetProperty("disease", L7);
			f_67_a4_b("tiredness", L1 * (L0 ? -0.125 : 0.0625), 0, 1);
			@GetProperty("tiredness", L8);
			L9 = L7 * 0.1666666716337204;
			if (L5 == 1) {
				L9 = L9 + 0.3333333432674408;
			}
			if (L8 == 1) {
				L9 = L9 + 0.1666666716337204;
			}
			f_67_a4_b("health", -L1 * L9, 0, 1);
		}
	}
}

bool f_67_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_87_a3_f(L1 + a1, a2, a3));
	return true;
}

bool f_7a_a0_b(void)
{
	bool L0;
	bool L1;
	@HasProperty("sleeping", L0);
	if (!L0) {
		return false;
	}
	@GetProperty("sleeping", L1);
	return L1;
}

float f_87_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

