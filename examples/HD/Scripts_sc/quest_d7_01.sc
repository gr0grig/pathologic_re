event OnGameTime 9;
event OnTrigger 26;
event OnKeyDown 24;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		object L0;
		float L1;
		@GetSceneByName(L0, "warehouse_rubin");
		@Trigger(L0, "norubin");
		@GetGameTime(L1);
		if (L1 >= 151.0) {
			f_e0_a2_v("sobor@door1", false);
		} else {
			f_e0_a2_v("sobor@door1", true);
			@SetTimeEvent(0, 151.0);
		}
		for (; ; ) {
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_e0_a2_v("sobor@door1", false);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_birdmasks") {
			object L0;
			@GetMainOutdoorScene(L0);
			tv0 = f_ce_a4_o(L0, "pt_d7q01_ubirdmask", "pers_birdmask", "d7q01_birdmask1.xml");
			tv1 = f_ce_a4_o(L0, "pt_d7q01_dbirdmask", "pers_birdmask", "d7q01_birdmask2.xml");
			tv2 = f_ce_a4_o(L0, "pt_d7q01_mbirdmask", "pers_birdmask", "d7q01_birdmask3.xml");
		} else {
			if (a0 == "remove_birdmasks") {
				f_9b_a0_v();
			} else {
				if (a0 == "kill_player") {
					f_f1_a2_b("player", "die");
				} else {
					if (a0 == "sobor_teleport") {
						f_fd_a3_v(f_b6_a0_o(), "sobor", "pt_d7q01_birth");
						@sync();
						f_c3_a1_o("quest_d7_01_cutscene");
					} else {
						if (a0 == "cleanup") {
							int L1;
							@GetVariable("d7q01", L1);
							if (L1 != 1000) {
								f_8b_a0_v();
							} else {
								f_a8_a0_v();
							}
						} else {
							if (a0 == "fail") {
								f_8b_a0_v();
							} else {
								if (a0 == "completed") {
									f_93_a0_v();
								}
							}
						}
					}
				}
			}
		}
	}

	void f_8b_a0_v(void)
	{
		@SetVariable("d7q01", -1);
		f_a8_a0_v();
	}

	void f_93_a0_v(void)
	{
		@SetVariable("d7q01", 1000);
		f_a8_a0_v();
	}

	void f_9b_a0_v(void)
	{
		if (tv0) {
			tv0->Remove();
		}
		if (tv1) {
			tv1->Remove();
		}
		if (tv2) {
			tv2->Remove();
		}
	}

	void f_a8_a0_v(void)
	{
		disable OnTrigger;
		f_9b_a0_v();
		@RemoveActor(f_bd_a0_o());
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

object f_b6_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

object f_bd_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_c3_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_ce_a4_o(object a0, string a1, string a2, string a3)
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

void f_e0_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_f1_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_fd_a3_v(object a0, string a1, string a2)
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

