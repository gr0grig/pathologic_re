event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;

	void init(void)
	{
		f_61_a1_v(5);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_prophet") {
			object L0;
			@GetSceneByName(L0, "house_vlad");
			tv0 = f_86_a4_o(L0, "pt_prorok", "pers_krysa", "b5q02_prorok.xml");
		} else {
			if (a0 == "remove_prophet") {
				@Trigger(tv0, "cleanup");
			} else {
				if (a0 == "maze_start") {
					f_98_a3_v(f_79_a0_o(), "house_vlad", "pt_maze_start");
				} else {
					if (a0 == "fail") {
						f_45_a0_v();
					} else {
						if (a0 == "completed") {
							f_4d_a0_v();
						}
					}
				}
			}
		}
	}

	void f_3a_a0_v(void)
	{
		int L0;
		@GetVariable("b5q02", L0);
		if (L0 != 1000) {
			f_45_a0_v();
		}
	}

	void f_45_a0_v(void)
	{
		@SetVariable("b5q02", -1);
		f_55_a0_v();
	}

	void f_4d_a0_v(void)
	{
		@SetVariable("b5q02", 1000);
		f_55_a0_v();
	}

	void f_55_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		@RemoveActor(f_80_a0_o());
	}

	void f_61_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_55_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_3a_a0_v();
	}
}

object f_79_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

object f_80_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_86_a4_o(object a0, string a1, string a2, string a3)
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

void f_98_a3_v(object a0, string a1, string a2)
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

