event OnTrigger 26;
event OnGameTime 9;

var object g0;

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
			@Trace("Locator doesn't exist for d1_04_powder");
		} else {
			@AddActorByType(tv0, "scripted_container", L0, L2, L3, "d1q04_item_powder.xml");
		}
		f_76_a2_v("r2_house_2_02@door1", false);
		f_76_a2_v("r2_house_2_02@door2", false);
		f_58_a1_v(1);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "fail") {
			f_3e_a0_v();
		} else {
			if (a0 == "completed") {
				f_36_a0_v();
			}
		}
	}

	void f_36_a0_v(void)
	{
		@SetVariable("d1q04", 1000);
		f_51_a0_v();
	}

	void f_3e_a0_v(void)
	{
		@SetVariable("d1q04", -1);
		f_51_a0_v();
	}

	void f_46_a0_v(void)
	{
		int L0;
		@GetVariable("d1q04", L0);
		if (L0 != 1000) {
			f_3e_a0_v();
		}
	}

	void f_51_a0_v(void)
	{
		disable OnTrigger;
		@RemoveActor(f_70_a0_o());
	}

	void f_58_a1_v(int a0)
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
		f_46_a0_v();
	}
}

object f_70_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void f_76_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

