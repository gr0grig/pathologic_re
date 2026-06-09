maintask t0
{
	void init(void)
	{
		for (; ; ) {
			bool L0;
			float L1;
			float L2;
			int L3;
			float L4;
			float L5;
			float L6;
			float L7;
			float L8;
			@Sleep(1.0);
			L0 = f_94_a0_b();
			if (L0) {
				L1 = 200.0;
			} else {
				L1 = 1.0;
			}
			@GetGameTimeScale(L2);
			L1 = L1 * L2;
			@GetProperty("DiseaseSpeed", L3);
			f_81_a4_b("hunger", L1 * 0.0416666679084301, 0, 1);
			@GetProperty("hunger", L4);
			@GetProperty("immunity", L5);
			if (L5 < 0.5) {
				L5 = L5 + 0.125 * L1;
				if (L5 > 0.5) {
					L5 = 0.5;
				}
				@SetProperty("immunity", L5);
			} else {
				if (L5 > 0.5) {
					L5 = L5 - 0.0625 * L1;
					if (L5 < 0) {
						L5 = 0;
					}
					@SetProperty("immunity", L5);
				}
			}
			@GetProperty("disease", L6);
			if (L6 < 0.0010000000474974513) {
				L6 = 0;
			} else {
				if (L6 < 0.3333333432674408) {
					L6 = L6 + 0.0069444444961845875 * L1 / L3;
				} else {
					L6 = L6 + 0.0416666679084301 * L1 / L3;
				}
				if (L6 > 1) {
					L6 = 1;
				}
			}
			@SetProperty("disease", L6);
			f_81_a4_b("tiredness", L1 * (L0 ? -0.125 : 0.0625), 0, 1);
			@GetProperty("tiredness", L7);
			L8 = 0;
			if (L6 >= 0.0010000000474974513) {
				L8 = L8 + L6 * 0.1666666716337204;
			}
			if (L4 == 1) {
				L8 = L8 + 0.3333333432674408;
			}
			if (L7 == 1) {
				L8 = L8 + 0.1666666716337204;
			}
			f_81_a4_b("health", -L1 * L8, 0, 1);
		}
	}
}

bool f_81_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_a1_a3_f(L1 + a1, a2, a3));
	return true;
}

bool f_94_a0_b(void)
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

float f_a1_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

