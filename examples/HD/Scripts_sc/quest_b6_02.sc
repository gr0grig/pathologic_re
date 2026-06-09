event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		tv2 = f_b9_a0_o();
		f_94_a1_v(6);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_klara") {
			object L0;
			@GetSceneByName(L0, "cot_anna");
			tv0 = f_bf_a4_o(L0, "pt_b6q02_klara", "NPC_Klara", "b6q02_klara.xml");
		} else {
			if (a0 == "init_maze") {
				object L1;
				int L2;
				f_d1_a2_v("house_vlad@door2", false);
				@GetSceneByName(L1, "house_vlad");
				tv1 = f_bf_a4_o(L1, "pt_prorok", "pers_krysa", "b6q02_prorok.xml");
				for (L2 = 1; ; L2++) {
					bool L3;
					Vector L4;
					Vector L5;
					object L6;
					L1->GetLocator("pt_fog" + L2, L3, L4, L5);
					if (!L3) {
						break;
					}
					@AddActorByType(L6, "fog", L1, L4, L5, "fog_stat_indoor.xml");
					tv2->add(L6);
				}
			} else {
				if (a0 == "maze_start") {
					f_e2_a3_v(f_ac_a0_o(), "house_vlad", "pt_maze_start");
				} else {
					if (a0 == "fail") {
						f_69_a0_v();
					} else {
						if (a0 == "completed") {
							f_71_a0_v();
						}
					}
				}
			}
		}
	}

	void f_5e_a0_v(void)
	{
		int L0;
		@GetVariable("b6q02", L0);
		if (L0 != 1000) {
			f_69_a0_v();
		}
	}

	void f_69_a0_v(void)
	{
		@SetVariable("b6q02", -1);
		f_79_a0_v();
	}

	void f_71_a0_v(void)
	{
		@SetVariable("b6q02", 1000);
		f_79_a0_v();
	}

	void f_79_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		f_fa_a2_v(tv2, "cleanup");
		f_d1_a2_v("house_vlad@door2", true);
		@RemoveActor(f_b3_a0_o());
	}

	void f_94_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_79_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_5e_a0_v();
	}
}

object f_ac_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

object f_b3_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_b9_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_bf_a4_o(object a0, string a1, string a2, string a3)
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

void f_d1_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_e2_a3_v(object a0, string a1, string a2)
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

void f_fa_a2_v(object a0, string a1)
{
	if (a0) {
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
}

