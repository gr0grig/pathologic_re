maintask t0
{
	void init(void)
	{
		f_c_a4_b("health", 0.10000000149011612, 0, 1);
		f_2a_a1_v(0.10000000149011612);
	}
}

bool f_c_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_1f_a3_f(L1 + a1, a2, a3));
	return true;
}

float f_1f_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_2a_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(15, L0);
}

