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
		@SetVariable("d3q02", 1);
		L0 = f_e8_a1_o("r7_house2_01");
		tv0 = f_ee_a4_o(L0, "pt_d3q02_butcher1", "pers_butcher", "d3q02_butcher.xml");
		tv1 = f_ee_a4_o(L0, "pt_d3q02_butcher2", "pers_butcher", "d3q02_butcher.xml");
		@AddScriptedActor(tv3, "d3q02_corpse", "actor_disp.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(tv4, "d3q02_btrigger", "quest_d3_02_btrigger.bin", L0, [0.0, 0.0, 0.0]);
		f_100_a2_v("r7_house2_01@door1", false);
		f_100_a2_v("r7_house2_01@door2", false);
		@GetMainOutdoorScene(L0);
		tv2 = f_ee_a4_o(L0, "pt_d3q02_doberman", "pers_doberman", "d3q02_doberman.xml");
		f_ca_a1_v(3);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "teleport") {
			object L0;
			@FindActor(L0, "player");
			if (L0) {
				object L1;
				Vector L2;
				Vector L3;
				bool L4;
				@GetSceneByName(L1, "mnogogrannik_han");
				L1->GetLocator("pt_d3q02_teleport", L4, L2, L3);
				@Teleport(L0, L1, L2, L3);
			}
		} else {
			if (a0 == "butcher_trigger") {
				if (tv0) {
					@Trigger(tv0, "trigger");
				}
				if (tv1) {
					@Trigger(tv1, "trigger");
				}
				f_9c_a0_v();
				@SetVariable("d3q02SeeCorpse", 1);
				f_111_a0_v();
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
		@GetVariable("d3q02", L0);
		if (L0 != 1000) {
			f_7e_a0_v();
		}
	}

	void f_7e_a0_v(void)
	{
		@SetVariable("d3q02", -1);
		f_b1_a0_v();
	}

	void f_86_a0_v(void)
	{
		int L0;
		@GetVariable("d3q02", L0);
		if (L0 != 1000 && L0 != -1) {
			@SetVariable("d3q02", 1000);
			f_b1_a0_v();
		}
	}

	void f_9c_a0_v(void)
	{
		if (tv0) {
			@Trigger(tv0, "cleanup");
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
	}

	void f_b1_a0_v(void)
	{
		disable OnTrigger;
		f_9c_a0_v();
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		f_100_a2_v("r7_house2_01@door1", true);
		f_100_a2_v("r7_house2_01@door2", true);
		@RemoveActor(f_e2_a0_o());
	}

	void f_ca_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_b1_a0_v();
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

object f_e2_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_e8_a1_o(string a0)
{
	object L0;
	@GetSceneByName(L0, a0);
	return L0;
}

object f_ee_a4_o(object a0, string a1, string a2, string a3)
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

void f_100_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_111_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 80, 2, 512162);
	f_12b_a2_b(L0, 26);
}

object f_11e_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_12b_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_11e_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SendWorldWndMessage(7);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

