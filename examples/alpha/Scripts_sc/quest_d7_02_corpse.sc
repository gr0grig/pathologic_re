event OnUse 0;
event OnUnload 6;
event OnTrigger 26;

maintask t0
{
	var bool tv0;
	var bool tv1;

	void OnUse(object a0)
	{
		int L0;
		bool L1;
		@SetVariable("d7q02BirdBalahon", 1);
		tv0 = true;
		@GetVariable("d7q02", L0);
		if (L0 == 4) {
			f_74_a2_b("quest_d7_02", "completed");
		}
		@IsOverrideActive(L1);
		if (!L1) {
			@WorkWithCorpse(a0);
		}
	}

	bool f_18_a0_b(void)
	{
		bool L0;
		@GetVariable("d7q02BirdBalahon", L0);
		return L0;
	}

	void init(void)
	{
		@sync();
		if (!f_69_a0_b()) {
			@SetVisibility(true);
			tv1 = true;
		} else {
			tv1 = false;
		}
		f_39_a0_v();
	}

	void OnUnload(void)
	{
		if (!tv1) {
			@SetVisibility(true);
			tv1 = true;
		}
		f_59_a0_v();
	}

	void f_39_a0_v(void)
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
			if (!L0 && f_18_a0_b()) {
				@RemoveActor(f_6e_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void f_59_a0_v(void)
	{
		if (tv0 && f_18_a0_b()) {
			@RemoveActor(f_6e_a0_o());
		}
	}
}

bool f_69_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_6e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_74_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

