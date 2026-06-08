event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;

	void init(void)
	{
		f_62_a1_v(7);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_house_petr") {
			object L0;
			@GetSceneByName(L0, "house_petr");
			tv0 = f_80_a4_o(L0, "pt_d7q03_maria", "NPC_Maria", "d7q03_maria.xml");
			tv1 = f_80_a4_o(L0, "pt_d7q03_aglaja", "NPC_Aglaja", "d7q03_aglaja.xml");
		} else {
			if (a0 == "remove_maria") {
				if (tv0) {
					@RemoveActor(tv0);
				}
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
		@GetVariable("d7q03", L0);
		if (L0 != 1000) {
			f_41_a0_v();
		}
	}

	void f_41_a0_v(void)
	{
		@SetVariable("d7q03", -1);
		f_51_a0_v();
	}

	void f_49_a0_v(void)
	{
		@SetVariable("d7q03", 1000);
		f_51_a0_v();
	}

	void f_51_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@RemoveActor(f_7a_a0_o());
	}

	void f_62_a1_v(int a0)
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

object f_7a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_80_a4_o(object a0, string a1, string a2, string a3)
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

