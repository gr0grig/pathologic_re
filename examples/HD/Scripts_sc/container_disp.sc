event OnTrigger 26;
event OnUnload 6;
event OnUse 0;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		@SetVisibility(true);
		f_23_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_41_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0) {
			@RemoveActor(f_41_a0_o());
		}
	}

	void f_23_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!a0 || !f_47_a0_b()) {
			return;
		}
		a0->IsOnGround(L0);
		if (L0) {
			bool L1;
			disable OnUse;
			@IsOverrideActive(L1);
			if (!L1) {
				@Barter(a0);
			}
			enable OnUse;
		}
	}
}

object f_41_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_47_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

