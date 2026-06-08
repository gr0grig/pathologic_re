event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;

	void init(void)
	{
		f_7e_a2_b("quest_b1_01", "remove_cutscene");
		@SetVariable("b1q03", 1);
		f_4e_a1_v(1);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_doberman") {
			object L0;
			@GetMainOutdoorScene(L0);
			tv0 = f_6c_a4_o(L0, "pt_b1q03_doberman", "pers_doberman", "b1q03_doberman.xml");
		} else {
			if (a0 == "doberman_dead") {
				@SetVariable("b1q03_dead", 1);
			} else {
				if (a0 == "cleanup") {
					f_42_a0_v();
				}
			}
		}
	}

	void f_2f_a0_v(void)
	{
		int L0;
		@GetVariable("b1q03", L0);
		if (L0 != 1000) {
			f_3a_a0_v();
		}
	}

	void f_3a_a0_v(void)
	{
		@SetVariable("b1q03", -1);
		f_42_a0_v();
	}

	void f_42_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			tv0->Remove();
			tv0 = null;
		}
		@RemoveActor(f_66_a0_o());
	}

	void f_4e_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_42_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_2f_a0_v();
	}
}

object f_66_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_6c_a4_o(object a0, string a1, string a2, string a3)
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
		a0->AddStationaryActor(L3, L1, L2, a2, a3);
	}
	return L3;
}

bool f_7e_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

