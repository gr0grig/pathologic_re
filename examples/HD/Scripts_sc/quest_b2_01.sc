event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_box") {
			object L0;
			@GetSceneByName(L0, "dt_house_1_04");
			@AddActor(tv0, "b2q01_box", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "b2q01_box.xml");
		}
		if (a0 == "place_mladvlad") {
			object L1;
			@GetSceneByName(L1, "burah_home");
			tv1 = f_94_a4_o(L1, "pt_b2q01_mladvlad", "NPC_MladVlad", "b2q01_MladVlad.xml");
			f_a6_a2_v("house_vlad@door1", true);
		}
		if (a0 == "remove_mladvlad") {
			if (tv1) {
				@Trigger(tv1, "cleanup");
			}
			f_a6_a2_v("house_vlad@door1", false);
		} else {
			if (a0 == "cutscene") {
				f_89_a1_o("cs_burah_danko_microscope");
			} else {
				if (a0 == "cutscene_end") {
					@SetVariable("b2q01MicroscopeCS", 1);
				} else {
					if (a0 == "cleanup") {
						int L2;
						@GetVariable("b2q01", L2);
						if (L2 != 1000) {
							f_65_a0_v();
						} else {
							f_72_a0_v();
						}
					} else {
						if (a0 == "fail") {
							f_65_a0_v();
						} else {
							if (a0 == "completed") {
								f_6d_a0_v();
							}
						}
					}
				}
			}
		}
	}

	void f_65_a0_v(void)
	{
		@SetVariable("b2q01", -1);
		f_72_a0_v();
	}

	void f_6d_a0_v(void)
	{
		@SetVariable("b2q01", 1000);
	}

	void f_72_a0_v(void)
	{
		disable OnTrigger;
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		f_a6_a2_v("house_vlad@door1", false);
		@RemoveActor(f_83_a0_o());
	}
}

object f_83_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_89_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_94_a4_o(object a0, string a1, string a2, string a3)
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

void f_a6_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

