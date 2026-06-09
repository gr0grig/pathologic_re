event OnTrigger 26;

var object g0;

maintask t0
{
	void init(void)
	{
		object L0;
		@GetSceneByName(L0, "cot_eva");
		@Trigger(L0, "nodanko");
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "cleanup") {
			int L0;
			@GetVariable("k3q01", L0);
			if (L0 != 1000) {
				f_2e_a0_v();
			} else {
				f_3e_a0_v();
			}
		} else {
			if (a0 == "fail") {
				f_2e_a0_v();
			} else {
				if (a0 == "completed") {
					f_36_a0_v();
				}
			}
		}
	}

	void f_2e_a0_v(void)
	{
		@SetVariable("k3q01", -1);
		f_3e_a0_v();
	}

	void f_36_a0_v(void)
	{
		@SetVariable("k3q01", 1000);
		f_3e_a0_v();
	}

	void f_3e_a0_v(void)
	{
		object L0;
		disable OnTrigger;
		@GetSceneByName(L0, "cot_eva");
		@Trigger(L0, "danko");
		@RemoveActor(f_4d_a0_o());
	}
}

object f_4d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

