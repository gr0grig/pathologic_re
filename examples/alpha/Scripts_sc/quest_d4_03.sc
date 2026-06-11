event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;

	void init(void)
	{
		object L0;
		int L1;
		@SetVariable("d4q03", 1);
		f_f0_a2_v("warehouse_gangster@door1", false);
		f_f0_a2_v("iwarehouse_gangster@door1", true);
		tv0 = f_d2_a0_o();
		L0 = f_d8_a1_o("warehouse_gangster");
		for (L1 = 0; L1 < 7; L1++) {
			tv0->add(f_de_a4_o(L0, "pt_gangster" + (L1 + 1), "pers_grabitel", "d4q03_grabitel.xml"));
		}
		f_b4_a1_v(4);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "scene_load") {
			f_100_a2_v(tv0, "attack");
			@PlaySound("door");
		}
		if (a0 == "gang_attack") {
			f_100_a2_v(tv0, "attack");
		} else {
			if (a0 == "death") {
				int L0;
				int L1;
				tv0->size(L0);
				for (L1 = 0; L1 < L0; L1++) {
					object L2;
					bool L3;
					tv0->get(L2, L1);
					L2->IsDead(L3);
					if (!L3) {
						break;
					}
				}
				if (L1 == L0) {
					@SetVariable("d4q03_alldead", 1);
					f_f0_a2_v("iwarehouse_gangster@door1", false);
					f_f0_a2_v("warehouse_gangster@door1", true);
				}
			} else {
				if (a0 == "completed") {
					f_86_a0_v();
				}
			}
		}
	}

	void f_73_a0_v(void)
	{
		int L0;
		@GetVariable("d4q03", L0);
		if (L0 != 1000) {
			f_7e_a0_v();
		}
	}

	void f_7e_a0_v(void)
	{
		@SetVariable("d4q03", -1);
		f_9c_a0_v();
	}

	void f_86_a0_v(void)
	{
		int L0;
		@GetVariable("d4q03", L0);
		if (L0 != 1000 && L0 != -1) {
			@SetVariable("d4q03", 1000);
			f_9c_a0_v();
		}
	}

	void f_9c_a0_v(void)
	{
		disable OnTrigger;
		f_100_a2_v(tv0, "cleanup");
		f_f0_a2_v("iwarehouse_gangster@door1", false);
		f_f0_a2_v("warehouse_gangster@door1", true);
		tv0->clear();
		@RemoveActor(f_cc_a0_o());
	}

	void f_b4_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_9c_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_73_a0_v();
	}
}

object f_cc_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_d2_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_d8_a1_o(string a0)
{
	object L0;
	@GetSceneByName(L0, a0);
	return L0;
}

object f_de_a4_o(object a0, string a1, string a2, string a3)
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

void f_f0_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->SetProperty("locked", a1);
}

void f_100_a2_v(object a0, string a1)
{
	int L0;
	int L1;
	a0->size(L0);
	for (L1 = 0; L1 < L0; L1++) {
		object L2;
		a0->get(L2, L1);
		if (L2) {
			@Trigger(L2, a1);
		}
	}
}

