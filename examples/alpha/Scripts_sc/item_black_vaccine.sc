maintask t0
{
	void init(void)
	{
		float L0;
		@GetProperty("immunity", L0);
		if (L0 < 0.6000000238418579) {
			@SetProperty("immunity", 0.6000000238418579);
		}
		f_1b_a1_v(6.0);
	}
}

bool f_10_a1_b(float a0)
{
	f_38_a4_b("immunity", a0 * 0.6000000238418579, 0, 0.6000000238418579);
	return false;
}

void f_1b_a1_v(float a0)
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
			f_10_a1_b(L1 - L2);
			break;
		} else {
			if (f_10_a1_b(L3 - L2)) {
				break;
			}
			L2 = L3;
		}
	}
}

bool f_38_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_4b_a3_f(L1 + a1, a2, a3));
	return true;
}

float f_4b_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

