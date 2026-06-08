maintask t0
{
	var bool tv0;

	void init(void)
	{
		f_52_a4_b("health", 0.3499999940395355, 0, 1);
		f_87_a1_v(0.3499999940395355);
		f_52_a4_b("tiredness", 0.3499999940395355, 0, 1);
		f_7d_a1_v(0.3499999940395355);
		f_32_a1_v(10.0);
	}

	bool f_1b_a1_b(float a0)
	{
		if (f_65_a0_b()) {
			f_52_a4_b("health", a0 * 0.30000001192092896, 0, 1);
			f_52_a4_b("tiredness", a0 * -0.30000001192092896, 0, 1);
		}
		return false;
	}

	void f_32_a1_v(float a0)
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
			if (tv0) {
				break;
			}
			@GetGameTime(L3);
			if (L3 <= L2) {
				continue;
			}
			if (L3 >= L1) {
				f_1b_a1_b(L1 - L2);
				break;
			} else {
				if (f_1b_a1_b(L3 - L2)) {
					break;
				}
				L2 = L3;
			}
		}
	}
}

bool f_52_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_72_a3_f(L1 + a1, a2, a3));
	return true;
}

bool f_65_a0_b(void)
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

float f_72_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_7d_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(11, L0);
}

void f_87_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(15, L0);
}

