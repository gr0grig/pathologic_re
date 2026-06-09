event OnUnload 6;
event OnTrigger 26;

maintask t0
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		@sync();
		if (!f_4d_a0_b()) {
			@SetVisibility(true);
			tv1 = true;
		} else {
			tv1 = false;
		}
		f_1b_a0_v();
	}

	void OnUnload(void)
	{
		if (!tv1) {
			@SetVisibility(true);
			tv1 = true;
		}
		f_3b_a0_v();
	}

	void f_1b_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_4b_a0_b()) {
				@RemoveActor(f_52_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void f_3b_a0_v(void)
	{
		if (tv0 && f_4b_a0_b()) {
			@RemoveActor(f_52_a0_o());
		}
	}
}

bool f_4b_a0_b(void)
{
	return true;
}

bool f_4d_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_52_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

