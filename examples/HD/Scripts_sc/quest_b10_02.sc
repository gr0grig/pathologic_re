event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;

	void init(void)
	{
		f_65_a1_v(10);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_trigger") {
			object L0;
			@GetMainOutdoorScene(L0);
			tv0 = f_83_a3_o(L0, "b10q02_trigger", "b10q02_trigger.xml");
		} else {
			if (a0 == "place_bomb") {
				object L1;
				@GetMainOutdoorScene(L1);
				tv1 = f_83_a3_o(L1, "b10q02_bomb", "b10q02_bomb.xml");
			} else {
				if (a0 == "remove_bomb") {
					@Trigger(tv1, "cleanup");
				} else {
					if (a0 == "fail") {
						f_44_a0_v();
					} else {
						if (a0 == "completed") {
							f_4c_a0_v();
						}
					}
				}
			}
		}
	}

	void f_39_a0_v(void)
	{
		int L0;
		@GetVariable("b10q02", L0);
		if (L0 != 1000) {
			f_44_a0_v();
		}
	}

	void f_44_a0_v(void)
	{
		@SetVariable("b10q02", -1);
		f_54_a0_v();
	}

	void f_4c_a0_v(void)
	{
		@SetVariable("b10q02", 1000);
		f_54_a0_v();
	}

	void f_54_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@RemoveActor(f_7d_a0_o());
	}

	void f_65_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_54_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_39_a0_v();
	}
}

object f_7d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_83_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddActor(L0, a1, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], a2);
	return L0;
}

