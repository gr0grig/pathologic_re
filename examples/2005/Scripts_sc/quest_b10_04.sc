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
	var object tv5;
	var object tv6;

	void init(void)
	{
		object L0;
		object L1;
		object L2;
		tv0 = f_12c_a0_o();
		@GetMainOutdoorScene(L0);
		tv1 = f_132_a4_o(L0, "pt_b10q04_bull", "pers_avrox", "b10q04_bull.xml");
		@GetScene(L2);
		@GetSceneByName(L1, "termitnik_mat");
		if (L2 != L1) {
			int L3;
			@GetVariable("b8q03MladVladIsVictim", L3);
			if (L3) {
				tv6 = f_132_a4_o(L1, "pt_b10q04_prisoner", "NPC_MladVlad", "b10q04_mladvlad.xml");
			} else {
				tv6 = f_132_a4_o(L1, "pt_b10q04_prisoner", "NPC_BigVlad", "b10q04_bigvlad.xml");
			}
		}
		f_10e_a1_v(10);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_morloks") {
			object L0;
			@GetMainOutdoorScene(L0);
			tv0->add(f_132_a4_o(L0, "pt_b10q04_morlok", "pers_morlok", "b10q04_morlok.xml"));
			tv0->add(f_132_a4_o(L0, "pt_b10q04_morlok_mishka", "pers_morlok", "b10q04_morlok_mishka.xml"));
			tv0->add(f_132_a4_o(L0, "pt_b10q04_morlok_laska", "pers_morlok", "b10q04_morlok_laska.xml"));
			tv0->add(f_132_a4_o(L0, "pt_b10q04_morlok_spi4ka", "pers_morlok", "b10q04_morlok_spi4ka.xml"));
		}
		if (a0 == "init_storojka") {
			object L1;
			@GetSceneByName(L1, "storojka");
			@Trigger(L1, "nolaska");
			tv2 = f_132_a4_o(L1, "pt_b10q04_girl", "pers_girl", "b10q04_girl_laska.xml");
			@GetSceneByName(L1, "uprava_admin");
			tv4 = f_132_a4_o(L1, "pt_b10q04_klara", "NPC_Klara", "b10q04_klara.xml");
			f_144_a2_v("vagon_army@door1", false);
			@GetSceneByName(L1, "vagon_army");
			tv3 = f_132_a4_o(L1, "pt_b10q04_laska", "NPC_Laska", "b10q04_laska.xml");
			tv5 = f_132_a4_o(L1, "pt_b10q04_officer", "pers_soldat", "b10q04_officer.xml");
		} else {
			if (a0 == "restore_laska") {
				object L2;
				if (tv3) {
					@Trigger(tv3, "cleanup");
				}
				@GetSceneByName(L2, "storojka");
				@Trigger(L2, "laska");
			} else {
				if (a0 == "fail") {
					f_c3_a0_v();
				} else {
					if (a0 == "completed") {
						f_cb_a0_v();
					}
				}
			}
		}
	}

	void f_b5_a0_v(void)
	{
		int L0;
		@GetVariable("b10q04", L0);
		if (L0 != 1000) {
			f_c3_a0_v();
		}
		f_f5_a0_v();
	}

	void f_c3_a0_v(void)
	{
		@SetVariable("b10q04", -1);
		f_d3_a0_v();
	}

	void f_cb_a0_v(void)
	{
		@SetVariable("b10q04", 1000);
		f_d3_a0_v();
	}

	void f_d3_a0_v(void)
	{
		object L0;
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		if (tv3) {
			@Trigger(tv3, "cleanup");
		}
		if (tv4) {
			@Trigger(tv4, "cleanup");
		}
		if (tv5) {
			@Trigger(tv5, "cleanup");
		}
		if (tv6) {
			@Trigger(tv6, "cleanup");
		}
		@GetSceneByName(L0, "storojka");
		@Trigger(L0, "laska");
	}

	void f_f5_a0_v(void)
	{
		disable OnTrigger;
		f_d3_a0_v();
		f_155_a2_v(tv0, "cleanup");
		f_144_a2_v("vagon_army@door1", true);
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@RemoveActor(f_126_a0_o());
	}

	void f_10e_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_f5_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_b5_a0_v();
	}
}

object f_126_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_12c_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_132_a4_o(object a0, string a1, string a2, string a3)
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

void f_144_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_155_a2_v(object a0, string a1)
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

