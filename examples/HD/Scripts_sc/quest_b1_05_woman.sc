maintask t0
{
	void init(void)
	{
		while (true) {
			f_8_a1_v("cry");
		}
	}
}

void f_8_a1_v(string a0)
{
	bool L0;
	bool L1;
	@WaitForAnimEnd();
	if (!f_1d_a0_b()) {
		return;
	}
	@HasAnimation(L0, "all", a0);
	if (!L0) {
		return;
	}
	@PlayAnimation("all", a0);
	@WaitForAnimEnd(L1);
}

bool f_1d_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

