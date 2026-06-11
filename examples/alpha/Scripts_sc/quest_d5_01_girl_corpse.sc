event OnUse 0;
event OnUnload 6;
event OnTrigger 26;

maintask t0
{
	var bool tv0;
	var bool tv1;

	void OnUse(object a0)
	{
		bool L0;
		@SetVariable("d5q02KnowNudeIsDead", 1);
		@IsOverrideActive(L0);
		if (!L0) {
			@WorkWithCorpse(a0);
		}
	}

	bool f_c_a0_b(void)
	{
		int L0;
		int L1;
		@GetItemCountOfType(L0, "d5q01_heart");
		if (!L0) {
			return true;
		}
		@GetVariable("d5q01", L1);
		return !f_73_a1_b(L1);
	}

	void init(void)
	{
		@sync();
		if (!f_68_a0_b()) {
			@SetVisibility(true);
			tv1 = true;
		} else {
			tv1 = false;
		}
		f_38_a0_v();
	}

	void OnUnload(void)
	{
		if (!tv1) {
			@SetVisibility(true);
			tv1 = true;
		}
		f_58_a0_v();
	}

	void f_38_a0_v(void)
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
			if (!L0 && f_c_a0_b()) {
				@RemoveActor(f_6d_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void f_58_a0_v(void)
	{
		if (tv0 && f_c_a0_b()) {
			@RemoveActor(f_6d_a0_o());
		}
	}
}

bool f_68_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_6d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_73_a1_b(int a0)
{
	return a0 >= 1 && a0 < 1000;
}

