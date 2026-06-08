event OnGameTime 9;
event OnUnload 6;
event OnUse 0;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		@SetVisibility(true);
		tv0 = false;
		@SetTimeEvent(0, 24);
		f_22_a0_v();
	}

	void OnGameTime(int a0, float a1)
	{
		if (!f_40_a0_b()) {
			@RemoveActor(f_45_a0_o());
		} else {
			tv0 = true;
		}
	}

	void OnUnload(void)
	{
		if (tv0) {
			@RemoveActor(f_45_a0_o());
		}
	}

	void f_22_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!a0 || !f_4b_a0_b()) {
			return;
		}
		a0->IsOnGround(L0);
		if (L0) {
			bool L1;
			disable OnUse;
			@IsOverrideActive(L1);
			if (!L1) {
				@WorkWithCorpse(a0);
			}
			enable OnUse;
		}
	}
}

bool f_40_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_45_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_4b_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

