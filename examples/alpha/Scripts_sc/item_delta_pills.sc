maintask t0
{
	void init(void)
	{
		f_24_a4_b("health", -0.029999999329447746, 0, 1);
		f_24_a4_b("immunity", 0.20000000298023224, 0, 1);
		f_24_a4_b("disease", 0.0, 0, 1);
		f_24_a4_b("hunger", 0.0, 0, 1);
		f_24_a4_b("tiredness", 0.0, 0, 1);
	}
}

bool f_24_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_37_a3_f(L1 + a1, a2, a3));
	return true;
}

float f_37_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

