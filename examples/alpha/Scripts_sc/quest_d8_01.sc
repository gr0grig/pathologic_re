event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;
	var object tv1;
	var bool tv2;

	void init(void)
	{
		tv2 = true;
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
				tv0 = f_a7_a4_o(L2, "pt_d8q01_toy", "scripted_container", "d8q01_toy.xml");
			} else {
				if (a0 == "boiny_load") {
				} else {
					if (a0 == "termitnik_load") {
						if (tv2) {
							object L3;
							tv2 = false;
							@GetSceneByName(L3, "termitnik");
							tv1 = f_95_a4_o(L3, "pt_d8q01_burah", "NPC_Burah", "d8q01_Burah.xml");
							@SetVariable("d8TermitnikLoad", 1);
						}
					} else {
						if (a0 == "unlock_boiny") {
							float L4;
							@GetGameTime(L4);
							if (L4 >= 193.0) {
								f_67_a0_v();
							} else {
								@SetTimeEvent(0, 193.0);
							}
						} else {
							if (a0 == "fail") {
								f_70_a0_v();
							} else {
								if (a0 == "completed") {
									f_78_a0_v();
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
		f_67_a0_v();
	}

	void f_67_a0_v(void)
	{
		@Trace("Boiny unlocked");
		f_b9_a2_v("boiny@door1", false);
	}

	void f_70_a0_v(void)
	{
		@SetVariable("d8q01", -1);
		f_80_a0_v();
	}

	void f_78_a0_v(void)
	{
		@SetVariable("d8q01", 1000);
		f_80_a0_v();
	}

	void f_80_a0_v(void)
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
		f_b9_a2_v("boiny@door1", true);
	}
}

object f_95_a4_o(object a0, string a1, string a2, string a3)
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

object f_a7_a4_o(object a0, string a1, string a2, string a3)
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

void f_b9_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->SetProperty("locked", a1);
}

