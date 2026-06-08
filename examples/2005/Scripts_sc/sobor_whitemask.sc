maintask t0
{
	void init(void)
	{
		while (true) {
			f_8_a1_v("sobor_idle");
		}
	}
}

void f_8_a1_v(string a0)
{
	bool L0;
	bool L1;
	@HasAnimation(L0, "all", a0);
	if (!L0) {
		return;
	}
	@PlayAnimation("all", a0);
	@WaitForAnimEnd(L1);
	@LockAnimationEnd("all", a0);
}

