event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;

	void init(void)
	{
		object L0;
		bool L1;
		Vector L2;
		Vector L3;
		@SetVariable("d1q04", 1);
		@GetSceneByName(L0, "r2_house_2_02");
		L0->GetLocator("pt_powder", L1, L2, L3);
		if (!L1) {
			@Trace("Locator doesn't exist for qd1_04_powder");
		} else {
			@AddActorByType(tv0, "scripted_container", L0, L2, L3, "d1q04_item_powder.xml");
		}
		f_4e_a1_v(1);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "fail") {
			f_34_a0_v();
		} else {
			if (a0 == "completed") {
				f_2c_a0_v();
			}
		}
	}

	void f_2c_a0_v(void)
	{
		@SetVariable("d1q04", 1000);
		f_47_a0_v();
	}

	void f_34_a0_v(void)
	{
		@SetVariable("d1q04", -1);
		f_47_a0_v();
	}

	void f_3c_a0_v(void)
	{
		int L0;
		@GetVariable("d1q04", L0);
		if (L0 != 1000) {
			f_34_a0_v();
		}
	}

	void f_47_a0_v(void)
	{
		disable OnTrigger;
		@RemoveActor(f_66_a0_o());
	}

	void f_4e_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_47_a0_v();
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

object f_66_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

