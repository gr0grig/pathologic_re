event OnTrigger 26;
event OnGameTime 9;
event OnKeyDown 24;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var bool tv2;

	void f_0_a0_v(void)
	{
		int L0;
		@GetVariable("d8q01MladVladIsVictim", L0);
		if (L0 != 0) {
			f_f4_a3_b("volonteers_danko", "kill", "mladvlad");
		} else {
			f_f4_a3_b("volonteers_danko", "kill", "bigvlad");
		}
	}

	void init(void)
	{
		f_c6_a1_o("quest_d8_03");
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "block_well") {
			object L0;
			object L1;
			@GetSceneByName(L0, "house_vlad");
			@AddActor(L1, "d8q01_well_block", L0, [0.0, 0.0, 0.0]);
		} else {
			if (a0 == "place_toy") {
				object L2;
				@GetSceneByName(L2, "r4_house_2_02");
				tv0 = f_d1_a4_o(L2, "pt_d8q01_toy", "scripted_container", "d8q01_toy.xml");
			} else {
				if (a0 == "boiny_load") {
					if (!tv2) {
						tv2 = true;
						f_c6_a1_o("quest_d8_01_cutscene");
					}
				} else {
					if (a0 == "unlock_boiny") {
						float L3;
						f_0_a0_v();
						@GetGameTime(L3);
						if (L3 >= 191.0) {
							f_83_a0_v();
						} else {
							@SetTimeEvent(0, 191.0);
						}
					} else {
						if (a0 == "cleanup") {
							int L4;
							@GetVariable("d8q01", L4);
							if (L4 != 1000) {
								f_8f_a0_v();
							} else {
								f_9f_a0_v();
							}
						} else {
							if (a0 == "fail") {
								f_8f_a0_v();
							} else {
								if (a0 == "completed") {
									f_97_a0_v();
								}
							}
						}
					}
				}
			}
		}
	}

	void OnGameTime(int a0, float a1)
	{
		@ReleaseTimeEvent(0);
		f_83_a0_v();
	}

	void f_83_a0_v(void)
	{
		@Trace("Boiny unlocked");
		f_e3_a2_v("boiny@door1", false);
		f_100_a0_v();
	}

	void f_8f_a0_v(void)
	{
		@SetVariable("d8q01", -1);
		f_9f_a0_v();
	}

	void f_97_a0_v(void)
	{
		@SetVariable("d8q01", 1000);
		f_9f_a0_v();
	}

	void f_9f_a0_v(void)
	{
		disable OnTrigger;
		disable OnGameTime;
		@ReleaseTimeEvent(0);
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		f_e3_a2_v("boiny@door1", true);
		f_0_a0_v();
		@RemoveActor(f_c0_a0_o());
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

object f_c0_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_c6_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_d1_a4_o(object a0, string a1, string a2, string a3)
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

void f_e3_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_f4_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

void f_100_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 716, 1, 536363);
	f_11a_a2_b(L0, 175);
}

object f_10d_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_11a_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_10d_a0_o();
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

