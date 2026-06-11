event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var bool tv4;
	var bool tv5;

	void init(void)
	{
		tv4 = false;
		tv5 = false;
		@SetVariable("d2q02", 1);
		f_122_a1_v(2);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (tv5) {
			if (a0 == "mpatrol_unload") {
				tv1->Remove();
				tv1 = null;
			} else {
				if (a0 == "patrol1_unload") {
					tv2->Remove();
					tv2 = null;
				} else {
					if (a0 == "patrol2_unload") {
						tv3->Remove();
						tv3 = null;
					}
				}
			}
		}
		if (!tv4) {
			if (a0 == "put_patrol") {
				object L0;
				@GetMainOutdoorScene(L0);
				tv0 = f_140_a4_o(L0, "pt_d2q02_driver", "pers_birdmask", "d2q02_driver.xml");
				tv1 = f_140_a4_o(L0, "pt_d2q02_mpatrol", "pers_patrool", "d2q02_mpatrol.xml");
				tv2 = f_140_a4_o(L0, "pt_d2q02_patrol1", "pers_patrool", "d2q02_patrol1.xml");
				tv3 = f_140_a4_o(L0, "pt_d2q02_patrol2", "pers_patrool", "d2q02_patrol2.xml");
			} else {
				if (a0 == "player_attack") {
					object L1;
					tv1->GetActor(L1);
					@Trigger(L1, "kill_player");
					tv2->GetActor(L1);
					@Trigger(L1, "kill_player");
					tv3->GetActor(L1);
					@Trigger(L1, "kill_player");
					tv5 = true;
					f_a2_a0_v();
				} else {
					if (a0 == "completed") {
						f_a2_a0_v();
					}
				}
			}
		} else {
			if (a0 == "driver_unload") {
				f_c4_a1_v(0);
			} else {
				if (a0 == "mpatrol_unload") {
					f_c4_a1_v(1);
				} else {
					if (a0 == "patrol1_unload") {
						f_c4_a1_v(2);
					} else {
						if (a0 == "patrol2_unload") {
							f_c4_a1_v(3);
						}
					}
				}
			}
		}
	}

	void f_8c_a0_v(void)
	{
		int L0;
		@GetVariable("d2q02", L0);
		if (L0 != 1000) {
			f_97_a0_v();
		}
	}

	void f_97_a0_v(void)
	{
		f_18c_a0_v();
		@SetVariable("d2q02", -1);
		f_bb_a0_v();
	}

	void f_a2_a0_v(void)
	{
		int L0;
		@GetVariable("d2q02", L0);
		if (L0 != 1000 && L0 != -1) {
			@SetVariable("d2q02", 1000);
			f_17c_a0_v();
			f_bb_a0_v();
		}
	}

	void f_bb_a0_v(void)
	{
		f_19c_a0_v();
		tv4 = true;
		f_c4_a1_v(-1);
	}

	void f_c4_a1_v(int a0)
	{
		if ((a0 == 0 || f_118_a1_b(tv0)) && (a0 == 1 || f_118_a1_b(tv1)) && (a0 == 2 || f_118_a1_b(tv2)) && (a0 == 3 || f_118_a1_b(tv3))) {
			disable OnTrigger;
			if (tv0) {
				tv0->Remove();
			}
			if (tv1) {
				tv1->Remove();
			}
			if (tv2) {
				tv2->Remove();
			}
			if (tv3) {
				tv3->Remove();
			}
			@RemoveActor(f_13a_a0_o());
		}
	}

	bool f_118_a1_b(object a0)
	{
		object L0;
		if (!a0) {
			return true;
		}
		a0->GetActor(L0);
		return !L0;
	}

	void f_122_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_bb_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_8c_a0_v();
	}
}

object f_13a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_140_a4_o(object a0, string a1, string a2, string a3)
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

object f_152_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_15f_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_152_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SetVariable("player_diary", 1);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

void f_17c_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 61, 2, 12143);
	f_15f_a2_b(L0, 11);
}

void f_18c_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 62, 2, 12144);
	f_15f_a2_b(L0, 11);
}

void f_19c_a0_v(void)
{
}

