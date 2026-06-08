event OnIntersection 23;
event OnTrigger 26;
event OnUnload 6;

maintask t0
{
	var bool tv0;

	void OnIntersection(object a0)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			disable OnIntersection;
			f_49_a2_b("quest_d3_02", "butcher_trigger");
			@RemoveActor(f_43_a0_o());
		}
	}

	void init(void)
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
			if (!L0 && f_41_a0_b()) {
				@RemoveActor(f_43_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_41_a0_b()) {
			@RemoveActor(f_43_a0_o());
		}
	}
}

bool f_41_a0_b(void)
{
	return true;
}

object f_43_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_49_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

