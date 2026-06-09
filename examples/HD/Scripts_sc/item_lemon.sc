maintask t0
{
	void init(void)
	{
		@PlaySound("eat");
		f_3b_a4_b("health", 0.0, 0, 1);
		f_81_a1_v(0.0);
		f_3b_a4_b("immunity", 0.05000000074505806, 0, 1);
		f_6d_a1_v(0.05000000074505806);
		f_3b_a4_b("disease", 0.0, 0, 1);
		f_77_a1_v(0.0);
		f_3b_a4_b("hunger", 0.10000000149011612, 0, 1);
		f_63_a1_v(0.10000000149011612);
		f_3b_a4_b("tiredness", -0.10000000149011612, 0, 1);
		f_59_a1_v(-0.10000000149011612);
	}
}

bool f_3b_a4_b(string a0, float a1, float a2, float a3)
{
	bool L0;
	float L1;
	@HasProperty(a0, L0);
	if (!L0) {
		return false;
	}
	@GetProperty(a0, L1);
	@SetProperty(a0, f_4e_a3_f(L1 + a1, a2, a3));
	return true;
}

float f_4e_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_59_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(11, L0);
}

void f_63_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(12, L0);
}

void f_6d_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(13, L0);
}

void f_77_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(14, L0);
}

void f_81_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

