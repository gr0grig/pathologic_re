event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		object L0;
		@SetVariable("d3q02", 1);
		L0 = f_9d_a1_o("r7_house2_01");
		tv0 = f_a3_a4_o(L0, "pt_d3q02_butcher", "pers_butcher", "d3q02_butcher.xml");
		@AddScriptedActor(tv1, "d3q02_corpse", "actor_disp.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(tv2, "d3q02_btrigger", "quest_d3_02_btrigger.bin", L0, [0.0, 0.0, 0.0]);
		f_7f_a1_v(3);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "butcher_trigger") {
			if (tv0) {
				@Trigger(tv0, "trigger");
			}
			f_65_a0_v();
			@SetVariable("d3q02SeeCorpse", 1);
		} else {
			if (a0 == "completed") {
				f_4f_a0_v();
			}
		}
	}

	void f_3c_a0_v(void)
	{
		int L0;
		@GetVariable("d3q02", L0);
		if (L0 != 1000) {
			f_47_a0_v();
		}
	}

	void f_47_a0_v(void)
	{
		@SetVariable("d3q02", -1);
		f_75_a0_v();
	}

	void f_4f_a0_v(void)
	{
		int L0;
		@GetVariable("d3q02", L0);
		if (L0 != 1000 && L0 != -1) {
			@SetVariable("d3q02", 1000);
			f_75_a0_v();
		}
	}

	void f_65_a0_v(void)
	{
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
	}

	void f_75_a0_v(void)
	{
		disable OnTrigger;
		f_65_a0_v();
		@RemoveActor(f_97_a0_o());
	}

	void f_7f_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_75_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_3c_a0_v();
	}
}

object f_97_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_9d_a1_o(string a0)
{
	object L0;
	@GetSceneByName(L0, a0);
	return L0;
}

object f_a3_a4_o(object a0, string a1, string a2, string a3)
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

