maintask t0
{
	var bool tv0;

	void init(void)
	{
		f_39_a1_v(288);
	}

	bool f_5_a1_b(float a0)
	{
		if (!f_6c_a0_b()) {
			float L0;
			L0 = -a0 / 36.0;
			if (f_97_a1_b(6)) {
				int L1;
				@GetVariable("k6q01", L1);
				if (L1 != 1000) {
					int L2;
					L0 = L0 * 2.0;
					if (L1 >= 1) {
						L0 = L0 * 3.0;
					}
					if (L1 >= 2) {
						L0 = L0 * 4.0;
					}
					@GetVariable("k6q01ItemsRemoved", L2);
					if (L2) {
						L0 = L0 / 4.0;
					}
				}
			}
			f_59_a4_b("reputation", L0, 0, 1);
			f_84_a1_v(L0);
		}
		return false;
	}

	void f_39_a1_v(float a0)
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
				f_5_a1_b(L1 - L2);
				break;
			} else {
				if (f_5_a1_b(L3 - L2)) {
					break;
				}
				L2 = L3;
			}
		}
	}
}

bool f_59_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_79_a3_f(L1 + a1, a2, a3));
	return true;
}

bool f_6c_a0_b(void)
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

float f_79_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_84_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

int f_8e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_97_a1_b(int a0)
{
	return f_8e_a0_i() == a0;
}

