event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;

	void init(void)
	{
		object L0;
		@GetMainOutdoorScene(L0);
		f_fd_a4_o(L0, "pt_gatherer_fire2", "scripted", "bonfire.xml");
		@CreateObjectVector(tv0);
		f_cd_a1_v(7);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_kabak") {
			object L0;
			@GetSceneByName(L0, "shouse1_kabak");
			@Trigger(L0, "noandrei");
			tv3 = f_eb_a4_o(L0, "pt_d7q04_wastedmale1", "pers_wasted_male", "d7q04_wastedmale.xml");
			tv4 = f_eb_a4_o(L0, "pt_d7q04_wastedmale2", "pers_wasted_male", "d7q04_wastedmale.xml");
		}
		if (a0 == "init_andrei") {
			object L1;
			@GetMainOutdoorScene(L1);
			tv2 = f_eb_a4_o(L1, "pt_d7q04_andrei", "NPC_Andrei", "d7q04_andrei.xml");
			tv1 = f_eb_a4_o(L1, "pt_d7q04_nude", "pers_nudegirl", "d7q04_nudegirl.xml");
			tv0->add(f_eb_a4_o(L1, "pt_d7q04_enemy1", "pers_morlok", "d7q04_e_morlok.xml"));
			tv0->add(f_eb_a4_o(L1, "pt_d7q04_enemy2", "pers_butcher", "d7q04_e_butcher.xml"));
			tv0->add(f_eb_a4_o(L1, "pt_d7q04_enemy3", "pers_morlok", "d7q04_e_morlok.xml"));
			tv0->add(f_eb_a4_o(L1, "pt_d7q04_enemy4", "pers_butcher", "d7q04_e_butcher.xml"));
			tv0->add(f_eb_a4_o(L1, "pt_d7q04_enemy5", "pers_morlok", "d7q04_e_morlok.xml"));
			tv0->add(f_eb_a4_o(L1, "pt_d7q04_enemy6", "pers_butcher", "d7q04_e_butcher.xml"));
		} else {
			if (a0 == "fail") {
				f_95_a0_v();
			} else {
				if (a0 == "completed") {
					f_9d_a0_v();
				}
			}
		}
	}

	void f_8a_a0_v(void)
	{
		int L0;
		@GetVariable("d7q04", L0);
		if (L0 != 1000) {
			f_95_a0_v();
		}
	}

	void f_95_a0_v(void)
	{
		@SetVariable("d7q04", -1);
		f_a5_a0_v();
	}

	void f_9d_a0_v(void)
	{
		@SetVariable("d7q04", 1000);
		f_a5_a0_v();
	}

	void f_a5_a0_v(void)
	{
		object L0;
		disable OnTrigger;
		f_10f_a2_v(tv0, "cleanup");
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		if (tv3) {
			@Trigger(tv3, "cleanup");
		}
		if (tv4) {
			@Trigger(tv4, "cleanup");
		}
		@GetSceneByName(L0, "shouse1_kabak");
		@Trigger(L0, "andrei");
		@RemoveActor(f_e5_a0_o());
	}

	void f_cd_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_a5_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_8a_a0_v();
	}
}

object f_e5_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_eb_a4_o(object a0, string a1, string a2, string a3)
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

object f_fd_a4_o(object a0, string a1, string a2, string a3)
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

void f_10f_a2_v(object a0, string a1)
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

