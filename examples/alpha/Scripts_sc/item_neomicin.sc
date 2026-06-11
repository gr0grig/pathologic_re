maintask t0
{
	void init(void)
	{
		if (!f_17_a0_b()) {
			float L0;
			@GetProperty("disease", L0);
			@SetProperty("disease", L0 * 0.5);
		}
		f_12_a0_v();
	}
}

void f_12_a0_v(void)
{
	f_45_a1_v(12.0);
}

bool f_17_a0_b(void)
{
	float L0;
	@GetProperty("disease", L0);
	if (L0 >= 0.0 && L0 <= 0.4000000059604645) {
		float L1;
		float L2;
		float L3;
		@GetProperty("hunger", L1);
		L2 = 0.15000000596046448 * (1 + 2.0 * L1);
		@rand(L3);
		if (L3 < L2) {
			@SetProperty("disease", 0);
			return true;
		}
	}
	return false;
}

bool f_3a_a1_b(float a0)
{
	f_62_a4_b("health", a0 * -0.009999999776482582, 0, 1);
	return false;
}

void f_45_a1_v(float a0)
{
	float L0;
	float L1;
	float L2;
	@GetGameTime(L0);
	L1 = L0 + a0;
	L2 = L0;
	for (; ; ) {
		float L3;
		@sync();
		@GetGameTime(L3);
		if (L3 <= L2) {
			continue;
		}
		if (L3 >= L1) {
			f_3a_a1_b(L1 - L2);
			break;
		} else {
			if (f_3a_a1_b(L3 - L2)) {
				break;
			}
			L2 = L3;
		}
	}
}

bool f_62_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_75_a3_f(L1 + a1, a2, a3));
	return true;
}

float f_75_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

