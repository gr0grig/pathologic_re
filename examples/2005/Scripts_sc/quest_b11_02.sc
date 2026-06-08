event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;

	void init(void)
	{
		object L0;
		tv0 = f_a2_a0_o();
		@GetMainOutdoorScene(L0);
		tv0->add(f_a8_a4_o(L0, "pt_b11q02_doberman1", "pers_doberman", "b11q02_doberman.xml"));
		tv0->add(f_a8_a4_o(L0, "pt_b11q02_doberman2", "pers_doberman", "b11q02_doberman.xml"));
		tv0->add(f_a8_a4_o(L0, "pt_b11q02_doberman3", "pers_doberman", "b11q02_doberman.xml"));
		f_7d_a1_v(11);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "teleport") {
			f_ba_a3_v(f_95_a0_o(), "mnogogrannik_han", "pt_b11q02_teleport");
		} else {
			if (a0 == "fail") {
				f_54_a0_v();
			} else {
				if (a0 == "completed") {
					f_5c_a0_v();
				}
			}
		}
	}

	void f_46_a0_v(void)
	{
		int L0;
		@GetVariable("b11q02", L0);
		if (L0 != 1000) {
			f_54_a0_v();
		}
		f_72_a0_v();
	}

	void f_54_a0_v(void)
	{
		@SetVariable("b11q02", -1);
		f_72_a0_v();
	}

	void f_5c_a0_v(void)
	{
		object L0;
		@SetVariable("b11q02", 1000);
		@GetSceneByName(L0, "cot_kapella");
		@Trigger(L0, "han");
		@GetSceneByName(L0, "mnogogrannik_han");
		@Trigger(L0, "nohan");
		f_72_a0_v();
	}

	void f_72_a0_v(void)
	{
		disable OnTrigger;
		f_d2_a1_v(tv0);
		@RemoveActor(f_9c_a0_o());
	}

	void f_7d_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_72_a0_v();
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

object f_95_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

object f_9c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_a2_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_a8_a4_o(object a0, string a1, string a2, string a3)
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

void f_ba_a3_v(object a0, string a1, string a2)
{
	object L0;
	bool L1;
	Vector L2;
	Vector L3;
	if (!a0) {
		return;
	}
	@GetSceneByName(L0, a1);
	L0->GetLocator(a2, L1, L2, L3);
	if (!L1) {
		@Trace("Teleport location '" + a2 + "' not found in scene '" + a1 + "'");
	} else {
		@Teleport(a0, L0, L2, L3);
	}
}

void f_d2_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				L2->Remove();
			}
		}
		a0->clear();
	}
}

