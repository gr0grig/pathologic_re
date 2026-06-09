maintask t0
{
	void init(void)
	{
		float L0;
		@GetProperty("disease", L0);
		@SetProperty("disease", L0 * 0.6000000238418579);
		f_4e_a1_v(L0 - L0 * 0.6000000238418579);
		f_26_a4_b("tiredness", 0.15000000596046448, 0, 1);
		f_44_a1_v(0.15000000596046448);
		f_26_a4_b("health", -0.15000000596046448, 0, 1);
		f_58_a1_v(-0.15000000596046448);
	}
}

bool f_26_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_39_a3_f(L1 + a1, a2, a3));
	return true;
}

float f_39_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_44_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(11, L0);
}

void f_4e_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(14, L0);
}

void f_58_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

