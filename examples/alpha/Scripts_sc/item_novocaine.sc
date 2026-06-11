maintask t0
{
	void init(void)
	{
		f_47_a4_b("health", 0.10000000149011612, 0, 1);
		f_47_a4_b("tiredness", 0.10000000149011612, 0, 1);
		f_2a_a1_v(10.0);
	}
}

bool f_13_a1_b(float a0)
{
	if (f_5a_a0_b()) {
		f_47_a4_b("health", a0 * 0.10000000149011612, 0, 1);
		f_47_a4_b("tiredness", a0 * -0.10000000149011612, 0, 1);
	}
	return false;
}

void f_2a_a1_v(float a0)
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
			f_13_a1_b(L1 - L2);
			break;
		} else {
			if (f_13_a1_b(L3 - L2)) {
				break;
			}
			L2 = L3;
		}
	}
}

bool f_47_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_67_a3_f(L1 + a1, a2, a3));
	return true;
}

bool f_5a_a0_b(void)
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

float f_67_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

