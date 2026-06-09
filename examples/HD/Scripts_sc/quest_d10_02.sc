event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	void init(void)
	{
		@SetVariable("d10q02", 1);
		f_77_a2_v("cot_georg@door1", true);
		f_77_a2_v("cot_maria@door1", false);
		f_77_a2_v("cot_viktor@door1", false);
		f_77_a2_v("warehouse_rubin@door1", false);
		f_59_a1_v(10);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "unlock_georg") {
			f_77_a2_v("cot_georg@door1", false);
		} else {
			if (a0 == "fail") {
				f_42_a0_v();
			} else {
				if (a0 == "completed") {
					f_4a_a0_v();
				}
			}
		}
	}

	void f_37_a0_v(void)
	{
		int L0;
		@GetVariable("d10q02", L0);
		if (L0 != 1000) {
			f_42_a0_v();
		}
	}

	void f_42_a0_v(void)
	{
		@SetVariable("d10q02", -1);
		f_52_a0_v();
	}

	void f_4a_a0_v(void)
	{
		@SetVariable("d10q02", 1000);
		f_52_a0_v();
	}

	void f_52_a0_v(void)
	{
		disable OnTrigger;
		@RemoveActor(f_71_a0_o());
	}

	void f_59_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_52_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_37_a0_v();
	}
}

object f_71_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void f_77_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

