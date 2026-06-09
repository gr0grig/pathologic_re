maintask t0
{
	void init(void)
	{
		f_38_a4_b("health", -0.014999999664723873, 0, 1);
		f_7e_a1_v(-0.014999999664723873);
		f_38_a4_b("immunity", 0.30000001192092896, 0, 1);
		f_6a_a1_v(0.30000001192092896);
		f_38_a4_b("disease", 0.0, 0, 1);
		f_74_a1_v(0.0);
		f_38_a4_b("hunger", 0.0, 0, 1);
		f_60_a1_v(0.0);
		f_38_a4_b("tiredness", 0.0, 0, 1);
		f_56_a1_v(0.0);
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

void f_56_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(11, L0);
}

void f_60_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(12, L0);
}

void f_6a_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(13, L0);
}

void f_74_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(14, L0);
}

void f_7e_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

