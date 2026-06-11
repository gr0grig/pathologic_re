event OnDispose 32;
event OnTrigger 26;
event OnUnload 6;

maintask t0
{
	var bool tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		string L0;
		@GetProperty("light", L0);
		@FindActor(tv1, L0);
		tv1->Switch(true);
		@SetVisibility(true);
		f_13_a0_v();
		f_29_a0_v();
	}

	void f_13_a0_v(void)
	{
		object L0;
		string L1;
		@GetScene(L0);
		@GetProperty("fire_loc", L1);
		tv2 = f_61_a4_o(L0, L1, "scripted", "bonfire.xml");
	}

	void OnDispose(void)
	{
		@RemoveActor(tv2);
		tv1->Switch(false);
	}

	void f_29_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_59_a0_b()) {
				@RemoveActor(f_5b_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_59_a0_b()) {
			@RemoveActor(f_5b_a0_o());
		}
	}
}

bool f_59_a0_b(void)
{
	return true;
}

object f_5b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_61_a4_o(object a0, string a1, string a2, string a3)
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

