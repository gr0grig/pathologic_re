maintask t0
{
	void init(void)
	{
		float L0;
		@GetProperty("disease", L0);
		@SetProperty("disease", 0);
		f_d_a1_v(-L0);
	}
}

void f_d_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(14, L0);
}

