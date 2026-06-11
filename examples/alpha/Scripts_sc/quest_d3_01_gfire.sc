event OnTrigger 26;
event OnUse 0;
event OnDispose 32;
event OnUnload 6;

maintask t0
{
	var bool tv0;
	var object tv1;
	var object tv2;
	var bool tv3;

	void init(void)
	{
		tv3 = false;
		f_3b_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "put_item") {
			if (!tv3) {
				bool L0;
				@AddItem(L0, "d3q01_blood", 0);
				tv3 = true;
			}
		} else {
			f_68_a1_v(a0);
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!f_ac_a0_b()) {
			return;
		}
		a0->IsOnGround(L0);
		if (L0) {
			bool L1;
			disable OnUse;
			@IsOverrideActive(L1);
			if (!L1) {
				@Barter(a0);
			}
			enable OnUse;
		}
	}

	bool f_2a_a0_b(void)
	{
		int L0;
		int L1;
		@GetItemCountOfType(L0, "d3q01_blood");
		if (!L0) {
			return true;
		}
		@GetVariable("d3q01", L1);
		return !f_b2_a1_b(L1);
	}

	void f_3b_a0_v(void)
	{
		string L0;
		@GetProperty("light", L0);
		@FindActor(tv1, L0);
		tv1->Switch(true);
		@SetVisibility(true);
		f_4e_a0_v();
		f_64_a0_v();
	}

	void f_4e_a0_v(void)
	{
		object L0;
		string L1;
		@GetScene(L0);
		@GetProperty("fire_loc", L1);
		tv2 = f_9a_a4_o(L0, L1, "scripted", "bonfire.xml");
	}

	void OnDispose(void)
	{
		@RemoveActor(tv2);
		tv1->Switch(false);
	}

	void f_64_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void f_68_a1_v(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_2a_a0_b()) {
				@RemoveActor(f_94_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_2a_a0_b()) {
			@RemoveActor(f_94_a0_o());
		}
	}
}

object f_94_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_9a_a4_o(object a0, string a1, string a2, string a3)
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
		@AddActorByType(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

bool f_ac_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

bool f_b2_a1_b(int a0)
{
	return a0 >= 1 && a0 < 1000;
}

