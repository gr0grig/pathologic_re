event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;

	void init(void)
	{
		object L0;
		@SetVariable("d1q02", 1);
		@GetSceneByName(L0, "cot_anna");
		@AddScriptedActor(tv0, "cot_anna_corpse", "actor_disp.bin", L0, [0.0, 0.0, 0.0]);
		f_44_a1_v(1);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "completed") {
			f_30_a0_v();
		}
	}

	void f_1d_a0_v(void)
	{
		int L0;
		@GetVariable("d1q02", L0);
		if (L0 != 1000) {
			f_28_a0_v();
		}
	}

	void f_28_a0_v(void)
	{
		@SetVariable("d1q02", -1);
		f_38_a0_v();
	}

	void f_30_a0_v(void)
	{
		@SetVariable("d1q02", 1000);
		f_38_a0_v();
	}

	void f_38_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		@RemoveActor(f_5c_a0_o());
	}

	void f_44_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_38_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_1d_a0_v();
	}
}

object f_5c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

