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
		object L0;
		@SetVariable("k5q02", 1);
		@GetSceneByName(L0, "shouse1_kabak");
		@Trigger(L0, "noandrei");
		tv0 = f_ac_a4_o(L0, "pt_k5q02_patrol1", "pers_patrool", "k5q02_patrol.xml");
		tv1 = f_ac_a4_o(L0, "pt_k5q02_patrol2", "pers_patrool", "k5q02_patrol.xml");
		f_8e_a1_v(5);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_kabak") {
			object L0;
			@GetSceneByName(L0, "shouse1_kabak");
			tv2 = f_ac_a4_o(L0, "pt_k5q02_kabatchik", "pers_dohodyaga", "k5q02_kabatchik.xml");
		} else {
			if (a0 == "place_andrei") {
				object L1;
				@GetSceneByName(L1, "shouse1_kabak");
				@Trigger(L1, "andrei");
				if (tv2) {
					@Trigger(tv2, "cleanup");
				}
				if (tv0) {
					@Trigger(tv0, "cleanup");
				}
				if (tv1) {
					@Trigger(tv1, "cleanup");
				}
			} else {
				if (a0 == "completed") {
					f_68_a0_v();
				}
			}
		}
	}

	void f_55_a0_v(void)
	{
		int L0;
		@GetVariable("k5q02", L0);
		if (L0 != 1000) {
			f_60_a0_v();
		}
	}

	void f_60_a0_v(void)
	{
		@SetVariable("k5q02", -1);
		f_70_a0_v();
	}

	void f_68_a0_v(void)
	{
		@SetVariable("k5q02", 1000);
		f_70_a0_v();
	}

	void f_70_a0_v(void)
	{
		object L0;
		disable OnTrigger;
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@GetSceneByName(L0, "shouse1_kabak");
		@Trigger(L0, "andrei");
		@RemoveActor(f_a6_a0_o());
	}

	void f_8e_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_70_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_55_a0_v();
	}
}

object f_a6_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_ac_a4_o(object a0, string a1, string a2, string a3)
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

