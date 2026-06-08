maintask t0
{
	var bool tv0;

	void init(void)
	{
		for (; ; ) {
			float L0;
			@sync(L0);
			@Trace(-L0 / 4.0);
			f_19_a4_b("health", -L0 / 2.0, 0, 1);
			f_37_a1_v(-L0 / 3.0);
		}
	}
}

bool f_19_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_2c_a3_f(L1 + a1, a2, a3));
	return true;
}

float f_2c_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_37_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(15, L0);
}

