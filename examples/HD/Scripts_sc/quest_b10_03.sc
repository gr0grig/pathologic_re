event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;

	void init(void)
	{
		f_b4_a2_v("vagon_mishka@door1", false);
		f_96_a1_v(10);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_doll") {
			object L0;
			bool L1;
			Vector L2;
			Vector L3;
			int L4;
			@GetMainOutdoorScene(L0);
			for (L4 = 0; ; L4++) {
				string L5;
				object L6;
				L0->GetLocator("pt_b10q03_plant" + (L4 + 1), L1, L2, L3);
				if (!L1) {
					break;
				}
				@RandOneOf(L5, 1, 1, 1, 2, 2, "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
				L0->AddStationaryActorByType(L6, L2, L3, "scripted", "item_" + L5 + "_stat.xml");
				@Trace("New b10q03 plant: \"" + L5 + "\" at location #" + (L4 + 1));
			}
			@Trace("Total b10q03 plants: " + L4);
			L0->GetLocator("pt_b10q03_toy", L1, L2, L3);
			if (L1) {
				L0->AddStationaryActorByType(tv0, L2, L3, "scripted", "b10q03_toy_burah.xml");
			} else {
				@Trace("pt_b10q03_toy locator not found");
			}
		} else {
			if (a0 == "place_blood") {
				object L7;
				object L8;
				@GetMainOutdoorScene(L7);
				@AddActor(L8, "b10q03_blood", L7, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
				@AddActor(tv1, "b10q03_blood_sel", L7, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "b10q03_blood.xml");
			} else {
				if (a0 == "fail") {
					f_7b_a0_v();
				} else {
					if (a0 == "completed") {
						f_83_a0_v();
					}
				}
			}
		}
	}

	void f_70_a0_v(void)
	{
		int L0;
		@GetVariable("b10q03", L0);
		if (L0 != 1000) {
			f_7b_a0_v();
		}
	}

	void f_7b_a0_v(void)
	{
		@SetVariable("b10q03", -1);
		f_8b_a0_v();
	}

	void f_83_a0_v(void)
	{
		@SetVariable("b10q03", 1000);
		f_8b_a0_v();
	}

	void f_8b_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			tv0->Remove();
		}
		@RemoveActor(f_ae_a0_o());
	}

	void f_96_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_8b_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_70_a0_v();
	}
}

object f_ae_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void f_b4_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

