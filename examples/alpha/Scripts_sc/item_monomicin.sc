maintask t0
{
	void init(void)
	{
		float L0;
		float L1;
		f_24_a0_b();
		f_6f_a4_b("health", -0.05000000074505806, 0, 1);
		@GetProperty("DiseaseSpeed", L0);
		L1 = L0 * 0.5;
		@SetProperty("DiseaseSpeed", L0 - L1);
		f_1f_a0_v();
		@GetProperty("DiseaseSpeed", L0);
		@SetProperty("DiseaseSpeed", L0 + L1);
	}
}

void f_1f_a0_v(void)
{
	f_52_a1_v(6.0);
}

bool f_24_a0_b(void)
{
	float L0;
	@GetProperty("disease", L0);
	if (L0 >= 0.30000001192092896 && L0 <= 0.6000000238418579) {
		float L1;
		float L2;
		float L3;
		@GetProperty("hunger", L1);
		L2 = 0.25 * (1 + 2.0 * L1);
		@rand(L3);
		if (L3 < L2) {
			@SetProperty("disease", 0);
			return true;
		}
	}
	return false;
}

bool f_47_a1_b(float a0)
{
	f_6f_a4_b("health", a0 * -0.05000000074505806, 0, 1);
	return false;
}

void f_52_a1_v(float a0)
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
			f_47_a1_b(L1 - L2);
			break;
		} else {
			if (f_47_a1_b(L3 - L2)) {
				break;
			}
			L2 = L3;
		}
	}
}

bool f_6f_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_82_a3_f(L1 + a1, a2, a3));
	return true;
}

float f_82_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

