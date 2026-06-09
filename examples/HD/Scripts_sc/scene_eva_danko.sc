event OnLoad 5;
event OnGameTime 9;
event OnUnload 6;
event OnTrigger 26;

var object g0;

maintask t0
{
	var bool tv0;
	var bool tv1;
	var object tv2;
	var object tv3;

	void init(void)
	{
		@SetTimeEvent(1, 151);
		@SetTimeEvent(2, 151.5);
		@SetTimeEvent(3, 180);
		tv0 = true;
		tv2 = f_a7_a4_o(f_96_a0_o(), "pt_eva", "NPC_Eva", "NPC_Danko_Eva.xml");
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		if (tv0) {
			tv2 = f_a7_a4_o(f_96_a0_o(), "pt_eva", "NPC_Eva", "NPC_Danko_Eva.xml");
		}
		if (tv1) {
			tv3 = f_a7_a4_o(f_96_a0_o(), "pt_eva", "pers_nudegirl", "nudegirl_danko.xml");
		}
	}

	void OnGameTime(int a0, float a1)
	{
		@Trace("OnGameTime" + a0 + " " + a1);
		if (a0 == 1) {
			tv0 = false;
			tv1 = true;
		} else {
			if (a0 == 2) {
				if (!tv2) {
					float L0;
					f_b9_a1_i(a1);
					@GetGameTime(L0);
					L0 = L0 + 1;
					@SetTimeEvent(4, L0);
				} else {
					float L1;
					@GetGameTime(L1);
					L1 = L1 + 0.30000001192092896;
					if (L1 < 190) {
						@SetTimeEvent(a0, L1);
					}
				}
			} else {
				if (a0 == 3) {
					if (!tv3 && !tv2) {
						f_9c_a1_o("quest_d8_02");
					} else {
						float L2;
						@GetGameTime(L2);
						L2 = L2 + 0.30000001192092896;
						if (L2 < 189) {
							@SetTimeEvent(a0, L2);
						}
					}
				} else {
					if (a0 == 4) {
						f_c2_a1_i(a1);
					}
				}
			}
		}
	}

	void OnUnload(void)
	{
		if (tv2) {
			@RemoveActor(tv2);
		}
		if (tv3) {
			@RemoveActor(tv3);
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "noeva") {
			tv0 = false;
		} else {
			if (a0 == "eva") {
				tv0 = true;
			}
		}
	}
}

object f_96_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_9c_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
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
		@AddActor(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

int f_b9_a1_i(float a0)
{
	return f_cb_a3_i(533094, 533093, a0);
}

int f_c2_a1_i(float a0)
{
	return f_cb_a3_i(533228, 533227, a0);
}

int f_cb_a3_i(int a0, int a1, float a2)
{
	int L0;
	@AddMessage(a0, a1, a2, L0);
	@SendWorldWndMessage(6);
	return L0;
}

