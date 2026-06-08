event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;
	var int tv1;

	void init(void)
	{
		tv1 = 3;
		@CreateObjectVector(tv0);
		f_9f_a2_v("theater@door1", false);
		f_6f_a1_v(8);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "termitnik_load") {
			object L0;
			int L1;
			tv0->clear();
			@GetSceneByName(L0, "termitnik");
			for (L1 = 0; L1 < tv1; L1 = L1 + 1) {
				tv0->add(f_8d_a4_o(L0, "pt_d8q04_morlok" + (L1 + 1), "pers_morlok", "d8q04_morlok.xml"));
			}
		} else {
			if (a0 == "death") {
				tv1 = tv1 + -1;
			} else {
				if (a0 == "attack") {
					f_b0_a2_v(tv0, "attack");
				} else {
					if (a0 == "fail") {
						f_57_a0_v();
					} else {
						if (a0 == "completed") {
							f_5f_a0_v();
						}
					}
				}
			}
		}
	}

	void f_49_a0_v(void)
	{
		int L0;
		@GetVariable("d8q04", L0);
		if (L0 != 1000) {
			f_57_a0_v();
		}
		f_68_a0_v();
	}

	void f_57_a0_v(void)
	{
		@SetVariable("d8q04", -1);
		f_67_a0_v();
	}

	void f_5f_a0_v(void)
	{
		@SetVariable("d8q04", 1000);
		f_67_a0_v();
	}

	void f_67_a0_v(void)
	{
	}

	void f_68_a0_v(void)
	{
		disable OnTrigger;
		@RemoveActor(f_87_a0_o());
	}

	void f_6f_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_68_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_49_a0_v();
	}
}

object f_87_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_8d_a4_o(object a0, string a1, string a2, string a3)
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

void f_9f_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_b0_a2_v(object a0, string a1)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@Trigger(L2, a1);
			}
		}
	}
}

