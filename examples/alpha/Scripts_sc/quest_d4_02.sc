event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;

	void init(void)
	{
		@SetVariable("d4q02", 1);
		f_ef_a2_v("s_house7_03_door1", true);
		f_ef_a2_v("s_house7_03_door2", true);
		f_ef_a2_v("house7_03@door1", true);
		f_ef_a2_v("house7_03@door2", true);
		f_b4_a1_v(4);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "scene_load") {
			bool L0;
			@GetVariable("d4q02_survived", L0);
			if (!L0) {
				@PlaySound("door_close");
				f_d2_a1_o("quest_d4_02_survival");
			}
		} else {
			if (a0 == "scene_unload") {
				if (tv0) {
					tv0->Remove();
				}
				f_ef_a2_v("s_house7_03_door2", false);
			} else {
				if (a0 == "birdmask") {
					object L1;
					@GetMainOutdoorScene(L1);
					tv0 = f_dd_a4_o(L1, "pt_d4q02_birdmask", "pers_birdmask", "d4q02_birdmask.xml");
				} else {
					if (a0 == "birdmask_talk") {
						f_ef_a2_v("house7_03@door1", false);
					} else {
						if (a0 == "survived") {
							f_ef_a2_v("s_house7_03_door1", false);
							@SetVariable("d4q02_survived", 1);
							@PlaySound("door_open");
						} else {
							if (a0 == "completed") {
								f_7f_a0_v();
							}
						}
					}
				}
			}
		}
	}

	void f_6c_a0_v(void)
	{
		int L0;
		@GetVariable("d4q02", L0);
		if (L0 != 1000) {
			f_77_a0_v();
		}
	}

	void f_77_a0_v(void)
	{
		@SetVariable("d4q02", -1);
		f_95_a0_v();
	}

	void f_7f_a0_v(void)
	{
		int L0;
		@GetVariable("d4q02", L0);
		if (L0 != 1000 && L0 != -1) {
			@SetVariable("d4q02", 1000);
			f_95_a0_v();
		}
	}

	void f_95_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			tv0->Remove();
		}
		f_ef_a2_v("s_house7_03_door1", false);
		f_ef_a2_v("s_house7_03_door2", false);
		f_ef_a2_v("house7_03@door1", false);
		f_ef_a2_v("house7_03@door2", false);
		@RemoveActor(f_cc_a0_o());
	}

	void f_b4_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_95_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_6c_a0_v();
	}
}

object f_cc_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_d2_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_dd_a4_o(object a0, string a1, string a2, string a3)
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

void f_ef_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->SetProperty("locked", a1);
}

