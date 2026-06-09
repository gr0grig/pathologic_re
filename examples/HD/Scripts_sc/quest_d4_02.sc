event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;

	void init(void)
	{
		@SetVariable("d4q02", 1);
		f_f4_a2_v("s_house7_03_door1", true);
		f_f4_a2_v("s_house7_03_door2", true);
		f_105_a3_v("house7_03@door1", true, false);
		f_105_a3_v("house7_03@door2", true, false);
		f_b9_a1_v(4);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "scene_load") {
			bool L0;
			@GetVariable("d4q02_survived", L0);
			if (!L0) {
				@PlaySound("door_close");
				f_d7_a1_o("quest_d4_02_survival");
			}
		} else {
			if (a0 == "scene_unload") {
				if (tv0) {
					tv0->Remove();
				}
				f_f4_a2_v("s_house7_03_door2", false);
			} else {
				if (a0 == "birdmask") {
					object L1;
					@GetMainOutdoorScene(L1);
					tv0 = f_e2_a4_o(L1, "pt_d4q02_birdmask", "pers_birdmask", "d4q02_birdmask.xml");
				} else {
					if (a0 == "birdmask_talk") {
						f_f4_a2_v("house7_03@door1", false);
					} else {
						if (a0 == "survived") {
							f_f4_a2_v("s_house7_03_door1", false);
							@SetVariable("d4q02_survived", 1);
							@PlaySound("door_open");
							f_119_a0_v();
						} else {
							if (a0 == "completed") {
								f_84_a0_v();
							}
						}
					}
				}
			}
		}
	}

	void f_71_a0_v(void)
	{
		int L0;
		@GetVariable("d4q02", L0);
		if (L0 != 1000) {
			f_7c_a0_v();
		}
	}

	void f_7c_a0_v(void)
	{
		@SetVariable("d4q02", -1);
		f_9a_a0_v();
	}

	void f_84_a0_v(void)
	{
		int L0;
		@GetVariable("d4q02", L0);
		if (L0 != 1000 && L0 != -1) {
			@SetVariable("d4q02", 1000);
			f_9a_a0_v();
		}
	}

	void f_9a_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			tv0->Remove();
		}
		f_f4_a2_v("s_house7_03_door1", false);
		f_f4_a2_v("s_house7_03_door2", false);
		f_f4_a2_v("house7_03@door1", false);
		f_f4_a2_v("house7_03@door2", false);
		@RemoveActor(f_d1_a0_o());
	}

	void f_b9_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_9a_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_71_a0_v();
	}
}

object f_d1_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_d7_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_e2_a4_o(object a0, string a1, string a2, string a3)
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

void f_f4_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_105_a3_v(string a0, bool a1, bool a2)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
		L0->SetProperty("lp", a2);
	}
}

void f_119_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 629, 2, 532893);
	f_133_a2_b(L0, 21);
}

object f_126_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_133_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_126_a0_o();
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

