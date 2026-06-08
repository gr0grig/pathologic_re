event OnTrigger 26;
event OnKeyDown 24;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;

	void init(void)
	{
		object L0;
		@GetSceneByName(L0, "storojka");
		tv0 = f_8a_a4_o(L0, "pt_b1q02_agony", "pers_worker", "b1q02_agony.xml");
		f_61_a1_v(1);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "agony_dead") {
			@SetVariable("b1q02_dead", true);
		} else {
			if (a0 == "agony_cured") {
				@RemoveActor(tv0);
				tv0 = null;
				f_7f_a1_o("quest_b1_02_cutscene");
			} else {
				if (a0 == "fail") {
					f_41_a0_v();
				} else {
					if (a0 == "completed") {
						f_49_a0_v();
					}
				}
			}
		}
	}

	void f_36_a0_v(void)
	{
		int L0;
		@GetVariable("b1q02", L0);
		if (L0 != 1000) {
			f_41_a0_v();
		}
	}

	void f_41_a0_v(void)
	{
		@SetVariable("b1q02", -1);
		f_51_a0_v();
	}

	void f_49_a0_v(void)
	{
		@SetVariable("b1q02", 1000);
		f_51_a0_v();
	}

	void f_51_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		@RemoveActor(f_79_a0_o());
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}

	void f_61_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_51_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_36_a0_v();
	}
}

object f_79_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_7f_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_8a_a4_o(object a0, string a1, string a2, string a3)
{
	bool L0;
	Vector L1;
	Vector L2;
	object L3;
	a0->GetLocator(a1, L0, L1, L2);
	if (!L0) {
		@Trace("Locator " + a1 + " doesn't exist");
		L3 = null;
	} else {
		@AddActor(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

